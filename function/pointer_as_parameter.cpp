#include <iostream>
using namespace std;

void myFunction(string* pointer) {
  cout << pointer << endl;
}

int main()
{
  string name = "arif";
  myFunction(&name);
  return 0;
}
