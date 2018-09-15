// 500A - New Year Transportation. 25/07/2018
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int N, idx;
	cin >> N;
	cin >> idx;
	
	int currIdx =1;
	int b = 1;
	while(N--){
		int A;
		cin >> A;
		currIdx += A;
		b++;
		if(currIdx > b){
			while(currIdx > b){
				cin >> A;
				b++;
			}
		}	
		if(currIdx >= idx) break;
	}
	if(currIdx == idx){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}
