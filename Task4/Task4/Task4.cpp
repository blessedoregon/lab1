#include <iostream>
#include <string>

using namespace std;

double x, result;
void F(void);

void main()
{
    cout.precision(4); // формат вывода
    cout << "vvedite x \n";
    cin >> x;
    F();
    cout << result;
}

void F(void)
{
    result = 1 / (sqrt(x) + sqrt(2));
}
