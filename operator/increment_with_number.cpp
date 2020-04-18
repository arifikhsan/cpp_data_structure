#include <iostream>
using namespace std;

main()
{
  int number = 5;
  int value = 5;
  int result_sum;
  int result_multiply;

  result_sum = number + ++value;
  cout << "number = " << result_sum << endl;

  result_multiply = number * ++value;
  cout << "number = " << result_multiply << endl;
}
