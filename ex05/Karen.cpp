/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "Karen.hpp"

typedef void(Karen::*comments)();
    
void    Karen::debug(void) {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Karen::info(void) {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Karen::warning(void) {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Karen::error(void) {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
    return ;
}

void    Karen::complain(std::string level) {
    std::string levels_complaints[NUMBER_OF_COMPLAINTS] = {"debug", "info", "warning", "error"};
    comments complaints[NUMBER_OF_COMPLAINTS] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    unsigned int complaint;

    complaint = NUMBER_OF_COMPLAINTS + 1;
    for (unsigned int i = 0; i < NUMBER_OF_COMPLAINTS; i++) {
        if (levels_complaints[i] == level)
            complaint = i;
    }
    if (complaint == NUMBER_OF_COMPLAINTS + 1) {
        return ;
    }
    (this->*(complaints[complaint]))();
}
