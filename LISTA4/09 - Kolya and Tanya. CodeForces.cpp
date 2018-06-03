// 584B - Kolya and Tanya. 13/05/2018
#include <iostream>

using namespace std;

int main(){
	long long mod = 1000000007;
	
	long long n;
	cin >> n;
	
	long long ok = 1;
	for(long long p = 0; p < 3 * n; p++){
		ok *= 3;
		ok %= mod;
	}
	
	long long not_ok = 1;
	for(long long p = 0; p < n; p++){
		not_ok *= 7;
		not_ok %= mod;
	}
	
	long long saida = (mod + ok - not_ok) % mod;
	cout << saida << endl;
	
	return 0;
}
