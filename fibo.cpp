#include <iostream>

int main() {
    int n, a = 0, b = 1, c;
    std::cout << "Enter the number of terms to generate in the Fibonacci sequence: ";
    std::cin >> n;

    std::cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            std::cout << a << " ";
            continue;
        }
        if (i == 1) {
            std::cout << b << " ";
            continue;
        }
        c = a + b;
        a = b;
        b = c;
        std::cout << c << " ";
    }

    return 0;
}
