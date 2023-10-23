#include <iostream>
#include "Header.h"

int main()
{
    std::cout << "Pick number: ";
    int a;
    std::cin >> a;
    std::cout << "Hallo World!\n";
    std::cout << std::endl;

    foo(a);
}

