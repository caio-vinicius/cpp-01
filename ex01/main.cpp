/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "Zombie.hpp"

int moarbrainz() {
    Zombie zombie;
    Zombie *horde;

    std::cout << "1º test: 2 zombies in horde named `darnell`." << std::endl;
    horde = zombie.zombieHorde(2, "darnell");
    for (unsigned int i = 0; i < 2; i++) {
        std::cout << "-> " << \
            i << "º zombie name: " << horde[0].getName() << " | " << &horde[0] << std::endl;
    }
    delete[] horde;
    std::cout << "2º test: 10 zombies in horde named `creed`." << std::endl;
    horde = zombie.zombieHorde(10, "creed");
    for (unsigned int i = 0; i < 10; i++) {
        std::cout << "-> " << \
            i << "º zombie name: " << horde[0].getName() << " | " << &horde[0] << std::endl;
    }
    delete[] horde;
    return (0);
}

int main(void) {
    if (!moarbrainz())
        return (0);
    return (1);
}
