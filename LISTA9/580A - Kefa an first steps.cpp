// 580A - Kefa and first steps. 25/06/2018
#include <iostream>
using namespace std;

int main()
{
    int n, cont = 1, maxi = 1;
    cin >> n;
    int vet[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
        if (i > 0)
            if (vet[i] >= vet[i - 1])
            {
                cont++;
                maxi = max(maxi, cont);
            }
            else
                cont = 1;
    }

    cout << maxi << endl;
    return 0;
}
