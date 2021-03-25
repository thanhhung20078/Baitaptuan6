#include <iostream>
using namespace std;
char f[100];
bool c[100];
string s;
void rev(int n, int k, int length,int e)
{
    for (int i = e; i <= n; i++)
        if (c[i] == true)
        {
            c[i] = false;
            s += f[i];
            if (length == k) cout << s << endl;
            else rev(n, k, length + 1,i + 1);
            c[i] = true;
            s.erase(s.length() - 1);
        }
}
int main()
{
    int n, k;
    cout<<"Nhap n va k: ";
    cin >> n >> k;
    for (int i = 0; i < n; i++) { f[i] = i + 97; c[i] = true; }
    rev(n, k, 1, 0);
    return 0;
}
