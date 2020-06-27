// mengalihkan proses menuju ke suatu label

#include <iostream>
using namespace std;

int main()
{
  int number = 1;

bismillah:
  cout << "Bismillah" << endl;

subhanallah:
  cout << "Subhanallah" << endl;

  if (number++ < 10)
  {
    goto bismillah;
    goto subhanallah;
  }
}
