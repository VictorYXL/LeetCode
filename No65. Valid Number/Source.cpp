#include <iostream>
#include "Solution.h"
int main()
{
    std::cout << Solution::isNumber("6e6.5") << std::endl;
    std::cout << Solution::isNumber(" 1.2  *") << std::endl;
    std::cout << Solution::isNumber(" 1e2.2  ") << std::endl;
    std::cout << Solution::isNumber(" 1.4e2.2  *") << std::endl;
    std::cout << Solution::isNumber(" 1.e.2  ") << std::endl;
    std::cout << Solution::isNumber("6.5") << std::endl;
    return 0;
}