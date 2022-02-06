/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "HumanB.hpp"

void    HumanB::attack() {
    std::cout << \
        HumanB::name << " attacks with their " << HumanB::weapon->getType() << \
    std::endl;
}
