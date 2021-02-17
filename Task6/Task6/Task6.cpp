#include <iostream>
#include <string>

using namespace std;

extern double x, result;
void F();

void main()
{
    cout.precision(4); // формат вывода
    cout << "vvedite x \n";
    cin >> x;
    F();
    cout << result;
}
