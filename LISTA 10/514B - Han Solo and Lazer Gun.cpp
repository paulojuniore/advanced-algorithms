// 514B - Han Solo and Lazer Gun. 21/07/2018
#include <bits/stdc++.h>

using namespace std;

int main() {
	set<double> st;
	int n, x0, y0, x, y;
	
	cin >> n >> x0 >> y0;
	while(n--){
		cin >> x >> y;
		
		if(y0 - y == 0 && x0 - x == 0)
			continue;
		else if(y0 - y == 0)
			st.insert(20000.0);
		else if(x0 - x == 0)
			st.insert(30000.0);
		else
			st.insert(1.0 * (x0 - x) / (y0 - y));
	}
	cout << st.size() << endl;
	
	return 0;
}
