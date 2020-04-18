#include <iostream>

using namespace std;

main()
{
  unsigned char a = 5, b = 9;
  int c;

  c = a & b; //* 00000001
  cout << "a & b = " << c << endl;

  c = a | b; //* 00001101
  cout << "a | b = " << c << endl;

  c = a ^ b; //* 00001100
  cout << "a ^ b = " << c << endl;

  c = ~a;
  cout << "~a = " << c << endl;

  c = b << 1;
  cout << "b << 1 = " << c << endl;

  c = b >> 1;
  cout << "b >> 1 = " << c << endl;
}
