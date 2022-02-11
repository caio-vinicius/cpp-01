/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include "Zombie.hpp"

Zombie  *Zombie::zombieHorde(int n, std::string name) {
    Zombie *zombies;

    zombies = new Zombie[n];
    for (unsigned int i = 0; i < (unsigned int)n; i++) {
        zombies[i].setName(name);
    }
    return (zombies);
}
