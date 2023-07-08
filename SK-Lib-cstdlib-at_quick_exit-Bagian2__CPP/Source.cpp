#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

void f1() {
    std::cout << "pushed first" << std::endl;
}

extern "C" void f2() {
    std::cout << "pushed second\n";
}

int main() {
    auto f3 = [] {
        std::cout << "pushed third\n";
    };

    std::at_quick_exit(f1);
    std::at_quick_exit(f2);
    std::at_quick_exit(f3);
    std::quick_exit(0);

    _getch();
    return 0;
}