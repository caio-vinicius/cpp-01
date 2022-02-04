/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>
    
class Zombie {
 private:
    std::string name;
 public:
    Zombie() {};
    Zombie(std::string name);
    ~Zombie();
    void        announce(void);
    void        setName(std::string name) { this->name = name; };
    std::string getName() { return (this->name); };
    Zombie      *zombieHorde(int n, std::string name);
};
