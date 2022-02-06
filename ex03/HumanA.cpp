/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include "HumanA.hpp"

void    HumanA::attack() {
    std::cout << \
        HumanA::name << " attacks with their " << HumanA::weapon.getType() << \
    std::endl;
}
