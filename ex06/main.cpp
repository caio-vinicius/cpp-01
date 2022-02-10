/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "Karen.hpp"

void    usage() {
    std::cout << \
        "Usage:" << "\n\n" << \
        "./karenFilter LEVEL(DEBUG | INFO | WARNING | ERROR)" << \
    std::endl;
}    

std::string strToUpper(std::string str) {
    for (unsigned int i = 0; i < str.length(); i++) {
        str[i] = std::toupper(str[i]);
    }
    return (str);
}

const std::string *getComplaint(std::string complaint) {
    for (unsigned int i = 0; i < NUMBER_OF_COMPLAINTS; i++) {
        if (g_levels_complaints[i] == complaint)
            return (&g_levels_complaints[i]);
        if (strToUpper(g_levels_complaints[i]) == complaint)
            return (&g_levels_complaints[i]);
    }
    return (0);
}

int karenFilter(int number_complaints, char **complaints) {
    Karen karen;
    std::string complaint;
    const std::string *complaint_level;

    if (number_complaints != 2)
        return (0);
    complaint = complaints[1];
    if (complaint.empty())
        return (0);
    complaint_level = getComplaint(complaint);
    if (!complaint_level) {
        std::cout << \
            "[ Probably complaining about insignificant problems ]" << \
        std::endl;
        return (1);
    }
    while (complaint_level->c_str()) {
        karen.complain(*complaint_level);
        complaint_level++;
    }
    return (1);
}

int main(int argc, char **argv) {
    if (!karenFilter(argc, argv)) {
        usage();
        return (1);
    }
    return (0);
}
