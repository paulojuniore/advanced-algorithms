// 822A - I'm bored with life. 07/05/2018
#include <iostream>

using namespace std;

long long fatorial(long n)
{
	if(n == 1 || n == 0)
		return 1;
	else
		return n * fatorial(n - 1);
}

int main()
{
	long long a, b;
	cin >> a >> b;
	
	cout << fatorial(min(a, b)) << endl;
	
	return 0;
}
