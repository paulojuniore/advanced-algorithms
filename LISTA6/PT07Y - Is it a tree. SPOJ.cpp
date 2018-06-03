// PT07Y - Is it a tree. 23/05/2018
#include <iostream>
#include <vector>

using namespace std;

vector<int> grafo[10010];
bool visited[10010];
int ciclo;

void dfs(int u, int ant)
{
	if(visited[u])
	{
		ciclo = 1;
		return;
	}
	visited[u] = true;
	for(int i = 0; i < grafo[u].size(); i++)
	{
		int v = grafo[u][i];
		if(v != ant)
			dfs(v, u);
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	while(m--)
	{
		int a, b;
		cin >> a >> b;
		grafo[a].push_back(b);
		grafo[b].push_back(a);
	}
	
	dfs(1, 1);
	for(int i=1; i <= n; i++)
	{
		if(visited[i] == false)
			ciclo = 1;
	}
	
	if(ciclo)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
		
	return 0;
}
