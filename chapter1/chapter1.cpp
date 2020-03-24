#include "chapter1.h"
int practice1_1()
{
    return 0;
}

int practice1_2()
{
    return -1;
}

void practice1_3()
{
    std::cout << "Hello, World." << std::endl;
}

void practice1_4()
{
    int v1 = 0;
    int v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The muiltiply of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
}

void practice1_5()
{
    int v1 = 0;
    int v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The muiltiply of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 * v2 << std::endl;
}

void practice1_6() 
{
    int v1 = 0;
    int v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
    //std::cout << "The sum of " << v1;
    //    << " and " << v2; 
    //    << " is " << v1 + v2 << std::endl;
    std::cout << "The sum of " << v1 //去除分号即可
        << " and " << v2 //去除分号即可
        << " is " << v1 + v2 << std::endl;
}

void practice1_9() 
{
    int a = 50;
    int sum = 0;
    while (a <= 100) {
        sum += a;
        a++;
    }
    std::cout << "50-100 plus sum: " << sum << std::endl;
}

void practice1_10()
{
    int a = 10;
    while (a >= 0) {
        std::cout << a-- << "  ";
    }
    std::cout << std::endl;
}

void practice1_11()
{
    int a = 0;
    int b = 0;
    std::cout << "please input two numbers: ";
    std::cin >> a;
    std::cin >> b;
    int max = a > b ? a : b;
    int min = a > b ? b : a;
    while(min <= max) {
        std::cout << min << "  ";
        min++;
    }
    std::cout << std::endl;
}

void practice1_12()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i) {
        sum += i;
    }
    std::cout << "sum = " << sum << std::endl;
}

void practice1_16()
{
    
}