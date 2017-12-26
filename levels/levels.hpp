#ifndef CODEHUNT_LEVELS_H
#define CODEHUNT_LEVELS_H

#include <vector>
#include <memory>

#include "../level.hpp"

namespace ch {
    std::vector<std::unique_ptr<Level>> init_all_levels();
}

#endif
