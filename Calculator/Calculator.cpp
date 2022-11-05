#include <iostream>

class Calculator {
    double num1 = 1;
    double num2 = 1;

public:
    double add() {
        return num1 + num2;
    }

    double subtract_2_1() {
        return num1 - num2;
    }

    double subtract_1_2() {
        return num2 - num1;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }

    bool set_num1(double num1) {
        if (num1 == 0) {
            return false;
        }
        else {
            this->num1 = num1;
            return true;
        }
    }
    
    bool set_num2(double num2) {
        if (num2 == 0) {
            return false;
        }
        else {
            this->num2 = num2;
            return true;
        }

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
        while (operation.set_num1(num1) == false) {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите ещё раз: ";
            std::cin >> num1;
        }
        while (operation.set_num2(num2) == false) {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите ещё раз: ";
            std::cin >> num2;
        }
        std::cout << "num1 + num2 = " << operation.add() << std::endl;
        std::cout << "num1 - num2 = " << operation.subtract_2_1() << std::endl;
        std::cout << "num2 - num1 = " << operation.subtract_1_2() << std::endl;
        std::cout << "num1 * num2 = " << operation.multiply() << std::endl;
        std::cout << "num1 / num2 = " << operation.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << operation.divide_2_1() << std::endl;
    }
}
