#include <iostream>
#include <cstdlib>
int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Rus");
    if (argc < 2)
    {
        std::cerr << "No arguments specified!" << std::endl;
        return 1;
    }
    int next_number = 0, previous_number = 1;
    for (int i = 0; i < atoi(argv[1]); i++)
    {
        next_number = next_number + previous_number;
        previous_number = next_number - previous_number;
    }
    std::cout << next_number;
    return 0;
}