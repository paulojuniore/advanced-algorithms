// 1087 - Dama.
#include <bits/stdc++.h>

using namespace std;

int main(){
	int x1, y1, x2, y2;
	while(true){
		cin >> x1 >> y1 >> x2 >> y2;
		
		if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
			break;
		
		int dist_x = abs(x2 - x1);
		int dist_y = abs(y2 - y1);
		
		if(x1 == x2 && y1 == y2)
			cout << 0 << endl;
		else if(dist_x == dist_y)
			cout << 1 << endl;
		else if(x1 == x2 || y1 == y2)
			cout << 1 << endl;
		else
			cout << 2 << endl;
	}
	return 0;
}
