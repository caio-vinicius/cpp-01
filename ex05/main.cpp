/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "Karen.hpp"

int karen() {
    Karen karen;
    
    std::cout << "==> DEBUG TEST" << std::endl;
    karen.complain("debug");
    std::cout << "==> INFO TEST" << std::endl;
    karen.complain("info");
    std::cout << "==> WARNING TEST" << std::endl;
    karen.complain("warning");
    std::cout << "==> ERROR TEST" << std::endl;
    karen.complain("error");
    std::cout << "==> WRONG TEST" << std::endl;
    karen.complain("err");
    std::cout << "==> WRONG TEST 2" << std::endl;
    karen.complain("fasdffaf");
    std::cout << "==> WRONG TEST 3" << std::endl;
    karen.complain("debu++");
    return (1);
}

int main(void) {
    if (!karen())
        return (1);
    return (0);
}
