#include <iostream>
using namespace std;

double calculateDiscount(int quantity, int grossPrice)
{
  const unsigned int NIM = 021;  //? 1811021
  const double DISCOUNT_SMALL = 2.5;
  const int DISCOUNT_BIG = 10;

  int discountValue = quantity > NIM ? DISCOUNT_BIG : DISCOUNT_SMALL;
  return grossPrice * discountValue / 100;
}

int main()
{
  int quantity;
  int price;

  int grossPrice;
  double discountPrice;
  double netPrice;

  cout << "|------------------------------------|" << endl;
  cout << "|    Penghitungan Harga Pembelian    |" << endl;
  cout << "|------------------------------------|" << endl;

  cout << endl;
  cout << "Masukkan jumlah barang: ";
  cin >> quantity;
  cout << "Masukkan harga barang: ";
  cin >> price;
  cout << endl;

  grossPrice = price * quantity;
  discountPrice = calculateDiscount(quantity, grossPrice);
  netPrice = grossPrice - discountPrice;

  cout << "Harga kotor (beli): Rp. " << grossPrice << endl;
  cout << "Harga diskon (discount): Rp. " << discountPrice << endl;
  cout << "Harga bersih (total bayar): Rp. " << netPrice << endl;
}
