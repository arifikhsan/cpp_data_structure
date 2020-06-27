//? 5.4

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char const savedPassword[30] = "abc123";
  char inputtedPassword[30] = "";

  do
  {
    printf("Enter password: ");
    scanf("%s", inputtedPassword);
  } while (strcmp(inputtedPassword, savedPassword));
    printf("Welcome! \n");
}
