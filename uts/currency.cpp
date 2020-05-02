#include <iostream>
using namespace std;

main()
{
  float rupiah;
  int dollarExchangeRate = 14000;
  int euroExchangeRate = 16800;
  int yuanExchangeRate = 7800;

  cout << "Masukkan uang rupiah: ";
  cin >> rupiah;

  cout << "Setara dengan" << endl;
  cout << rupiah / dollarExchangeRate << " dolar" << endl;
  cout << rupiah / euroExchangeRate << " euro" << endl;
  cout << rupiah / yuanExchangeRate << " yuan" << endl;
}
