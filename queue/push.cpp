#include <iostream>
#include <queue>

using namespace std;

int main()
{
  // Empty Queue
  queue<int> myqueue;
  myqueue.push(1);
  myqueue.push(2);
  cout << "front: " << myqueue.front() << endl;
  cout << "back: " << myqueue.back() << endl;
  cout << "size: " << myqueue.size() << endl;
  cout << "empty: " + myqueue.empty() << endl;

  myqueue.pop();
  myqueue.pop();
  cout << "empty: " << myqueue.empty() << endl;

  // Printing content of queue
  // while (!myqueue.empty())
  // {
  //   cout << ' ' << myqueue.front();
  //   myqueue.pop();
  // }
}
