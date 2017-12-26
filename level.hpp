#ifndef CODEHUNT_LEVEL_H
#define CODEHUNT_LEVEL_H

namespace ch {

    class Level {
    public:
        virtual void initialize_default_solution() = 0;

        virtual void ask_solution() = 0;

        virtual bool test_solution() = 0;
    };

}

#endif
