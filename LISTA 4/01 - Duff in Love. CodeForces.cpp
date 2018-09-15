// 588B - Duff in Love. 13/05/2018
#include <iostream>
#include <cmath>

using namespace std;

long long primeFactors(long long n)
{
	long long ans=1;
	long long f=0;
	while(n%2 == 0)
	{
		cout << n / 2 << " ";
		if(f==0){
			ans *= 2;
			f=1;
		}
		n /= 2;
	}
	
	for(int i = 3; i <= sqrt(n); i += 2)
	{
		f=0;
		while(n%i == 0)
		{
			cout << i << " ";
			if(f==0){
				ans *= i;
				f=1;
			}	
			n /= i;
		}
	}
	
	if(n > 2)
		ans *= n;
	
	return ans;
}

int main(){
	long long n;
	cin >> n;
	cout << primeFactors(n) << endl;
	
	return 0;
}
