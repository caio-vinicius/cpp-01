/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef HUMAN_B_H
#define HUMAN_B_H

#include <iostream>

#include "Weapon.hpp"

class HumanB {
 private:
    std::string name;
    Weapon      *weapon;
 public:
    HumanB(std::string name) { this->name = name; };
    void    setWeapon(Weapon &weapon) { this->weapon = &weapon; }
    void    attack();
};

#endif
