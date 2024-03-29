// 608B - Hamming Distance Sum. 20/05/2018
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	
	long count[b.size()][2];
	if(b[0] == '0'){
		count[0][0] = 0;
		count[0][1] = 0;
	}
	else{
		count[0][0] = 0;
		count[0][1] = 1;
	}
	
	for(long p = 1; p < b.size(); p++){
		count[p][0] = count[p - 1][0] + (b[p] == '0');
		count[p][1] = count[p - 1][1] + (b[p] == '1');
	}
	
	int64_t res(count[b.size() - a.size()]['1' - a[0]]);
	
	for(long p = 1; p < a.size(); p++){
		int digit = a[p] - '0';
		int oppDigit = 1 - digit;
		long beforeStart = p - 1;
		long endingPos = b.size() - a.size() + p;
		res += count[endingPos][oppDigit] - count[beforeStart][oppDigit];
	}
	
	cout << res << endl;
	
	return 0;
}
