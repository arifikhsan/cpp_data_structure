#include <iostream>
using namespace std;

double calculateDiscount(int quantity, int grossPrice)
{
  const int DISCOUNT_SMALL = 5;
  const int DISCOUNT_BIG = 15;
  const int DISCOUNT_LIMIT = 100;

  int discountValue = quantity > DISCOUNT_LIMIT ? DISCOUNT_BIG : DISCOUNT_SMALL;
  return grossPrice * discountValue / 100;
}

int main()
{
  int quantity;
  int price;

  int grossPrice;
  double discountPrice;
  double netPrice;

  cout << "|------------------------------|" << endl;
  cout << "|    Hitung total pembelian    |" << endl;
  cout << "|------------------------------|" << endl;

  cout << endl;
  cout << "Masukkan jumlah barang: ";
  cin >> price;
  cout << "Masukkan harga barang: ";
  cin >> quantity;
  cout << endl;

  grossPrice = price * quantity;
  discountPrice = calculateDiscount(quantity, grossPrice);
  netPrice = grossPrice - discountPrice;

  cout << "Harga kotor (beli): Rp. " << grossPrice << endl;
  cout << "Harga diskon (discount): Rp. " << discountPrice << endl;
  cout << "Harga bersih (total bayar): Rp. " << netPrice << endl;
}
