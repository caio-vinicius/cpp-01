/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    Zombie::name = name;
}

Zombie::~Zombie() {
    if (!Zombie::name.empty())
        std::cout << Zombie::name + ": killed" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << Zombie::name + ": BraiiiiiiinnnzzzZ..." << std::endl;
} 
    
Zombie  *Zombie::zombieHorde(int n, std::string name) {
    Zombie *zombies;

    (void)name; 
    zombies = new Zombie[n];

    for (unsigned int i = 0; i < (unsigned int)n; i++) {
        zombies[i].setName(name);
    }

    //std::cout << "arrggghhhh Horde horde horde ..." << std::endl;
    return (zombies);
}
