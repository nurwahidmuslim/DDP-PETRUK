#include <iostream>

int main() {
    int num1, num2, kpk, fpb;

    std::cout << "Masukkan bilangan pertama: ";
    std::cin >> num1;

    std::cout << "Masukkan bilangan kedua: ";
    std::cin >> num2;

    int temp1 = num1, temp2 = num2;
    while (temp1 != temp2) {
        if (temp1 > temp2) {
            temp1 -= temp2;
        } else {
            temp2 -= temp1;
        }
    }

    fpb = temp1;
    kpk = (num1 * num2) / fpb;

    std::cout << "FPB dari " << num1 << " dan " << num2 << " adalah " << fpb << std::endl;
    std::cout << "KPK dari " << num1 << " dan " << num2 << " adalah " << kpk;

    return 0;
}
