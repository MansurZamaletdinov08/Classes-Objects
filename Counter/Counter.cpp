#include <iostream>
#include <string>

class Counter {
public:
    int y;
    int incr() {
        y++;
        return y;
    }

    int decr() {
        y--;
        return y;
    }

    int rev() {
        return y;
    }

private:
    int counter = 1;
};

int main() {
    setlocale(LC_ALL, "Ru");
    Counter obj;
    char f;
    int x;
    char op;

    std::cout << "Вы хотите указать начальное значение счётчика ? Введите Y или N : ";
    std::cin >> f;

    if (f == 'Y') {
        std::cout << "Введите начальное значение счётчика : ";
        std::cin >> x;
    }
    else {
        x = 1;
    }

    obj.y = x;

    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> op;

        if (op == '+') {
            obj.incr();
        }

        if (op == '-') {
            obj.decr();
        }

        if (op == '=') {
            obj.rev();
            std::cout << obj.y << std::endl;
        }
        if (op == 'x') {
            std::cout << "До всидания!";
        }
    } while (op != 'x');
}