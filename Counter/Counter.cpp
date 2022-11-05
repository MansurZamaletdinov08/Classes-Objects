#include <iostream>
#include <string>

class Counter {
private:
    int y;
public:
    Counter(int value) {
        y = value;
    }

    Counter() {
        y = 1;
    }

    void incr() {
        y++;
    }

    void decr() {
        y--;
    }

    int rev() {
        return this->y;
    }
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
        Counter Counter(x);
    }
    else {
        x = 1;
        Counter Counter();
    }


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
            std::cout << x << std::endl;
        }
        if (op == 'x') {
            std::cout << "До всидания!";
        }
    } while (op != 'x');
}
