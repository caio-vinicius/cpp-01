/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

#define NUMBER_OF_COMPLAINTS 4

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3
    
const std::string g_levels_complaints[NUMBER_OF_COMPLAINTS] = {"debug", "info", "warning", "error"};

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
