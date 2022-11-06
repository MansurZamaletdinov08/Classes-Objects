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
    
    int a = obj.rev();
    std::cout << "Вы хотите указать начальное значение счётчика ? Введите Y или N : ";
    std::cin >> f;

    if (f == 'Y') {
        std::cout << "Введите начальное значение счётчика : ";
        std::cin >> x;
        a = x;
    }
    else {
        x = 1;
        a = x;
    }
    Counter Counter(x);
    obj = Counter;

    a = x;

    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> op;

        if (op == '+') {
            obj.incr();
            a = obj.rev();
        }

        if (op == '-') {
            obj.decr();
            a = obj.rev();
        }

        if (op == '=') {
            obj.rev();
            std::cout << a << std::endl;
        }
        if (op == 'x') {
            std::cout << "До всидания!";
        }
    } while (op != 'x');
}
