#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int number, num1 = 0, num2 = 1;
    cout << "Введите член ряда фибоначчи:" << endl;
    cin >> number;
    cout << endl;
    for (int i = 0; i < number; i++)
    {
        num1 = num1 + num2;        
        num2 = num1 - num2;        
    }
    cout << num1;
    return 0;
}