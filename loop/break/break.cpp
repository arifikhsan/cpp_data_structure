//? 5.6

#include <iostream>
using namespace std;

int main()
{
  int inputtedMonthNumber;

  cout << "Month Number: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12" << endl;
  cout << "Choose your favorite month: ";
  scanf("%d", &inputtedMonthNumber);
  cout << endl;
  printf("Your favorite month is: ");

  switch (inputtedMonthNumber)
  {
  case 1:
    printf("January");
    break;
  case 2:
    printf("February");
    break;
  case 3:
    printf("March");
    break;
  case 4:
    printf("April");
    break;
  case 5:
    printf("May");
    break;
  case 6:
    printf("June");
    break;
  case 7:
    printf("July");
    break;
  case 8:
    printf("August");
    break;
  case 9:
    printf("September");
    break;
  case 10:
    printf("October");
    break;
  case 11:
    printf("November");
    break;
  case 12:
    printf("December");
    break;

  default:
    printf("None of them!");
    break;
  }
  printf("\n");
}
