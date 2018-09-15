// EZDIJKST - Easy Dijkstra Problem. 08/06/2018
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int, int> pii;
typedef vector<vector<pii> > Grafo;
#define INFINITO 999999999

void dijkstra(Grafo &g, int s, vector<int> &dist, vector<int> &peso)
{
	int n = g.size();
	dist.assign(n, INFINITO);
	dist[s] = 0;
	peso.assign(n, -1);
	priority_queue<pii, vector<pii>, greater<pii> > q;
	q.push(make_pair(dist[s], s));

	while(!q.empty())
	{
		int d = q.top().first;
		int u = q.top().second;
		q.pop();
		if(d != dist[u])
			continue;
		for(int i = 0; i < (int) g[u].size(); i++)
		{
			int v = g[u][i].first;
			int nprio = dist[u] + g[u][i].second;
			if(dist[v] > nprio)
			{
				dist[v] = nprio;
				peso[v] = u;
				q.push(make_pair(nprio, v));
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	
	while(n--)
	{
		int v, e;
		cin >> v >> e;
		
		Grafo g(v);
		for(int i = 0; i < e; i++)
		{
			int a, b, p;
			cin >> a >> b >> p;
			g[a-1].push_back(make_pair(b-1, p));
		}
		
		int origem, destino;
		cin >> origem >> destino;
		
		vector<int> dist;
		vector<int> peso;
		dijkstra(g, 0, dist, peso);
		
		if(dist[destino-1] != INFINITO)
			cout << dist[destino-1] << endl;
		else
			cout << "NO" << endl;
			
		//for(int i = 0; i < prio.size(); i++)
		//	cout << prio[i] << endl;
	}
	
	return 0;
}
