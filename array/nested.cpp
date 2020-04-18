#include <iostream>
using namespace std;

main()
{
  int matrix[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 0}};

  for (size_t i = 0; i < 2; i++)
  {
    for (size_t j = 0; j < 5; j++)
    {
      cout << matrix[i][j];
    }
    cout << endl;
  }
}
