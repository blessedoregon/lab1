#include <iostream>
#include <string>

using namespace std;

double F(double x);

void main()
{
    cout.precision(4); // формат вывода
    cout << "nvvedite x \n";
    double y, x;
    cin >> x;
    y = F(x);
    cout << y;
}

double F(double x)
{
    return  1 / (sqrt(x) + sqrt(2));
}