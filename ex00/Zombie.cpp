/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    Zombie::name = name;
}

Zombie::~Zombie() {
   std::cout << Zombie::name + ": killed" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << Zombie::name + ": BraiiiiiiinnnzzzZ..." << std::endl;
} 
