#ifndef CODEHUNT_CONSTANTS_H
#define CODEHUNT_CONSTANTS_H

#include <string>

const std::string base = "/tmp";
const std::string codehunt_folder = "CodeHunt";
const std::string levels = "/levels/";
const std::string solution_file = "/solution.cpp";
const std::string solution_object = "/solution.o";
const std::string solution_shared_object = "/solution.so";
const std::string compile_command = "gcc -std=c++11 -fPIC " + base + solution_file + " -c -o " + base + solution_object;
const std::string make_share_object_command = "gcc -shared " + base + solution_object + " -o " + base + solution_shared_object;

#endif //CODEHUNT_CONSTANTS_H
