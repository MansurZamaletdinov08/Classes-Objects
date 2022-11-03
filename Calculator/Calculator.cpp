#include <iostream>

class Calculator {
    double num1;
    double num2;

public:
    double add(double num1, double num2) {
        return num1 + num2;
    }

    double subtract_2_1(double num1, double num2) {
        return num1 - num2;
    }

    double subtract_1_2(double num1, double num2) {
        return num2 - num1;
    }

    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    double divide_1_2(double num1, double num2) {
        return num1 / num2;
    }

    double divide_2_1(double num1, double num2) {
        return num2 / num1;
    }

    bool set_num1(double num1) {
        this->num1 = num1;
        if (num1 == 0) {
            std::cout << "Неверный ввод!" << std::endl;
            return 1;
        }
        else {
            return num1;
        }

        return num1;
    }
    
    bool set_num2(double num2) {
        this->num2 = num2;
        if (num2 == 0) {
            std::cout << "Неверный ввод!" << std::endl;
            return 1;
        }
        else {
            return 1;
        }

        return num1;
    }
};

int main() {
    setlocale(LC_ALL, "Ru");
    double num1, num2;

    int i = 0;

    Calculator operation;
    while (true) {
        std::cout << "Введите num1: ";
        std::cin >> num1;

        std::cout << "Введите num2: ";
        std::cin >> num2;

        operation.set_num1(num1);
        operation.set_num2(num2);
        if (num1 == 0) {
            std::cout << "Введите ещё раз: ";
            std::cin >> num1;
        }
        if (num2 == 0) {
            std::cout << "Введите ещё раз: ";
            std::cin >> num2;
        }
        std::cout << "num1 + num2 = " << operation.add(num1, num2) << std::endl;
        std::cout << "num1 - num2 = " << operation.subtract_2_1(num1, num2) << std::endl;
        std::cout << "num2 - num1 = " << operation.subtract_1_2(num1, num2) << std::endl;
        std::cout << "num1 * num2 = " << operation.multiply(num1, num2) << std::endl;
        std::cout << "num1 / num2 = " << operation.divide_1_2(num1, num2) << std::endl;
        std::cout << "num2 / num1 = " << operation.divide_2_1(num1, num2) << std::endl;
    }
}