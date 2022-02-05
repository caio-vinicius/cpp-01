/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

int hi_this_is_brain() {
    std::string str;
    std::string *stringPTR;

    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << \
        "str address: `" << &str << "`" << \
        "| str value: `" << str << "`" << std::endl;
    std::cout << \
        "stringPTR address: `" << stringPTR << "`" << \
        "| stringPTR value: `" << *stringPTR << "`" << std::endl;
    std::cout << \
        "stringREF address: `" << &stringREF << "`" << \
        "| stringREF value: `" << stringREF << "`" << std::endl;
    return (1);
}

int main(void) {
    if (!hi_this_is_brain())
        return (0);
    return (1);
}
