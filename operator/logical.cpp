#include <iostream>
using namespace std;

main()
{
  cout << "1 < 3 && 2 < 3 = " << (1 < 3 && 2 < 3) << endl;
  cout << "1 < 3 && 3 < 2 = " << (1 < 3 && 3 < 2) << endl;

  cout << "1 < 3 || 3 < 1 = " << (1 < 3 || 3 < 1) << endl;
  cout << "2 < 1 || 3 < 1 = " << (2 < 1 || 3 < 1) << endl;

  cout << "1 < 3 && 2 < 3 = " << !(1 < 3 && 2 < 3) << endl;
  cout << "1 < 3 || 3 < 1 = " << !(1 < 3 || 3 < 1) << endl;
}
