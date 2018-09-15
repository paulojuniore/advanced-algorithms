// 579B - Finding Team Member. 19/07/2018
#include <bits/stdc++.h>

using namespace std;

int main(){

    long n; 
	cin >> n;
    long N = n * (2 * n - 1);
    vector<pair<long, pair<long, long> > > pesos;

    for(long p = 0; p < 2 * n; p++){
        for(long q = 0; q < p; q++){
            long valor; 
			cin >> valor;
            pair<long, long> time; 
			time.first = q; 
			time.second = p;
            pesos.push_back(pair<long, pair<long, long> >(valor, time));
        }
    }

    sort(pesos.begin(), pesos.end());
    
	vector<long> respostas(2 * n, -1);

    for(long p = pesos.size() - 1; p >= 0; p--){
        pair<long, long> time = pesos[p].second;
        if(respostas[time.first] >= 0 || respostas[time.second] >= 0)
			continue;

        respostas[time.first] = time.second;
        respostas[time.second] = time.first;
    }

    for(long p = 0; p < 2 * n; p++)
    	cout << 1 + respostas[p] << " ";
    cout << endl;
    
    return 0;
}
