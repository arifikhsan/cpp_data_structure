//? 5.7

#include <iostream>
using namespace std;

int main()
{
  for (size_t number = 0; number <= 10; number++)
  {
    if (number == 2) //* Number 2 is skipped
      continue;

    cout << "Number is: " << number << endl;

    if (number == 8) //* End of loop
      break;
  }
}
