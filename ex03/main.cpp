/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int unnecessary_violence()
{
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}

int main() {
    if (!unnecessary_violence())
        return (1);
    return (0);
}
