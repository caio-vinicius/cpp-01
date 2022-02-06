/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef HUMAN_A_H
#define HUMAN_A_H

#include <iostream>

#include "Weapon.hpp"

class HumanA {
 private:
    std::string name;
    Weapon      &weapon;
 public:
    HumanA(std::string name, Weapon &w): weapon(w) { this->name = name; };
    void    attack();
};

#endif
