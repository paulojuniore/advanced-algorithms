// SPOJ - ADAQUEUE. 27/04/2018
#include <iostream>
#include <list>

using namespace std;

int main()
{
	int n, num;
	bool reverse = false;
	string comando;
	cin >> n;
	
	list<int> fila_dupla_entrada;
	for(int i = 0; i < n; i++)
	{
		cin >> comando;
		
		if(comando == "toFront")
		{
			cin >> num;
			if(!reverse)
				fila_dupla_entrada.push_front(num);
			else
				fila_dupla_entrada.push_back(num);
		}
		
		else if(comando == "push_back")
		{
			cin >> num;
			if(!reverse)
				fila_dupla_entrada.push_back(num);
			else
				fila_dupla_entrada.push_front(num);
		}
		
		else if(comando == "back")
		{
			if(!reverse)
			{
				if(!fila_dupla_entrada.empty())
				{
					cout << fila_dupla_entrada.back() << endl;
					fila_dupla_entrada.pop_back();
				}
				else
					cout << "No job for Ada?" << endl;
			}
			else
			{
				if(!fila_dupla_entrada.empty())
				{
					cout << fila_dupla_entrada.front() << endl;
					fila_dupla_entrada.pop_front();
				}
				else
					cout << "No job for Ada?" << endl;
			}
		}
		
		else if(comando == "front")
		{
			if(!reverse)
			{
				if(!fila_dupla_entrada.empty())
				{
					cout << fila_dupla_entrada.front() << endl;
					fila_dupla_entrada.pop_front();
				}
				else
					cout << "No job for Ada?" << endl;	
			}
			else
			{
				if(!fila_dupla_entrada.empty())
				{
					cout << fila_dupla_entrada.back() << endl;
					fila_dupla_entrada.pop_back();
				}
				else
					cout << "No job for Ada?" << endl;
			}
		}
		
		else if(comando == "reverse")
			reverse = !reverse;
	}
	
	return 0;
}
