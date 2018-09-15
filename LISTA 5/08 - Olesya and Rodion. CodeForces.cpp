// 584B - Olesya and Rodion. 15/05/2018
#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    if (n == 1 && t == 10)
        cout << -1 << endl;
    else
    {
    	int digs = 1;
        cout << t;
        if (t == 10) 
			digs++;
        for (digs; digs < n; digs++)
            cout << '0';
    }

    return 0;
}
