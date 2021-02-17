#include <iostream>
#include <string>

using namespace std;

void main()
{
    int x = 2; //Task1
    double f;
    f = 1 / (sqrt(x) + sqrt(2));
    cout.precision(4);
    cout << f;

    cout << " \nvvedite x \n";
    cin >> x;
    f = 1 / (sqrt(x) + sqrt(2));
    cout << f;
}