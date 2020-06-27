//? 5.8

#include <iostream>
using namespace std;

int main()
{
  int number = 1;

bismillah:
  cout << "Bismillah" << endl;

subhanallah:
  cout << "Subhanallah" << endl;

  if (number++ < 5)
  {
    goto bismillah;
    goto subhanallah;
  }
}
