#include <iostream>
using namespace std;

main()
{
  int time = 10;

  if (time < 11)
  {
    cout << "Good morning!" << endl;
  } else if (time < 13) {
    cout << "Good afternoon!" << endl;
  } else {
    cout << "Good evening!" << endl;
  }
}
