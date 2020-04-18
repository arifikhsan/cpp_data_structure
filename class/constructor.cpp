#include <iostream>
using namespace std;

class Person {
  public:
    Person() {
      cout << "Hello world" << endl;
    }
};

int main()
{
  Person person;
  return 0;
}
