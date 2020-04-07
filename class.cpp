#include <iostream>
using namespace std;

class Person {
  public:
    string name;
};

int main()
{
  Person arif;
  arif.name = "arif";
  cout << arif.name << endl;
  return 0;
}
