#ifndef CODEHUNT_GENERIC_LEVEL_H
#define CODEHUNT_GENERIC_LEVEL_H

#include <iostream>
#include <functional>
#include <vector>
#include <initializer_list>
#include <tuple>
#include <iomanip>

#include "level.hpp"
#include "codeloader.hpp"

//Tuple printer
// Define a type which holds an unsigned integer value
template<std::size_t> struct int_{};

std::ostream& operator<<(std::ofstream& os, const std::string& str){
    os << "\"" << str << "\"";
    return os;
}

template <class Tuple, size_t Pos>
std::ostream& print_tuple(std::ostream& out, const Tuple& t, int_<Pos> ) {
    out << std::get< std::tuple_size<Tuple>::value-Pos >(t) << ',';
    return print_tuple(out, t, int_<Pos-1>());
}

template <class Tuple>
std::ostream& print_tuple(std::ostream& out, const Tuple& t, int_<1> ) {
    return out << std::get<std::tuple_size<Tuple>::value-1>(t);
}

template <class... TupleArgs>
std::ostream& operator<<(std::ostream& out, const std::tuple<TupleArgs...>& t) {
    out << '(';
    print_tuple(out, t, int_<sizeof...(TupleArgs)>());
    return out << ')';
}

//Call any Function with Tuple as parameter
template<typename Function, typename Tuple, size_t ... I>
auto call(Function f, Tuple t, std::index_sequence<I ...>)
{
    return f(std::get<I>(t) ...);
}

template<typename Function, typename Tuple>
auto call(Function f, Tuple t)
{
    static constexpr auto size = std::tuple_size<Tuple>::value;
    return call(f, t, std::make_index_sequence<size>{});
}

namespace ch {

    template<class InputProvider, class DefaultSource, typename Ret, typename... Args>
    class GenericLevel final : public Level {
    private:
        std::function<Ret(Args...)> solution;

        CodeLoader<Ret, Args...> codeLoader;

    public:
        GenericLevel(std::function<Ret(Args...)> f) :
            solution(std::move(f)) {}

        void initialize_default_solution() {
            codeLoader.copy_default_to_solution(DefaultSource::get_source());
        }

        void ask_solution() {
            codeLoader.edit_solution();
        }


        bool test_solution() {
            bool solved = true;

            Ret(*user_solution)(Args...);
            codeLoader.compile_solution(&user_solution);
            std::vector<std::tuple<Args...>> test_inputs = InputProvider::get_inputs();

            std::cout << std::setfill(' ');
            std::cout << std::left;
            std::cout << std::string(10, ' ') << "Input";
            std::cout << std::string(10, ' ') << "Expected Output";
            std::cout << std::string(5, ' ') << "Your Output" << std::endl;

            for (std::tuple<Args...> input : test_inputs) {
                Ret expected = call(solution, input);
                Ret result = call(user_solution, input);

                bool match = expected == result; //Típus komparátort kell használni (mi van ha float)

                
                std::cout << match << std::string(9, ' ');
                std::ostringstream ss;
                ss << input;
                std::cout << std::setw(15) << ss.str();

                std::cout << std::setw(20) << expected;
                std::cout << result << std::endl;

                if (!match){
                    solved = false;
                }
            }
            codeLoader.release_solution_code();
            return solved;
        }


    };




}

#endif
