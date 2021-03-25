#include <iostream>
using namespace std;
void check(int f[])
{
    cout << &f[0];
}
int main()
{
    int f[100];
    cout << &f[0] << endl;
    check(f);
    return 0;
}
// co che pass by reference
