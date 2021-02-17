#include <iostream>
#include <string>

using namespace std;

double F(double x);

double F(double x)
{
    return  1 / (sqrt(x) + sqrt(2));
}

void main()
{
    cout.precision(4); // формат вывода
    cout << "nvvedite x \n";
    double y, x;
    cin >> x;
    y = F(x);
    cout << y;
}

