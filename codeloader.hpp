#ifndef CODEHUNT_CODE_LOADER_H
#define CODEHUNT_CODE_LOADER_H

#include <iostream>
#include <fstream>
#include <functional>

#include <cstdlib>
#include <fstream>
#include <dlfcn.h>
#include <unistd.h>

#include "constants.h"

namespace ch {

    //
    template<typename Ret, typename... Args>
    class CodeLoader {
        void *handle;

    public:
        void copy_default_to_solution(std::string const &default_file_name) {

            std::fstream dst;
            dst.open (base + solution_file,std::ios::out|std::ios::binary);

            std::string pwd;
            {
                long size;
                char *buf;
                char *ptr;

                size = pathconf(".", _PC_PATH_MAX);

                if ((buf = (char *) malloc((size_t) size)) != NULL)
                    ptr = getcwd(buf, (size_t) size);
                pwd = ptr;
            }

            pwd = pwd.substr(0,pwd.find(codehunt_folder) + std::string(codehunt_folder).size());

            if(dst.is_open()) {
                std::ifstream src(pwd+ levels + default_file_name, std::ios::binary);
                dst << src.rdbuf();
            }
        }

        void edit_solution() {
            std::string cmd = "xterm -geometry 93x31+600+500 -e 'nano " + std::string(base + solution_file) + "'";
            system(cmd.c_str());
        }

        void compile_solution(Ret(**function)(Args...)) {

            system(compile_command.c_str());
            system(make_share_object_command.c_str());

            handle = dlopen((base + solution_shared_object).c_str(), RTLD_NOW);
            if (handle) {
                *function = (Ret(*)(Args...)) (dlsym(handle, "Solution"));
            } else {
                //TODO throw
            }
        }

        void release_solution_code() {
            dlclose(handle);
        }
    };

}

#endif
