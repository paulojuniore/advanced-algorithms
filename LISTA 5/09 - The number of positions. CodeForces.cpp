// 124A - The number of positions. 12/05/2018
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, a, b;
	cin >> n >> a >> b;
	
	cout << min(n - a, b + 1) << endl;
		
	return 0;
}
