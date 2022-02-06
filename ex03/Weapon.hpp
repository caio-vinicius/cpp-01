/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
 private:
    std::string type;
 public:
    Weapon() {};
    Weapon(std::string type) { this->type = type; };
    const std::string   &getType() { return (this->type); };
    void                setType(const std::string &type) { this->type = type; };
};

#endif
