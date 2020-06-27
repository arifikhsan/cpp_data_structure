#include <iostream>
using namespace std;

int main()
{

  for (int number = 0; number <= 100; number += 10)  // 0 10 20 ... 100
    cout << "Number is: " << number << endl;
  for (int number = 0; number <= 100; number += 10)  // 0 10 20 ... 100
    printf("Number is: %d\n", number);
}
