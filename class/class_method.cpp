#include <iostream>
using namespace std;

class Person {
  public:
    void message() {
      cout << "Hello world" << endl;
    }
};

int main()
{
  Person person;
  person.message();
  return 0;
}

