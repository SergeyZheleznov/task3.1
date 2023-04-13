#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class Calculator {
protected:
    double num1;
    double num2;
    double res;
    double mult;
    double sub_1_2;
    double sub_2_1;
    double div_1_2;
    double div_2_1;

public:
    void add()
    {
        res = (double)num1 + (double)num2;
    };

    void multiply()
    {
        mult = (double)num1 * (double)num2;
    };

    void subtrack_1_2()
    {
        this->sub_1_2 = (double)num1 - (double)num2;
    };

    void subtrack_2_1()
    {
        this->sub_2_1 = (double)num2 - (double)num1;
    };

    void divide_1_2()
    {
        this->div_1_2 = (double)num1 / (double)num2;
    };

    void divide_2_1()
    {
        this->div_2_1 = (double)num2 / (double)num1;
    };

    void OuterCalculator()
    {
        std::cout << num1 << " + " << num2 << " = " << res << std::endl;
        std::cout << num1 << " - " << num2 << " = " << (double)sub_1_2 << std::endl;
        std::cout << num2 << " - " << num1 << " = " << (double)sub_2_1 << std::endl;
        std::cout << num1 << " * " << num2 << " = " << (double)mult << std::endl;
        std::cout << num1 << " / " << num2 << " = " << (double)div_1_2 << std::endl;
        std::cout << num2 << " / " << num1 << " = " << (double)div_2_1 << std::endl;
    };

    bool set_num1(double num1)
    {
            if (num1 != 0) {
                this->num1 = num1;
                return 1;
            }
            else if (num1 == 0) {
                std::cout << "Неправильный ввод!" << std::endl;
                return 0;
            }
    };

    bool set_num2(double num2)
    {       
            if (num2 != 0) {
                this->num2 = num2;
                return 1;
            }
            else if (num2 == 0) {
                std::cout << "Неправильный ввод!" << std::endl;
                return 0;
            }
    };
};
int main()
{
    setlocale(LC_ALL, "");
    std::system("chcp 1251");
    Calculator object;
    int i;
    double num1;
    double num2;

    do {
        do
        {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            std::cout << std::endl;
            object.set_num1(num1);
        } while (num1 == 0);

        do
        {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            std::cout << std::endl;
            object.set_num2(num2);
        } while (num2 == 0);

        object.add();
        object.multiply();
        object.subtrack_1_2();
        object.subtrack_2_1();
        object.divide_1_2();
        object.divide_2_1();

        object.OuterCalculator();

        std::cout << "Введите 1, если хотите пролжить работу " << std::endl;
        std::cin >> i;
     } while (i == 1);

    return 0;
};

