#include <iostream>
#include <vector>
#include <unistd.h>

#include "level.hpp"
#include "levels/levels.hpp"


static const char *const STR_WELCOME_HUN = "Üdv a C++ CodeHunt-ban!";
static const char *const STR_TOTAL_HUN = "Összesen ";
static const char *const STR_LEVELS_NUM_HUN = "db pálya van.";
static const char *const STR_NEXT_LEVEL_QUESTION_HUN = "\nJöhet a következő pálya? (N = kilépés)";
static const char *const STR_NEXT_LEVEL_HUN = "Következő pálya";
static const char *const STR_SOLVE_IT_HUN = "Oldd meg az alábbi minta alapján:\n\n";
static const char *const STR_WRITE_THE_CODE_HUN = "\nÍrd meg a kódot a szerkesztőben, majd mentsd el és lépj ki!";
static const char *const STR_CAN_WE_TEST_HUN = "Teszteljük? (N : kilépés)";
static const char *const STR_BAD_SOLUTION_HUN = "Sajnos rossz a megoldásod!, probáld újra!";
static const char *const STR_SOLVED_HUN = "GRATULA! SIKER!";
static const char *const STR_THANKS_HUN = "Köszönöm hogy játszottál :)";
static const char *const STR_YOUR_PERCENT_HUN = "Sikerességed: ";

int main() {
    std::vector<std::unique_ptr<ch::Level> > levels = ch::init_all_levels();
    size_t i = 0;
    int wins = 0;

    std::cout << STR_WELCOME_HUN << std::endl;
    std::cout << STR_TOTAL_HUN << levels.size() << STR_LEVELS_NUM_HUN << std::endl;
    std::string read;
    while (i < levels.size()) {

        std::cout << STR_NEXT_LEVEL_QUESTION_HUN << std::endl;
        std::cin >> read;
        if(read == "N"){
            break;
        }
        std::cout << STR_NEXT_LEVEL_HUN << std::endl;
        ch::Level& currentLevel = *(levels[i]);

        currentLevel.initialize_default_solution();

        std::cout << STR_SOLVE_IT_HUN;

        currentLevel.test_solution();
        bool solved = false;
        while (!solved) {
            std::cout << STR_WRITE_THE_CODE_HUN << std::endl;
            currentLevel.ask_solution();

            std::cout << STR_CAN_WE_TEST_HUN << std::endl;
            std::cin >> read;
            if(read=="N"){
                goto exit; //MIIIII?
            }

            solved = currentLevel.test_solution();
            if(!solved){
                std::cout << STR_BAD_SOLUTION_HUN << std::endl;
            } else {
                std::cout << STR_SOLVED_HUN << std::endl;
                wins++;
            }
            sleep(1);
        }
        i++;
    }
    exit:

    std::cout << STR_THANKS_HUN << std::endl;
    std::cout << STR_YOUR_PERCENT_HUN << (double)wins / (double)levels.size() * 100.0 << "%" << std::endl;

} 
