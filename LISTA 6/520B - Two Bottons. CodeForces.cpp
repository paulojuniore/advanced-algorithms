// 520B - Two Bottons. 19/05/2018
#include <iostream>

using namespace std;

int main(){
	int n, m, toques = 0;
	cin >> n >> m;
	
	while(n != m)
	{
		if(m > n){
			if(m % 2 == 0){
				m /= 2;
				toques++;
			}
			else{
				m++;
				toques++;
			}
		}	
		else if(n > m){
			m++;
			toques++;
		}
	}
	cout << toques << endl;
	
	return 0;
}
