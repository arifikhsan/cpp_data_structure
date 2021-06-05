#include <iostream>
using namespace std;

main()
{
  int year = 5;
  int month = 4;
  int day = 3;

  const int dayInYear = 360;
  const int dayInMonth = 30;
  const int hourInDay = 24;
  const int minuteInHour = 60;
  const int secondInMinute = 60;

  int dayLength = (year * dayInYear) + (month * dayInMonth) + day;
  int hourLength = dayLength * hourInDay;
  int minuteLength = hourLength * minuteInHour;
  int secondLength = minuteLength * secondInMinute;

  cout << "Umur Muin adalah:" << endl;
  cout << dayLength << " hari" << endl;
  cout << hourLength << " jam" << endl;
  cout << minuteLength << " menit" << endl;
  cout << secondLength << " detik" << endl;
  cin;
}
