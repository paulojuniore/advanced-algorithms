// 1091 - Divisão da Nlogônia
#include <iostream>

using namespace std;

int main(){
	int n, pdx, pdy;
	while(true){
		cin >> n;
		if(n == 0)
			break;
		cin >> pdx >> pdy;
		int x, y;
		for(int i = 0; i < n; i++){
			cin >> x >> y;
			if(x > pdx && y > pdy)
				cout << "NE" << endl;
			else if(x < pdx && y > pdy)
				cout << "NO" << endl;
			else if(x > pdx && y < pdy)
				cout << "SE" << endl;
			else if(x < pdx && y < pdy)
				cout << "SO" << endl;
			else
				cout << "divisa" << endl;
		}
	}
	return 0;
}
