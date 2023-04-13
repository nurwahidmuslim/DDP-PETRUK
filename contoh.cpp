#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Rumus luas segitiga
  float alas, tinggi, luasSegitiga;
  cout << "Masukkan alas segitiga: ";
  cin >> alas;
  cout << "Masukkan tinggi segitiga: ";
  cin >> tinggi;
  luasSegitiga = 0.5 * alas * tinggi;
  cout << "Luas segitiga dengan alas " << alas << " dan tinggi " << tinggi << " adalah " << luasSegitiga << endl;

  // Rumus persamaan kuadrat
  float a, b, c, x1, x2, diskriminan;
  cout << "Masukkan koefisien a: ";
  cin >> a;
  cout << "Masukkan koefisien b: ";
  cin >> b;
  cout << "Masukkan koefisien c: ";
  cin >> c;
  diskriminan = b*b - 4*a*c;
  if (diskriminan >= 0) {
    x1 = (-b + sqrt(diskriminan)) / (2*a);
    x2 = (-b - sqrt(diskriminan)) / (2*a);
    cout << "Persamaan kuadrat " << a << "x^2 + " << b << "x + " << c << " memiliki akar-akar:" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  } else {
    cout << "Persamaan kuadrat " << a << "x^2 + " << b << "x + " << c << " tidak memiliki akar real." << endl;
  }

  // Rumus jarak antara dua titik
  float x1, y1, x2, y2, jarak;
  cout << "Masukkan koordinat titik 1 (x1, y1): ";
  cin >> x1 >> y1;
  cout << "Masukkan koordinat titik 2 (x2, y2): ";
  cin >> x2 >> y2;
  jarak = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
  cout << "Jarak antara titik (" << x1 << ", " << y1 << ") dan (" << x2 << ", " << y2 << ") adalah " << jarak << endl;

  return 0;
}
