// 610A - Pasha and Stick. 16/05/2018
#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    int ans = 0;
    
    if(!(n & 1)){
    	n >>= 1;
    	--n;
    	ans = n >> 1;
	}
	
	cout << ans << endl;

    return 0;
}
