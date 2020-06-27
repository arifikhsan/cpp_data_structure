//? 5.9

#include <iostream>
using namespace std;

int main()
{
  const unsigned int length = 10;

  for (int number = length; number >= 0; number--)
  {
    int difference = length - number;
    printf("Number is: %i, other: %i, result: %i \n", number, difference, number + difference);
  }
}
