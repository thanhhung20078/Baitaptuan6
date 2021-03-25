#include <iostream>
using namespace std;
int f[100];
void rev(int n,int s,int t,int e)
{
	for (int i = e; i >= 1; i--)
		if (s - i >= 0)
			{	
				f[t] = i;
				if (s - i == 0)
				{					
					for (int j = 1; j <= t; j++) cout << f[j] <<" ";
					cout << endl;
				}
				else rev(n, s - i, t + 1,i);
			}
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin >> n;
	rev(n, n, 1,n);
	return 0;
}
