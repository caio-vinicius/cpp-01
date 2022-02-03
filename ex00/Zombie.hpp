/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>
    
class Zombie {
 private:
    std::string name;
 public:
    Zombie(std::string name);
    ~Zombie();
    void        announce(void);
};
