#include <iostream>
using namespace std;

int main()
{
    int windSpeed;
    cout << "Enter a wind speed: ";
    cin >> windSpeed;

    if (windSpeed < 25)
    {
        cout << "Not a strong wind" << endl;
    }
    else if (windSpeed >= 25 && windSpeed <= 38)
    {
        cout << "Strong wind" << endl;
    }
    else if (windSpeed >= 39 && windSpeed <= 54)
    {
        cout << "Gale" << endl;
    }
    else if (windSpeed >= 55 && windSpeed <= 72)
    {
        cout << "Whole Gale" << endl;
    }
    else if (windSpeed > 72)
    {
        cout << "Hurricane" << endl;
    }
    else
    {
        cout << "Something went wrong" << endl;
    }
}
