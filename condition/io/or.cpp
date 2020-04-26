#include <iostream>
using namespace std;

main()
{
  float nilai, tugas;

  cout << "masukkan nilai = ";
  cin >> nilai;
  cout << "masukkan nilai tugas = ";
  cin >> tugas;

  if (nilai >= 70.0 || tugas >= 75.0)
  {
    cout << "Lulus" << endl;
  }
  else
  {
    cout << "Belum lulus" << endl;
  }
}
