#include<bits/stdc++.h>
using namespace std;
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

class Graph
{
public:

	map<int,bool>vis;
	map<int,list<int> >adj;

	void add_edge(int u,int v);
	void dfs(int s);
	
};
void Graph::add_edge(int u,int v){
	adj[u].push_back(v);
}
void Graph::dfs(int s){
	vis[s] = true;

	cout<<s<<" ";

	list<int>::iterator i;
    for (i = adj[s].begin(); i != adj[s].end(); ++i)
        if (!vis[*i])
            dfs(*i);
}

int main()
{
	init_code();
	Graph g;
	g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(2, 0);
    g.add_edge(2, 3);
    g.add_edge(3, 3);

    g.dfs(2);
}
