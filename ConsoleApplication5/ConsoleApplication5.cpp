

#include <iostream>
using namespace std;

int main()
{
    int s;
    int v;
    cout << "How much fast: \n";
    cin >> v;
    cout << "How many miles: \n";
    cin >> s;
    cout << "Hours\n";
    cout << s / v << "\n";
    cout << "Minutes\n";
    cout << s / v * 60;
    cout << "seconds\n";
    cout << s / v * 60 * 60;

    //N2!
    double a, b;
    cin >> a;
    cin >> b;
    cout << a + b << "\n";
    int sum;
    sum = a + b;
    cout << sum;
    double o;
    o = round(b) - b;
    cout << o;
    //N3!
    double hrn;
    cout << "Hrn ";
    cin >> hrn;
    cout << floor(hrn);



    //N5
    int seconds;
    cout << "Seconds: \n";
    cin >> seconds;
    cout << "Hours: \n"; seconds % 3600;
    cout << "Days: \n"; seconds * 86400;
    cout << "Minutes: \n "; seconds % 60;
    //N6!
    int km, tm;
    cout << "Enter km: \n";
    cin >> km;
    cout << "Enter time: \n";
    cin >> tm;
    cout << km % (tm * 60);
    //N8!
    int timehour, day, dayinwork;
    dayinwork = 8;
    timehour = 86400;
    cout << "time of day\n";
    cin >> day;
    cout << dayinwork * timehour << "Back to work" << dayinwork * day / timehour;
    //N9!
    int pricent, count;
    double discount;
    cout << "Enter Price: \n";
    cin >> pricent;
    cout << "counter: \n";
    cin >> count;
    cout << "enter  discount \n";
    cin >> discount;
    cout << "Overall price: ";
    cout << pricent * count + pricent / 100 * discount; "\n";
}


