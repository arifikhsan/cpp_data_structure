#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int radius;

  cout << "Masukkan jari jari lingkaran: ";
  cin >> radius;

  cout << "luas lingkaran = " << M_PI * pow(radius, 2) << endl;
  cout << "keliling lingkaran = " << 2 * M_PI * radius << endl;
}
