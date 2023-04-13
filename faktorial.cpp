#include <iostream>
using namespace std;

int main() {
  int n, faktorial = 1;
  cout << "Masukkan bilangan bulat positif: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    faktorial *= i;
  }

  cout << "Faktorial dari " << n << " adalah " << faktorial << endl;
  return 0;
}
