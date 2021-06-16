#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  string name;
  bool isActive;
  string isActiveStr;
  int semester;
  float GPA;
  bool isDeserve;
  string isDeserveStr;

  cout << "=== Penentuan Penerima Beasiswa ===" << endl;

  cout << "Masukkan nama: ";
  cin >> name;
  cout << "Apakah mahasiswa aktif? (tulis 'ya' atau 'tidak'): ";
  cin >> isActiveStr;
  cout << "Semester berapa? (tulis angka 2/4/8): ";
  cin >> semester;
  cout << "IPK berapa? (tulis angka dengan titik sebagai koma 3.2 2.4): ";
  cin >> GPA;

  isActive = isActiveStr == "ya";
  isDeserve = isActive && semester >= 2 && GPA >= 3.00;
  isDeserveStr = isDeserve ? "ya" : "tidak";


  cout << "=== Hasil ===" << endl;
  cout << "Nama: " + name << endl;
  cout << "Aktif: " + isActiveStr << endl;
  cout << "Semester: " + to_string(semester) << endl;
  cout << "IPK: ";
  cout << fixed << setprecision(2) << GPA << endl;
  cout << "Berhak mendapatkan beasiswa: " + isDeserveStr << endl;

}
