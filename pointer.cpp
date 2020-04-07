#include <iostream>

using namespace std;

int main() {
    string fruit = "apple";
    string drink = "juice";

    cout << fruit << endl;
    cout << &fruit << endl; // memory address
    cout << &drink << endl; // memory address

    string* pointer = &fruit;
    cout << pointer << endl;
}
