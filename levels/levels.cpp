#include <vector>
#include <memory>
#include <string>

#include "../level.hpp"
#include "../generic_level.hpp"

// TODO: Generálás
// TODO: Printer

//Ilyen egyszerű lenne a pályák írása:

//UnaryIntegerLevel (a fájl neve)
//#include ...
//default source: default_arithmetic_1.source
//test inputs:
//    {{0, 1, 5, 10, 12, 14, {33}}
//int level_1(int x) { level_1 a palya neve
//    return x * 10;
//}
//
//int level_2(int x) {
//    return x * 1;
//}

// És ezt kell generálni:
namespace ch {

    class BinaryIntInputProvider {
    public:
        static std::vector<std::tuple<int, int>> get_inputs() {
            return {std::tuple<int, int>(1, 2),
                    std::tuple<int, int>(2, 2),
                    std::tuple<int, int>(4, 5),
                    std::tuple<int, int>(10, 10)
            };
        }
    };

    class DefaultBinaryIntSource {
    public:
        static std::string get_source() {
            return "default_binary_int_1.source";
        }
    };

    class UnaryIntInputProvider {
    public:
        static std::vector<std::tuple<int>> get_inputs() {
            return {std::tuple<int>(1),
                    std::tuple<int>(2),
                    std::tuple<int>(4),
                    std::tuple<int>(10)
            };
        }
    };

    class DefaultUnaryIntSource {
    public:
        static std::string get_source() {
            return "default_arithmetic_1.source";
        }
    };

    class StringInputProvider {
    public:
        static std::vector<std::tuple<std::string>> get_inputs() {
            return {std::tuple<std::string>("hali"),
                    std::tuple<std::string>("hello"),
                    std::tuple<std::string>("bello"),
                    std::tuple<std::string>("baby")
            };
        }
    };

    class DefaultStringSource {
    public:
        static std::string get_source() {
            return "default_string_1.source";
        }
    };

    using BinaryIntegerL = GenericLevel<BinaryIntInputProvider, DefaultBinaryIntSource, int, int, int>;
    using UnaryIntegerL = GenericLevel<UnaryIntInputProvider, DefaultUnaryIntSource, int, int>;
    using StringL = GenericLevel<StringInputProvider, DefaultStringSource, std::string, std::string>;

    std::vector<std::unique_ptr<Level> > init_all_levels() {
        std::vector<std::unique_ptr<Level> > levels;

        levels.push_back(
                std::move(std::unique_ptr<Level>(
                        new BinaryIntegerL(
                                [](int x, int y) {
                                    return x * y;
                                }
                        )
                ))
        );
        levels.push_back(
                std::move(std::unique_ptr<Level>(
                        new UnaryIntegerL(
                                [](int x) {
                                    return x *10;
                                })
                ))
        );        levels.push_back(
                std::move(std::unique_ptr<Level>(
                        new UnaryIntegerL(
                                [](int x) {
                                    return x * -1;
                                })
                ))
        );
        levels.push_back(
                std::move(std::unique_ptr<Level>(
                        new UnaryIntegerL(
                                [](int x) {
                                    return x % 2;
                                })
                ))
        );
        levels.push_back(
                std::move(std::unique_ptr<Level>(
                        new UnaryIntegerL(
                                [](int x) {
                                    return x / 4;
                                })
                ))
        );
        levels.push_back(
                std::move(std::unique_ptr<Level>(
                        new StringL(
                                [](std::string s) {
                                    return s + " world";
                                })
                ))
        );
        levels.push_back(
                std::move(std::unique_ptr<Level>(
                        new StringL(
                                [](std::string s) {
                                    return s + s;
                                })
                ))
        );
        levels.push_back(
                std::move(std::unique_ptr<Level>(
                        new StringL(
                                [](std::string s) {
                                    return s + " " + std::to_string(s.size());
                                })
                ))
        );

        return std::move(levels);
    }
}
