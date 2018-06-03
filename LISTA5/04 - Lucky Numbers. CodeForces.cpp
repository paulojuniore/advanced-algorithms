// 630C - Lucky Numbers. 11/05/2018
#include <iostream>
#include <cmath>

using namespace std;

long long n, combinacoes = 0;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) 
        combinacoes += pow(2, i);
    
    cout << combinacoes << endl;
    
    return 0;
}
