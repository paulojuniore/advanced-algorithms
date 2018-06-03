// 567A - Lineland Mail.
#include <iostream>

using namespace std;

int main()
{
    int n, array[100005];
    cin >> n;
    // leitura dos valores
    for (int i = 0; cin >> array[i]; i++);
    
    // primeiro par de valores min/max da saída
    cout << array[1] - array[0] << " " << array[n-1] - array[0] << endl;
    	
    for (int i = 1; i < n - 1; i++)
    {
        int mini = min(array[i] - array[i - 1], array[i + 1] - array[i]);
        int maxi = max(array[n - 1] - array[i], array[i] - array[0]);
        cout << mini << " " << maxi << endl;
    }
    
    // último par de valores min/max da saída
    cout << array[n - 1] - array[n - 2] << " " << array[n - 1] - array[0] << endl;
    return 0;
}
