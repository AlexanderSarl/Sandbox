#include <iostream>
#include <cstdlib>


int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Rus");
    int num1 = 0, num2 = 1;
    for (int i = 0; i < atoi(argv[1]); i++)
    {
        num1 = num1 + num2;
        num2 = num1 - num2;
    }
    std::cout << num1;
    return 0;
}