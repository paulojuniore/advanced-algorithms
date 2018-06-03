// 322B - Ciel and Flowers. 09/05/2018
#include <iostream>

using namespace std;

int main()
{
	long long int r, g, b;
	cin >> r >> g >> b;

	int buques = 0;
	buques += (r/3) + (g/3) + (b/3);
	int resto = min((r%3), min((g%3), (b%3)));
	int soma_restos = (r%3 + g%3 + b%3);
	if(resto == 1 || resto == 2)
		buques += resto;
	else
	{
		if((soma_restos == 4 || soma_restos == 5) && r != 0 && g != 0 && b != 0)
			buques += 1;
	}
	cout << buques << endl;
	return 0;
}
