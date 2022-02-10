/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

#define NUMBER_OF_COMPLAINTS 4

class Karen {
 public:
    void    complain(std::string level);
 private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
};

#endif
