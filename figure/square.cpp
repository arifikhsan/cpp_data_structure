#include <iostream>
#include <math.h>
using namespace std;

main()
{
  int side;
  cout << "Masukkan sisi persegi: ";
  cin >> side;

  cout << "luas persegi = " << pow(side, 2) << endl;
  cout << "keliling persegi = " << side * 4 << endl;
}
