/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include "Zombie.hpp"

void    randomChump(std::string name) {
    Zombie chump(name);

    chump.announce();
}
