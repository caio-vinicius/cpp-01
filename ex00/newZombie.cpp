/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
    Zombie *_zombie;

    _zombie = new Zombie(name);
    return (_zombie);
}
