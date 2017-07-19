#include <bits/stdc++.h>
using namespace std;

void bfs(vector<list<int>> graph, int src){
    
    vector <bool> visited(graph.size(),false);
    queue <int> q;
    q.push(src);
    visited[src] = true;
    
    while(!q.empty()) {
        
        int vertex = q.front();
        q.pop();
        cout << vertex << " ";
        
        for(auto itr = graph[vertex].begin() ; 
            itr!=graph[vertex].end() ; itr++) 
        {
            if(!visited[*itr])
                q.push(*itr);
            visited[*itr] = true;
        }
    }
}

int main(){
    vector< list <int> > graph;
    int v, e, src, des;
    cin >> v >> e;
    graph.resize(v);
    
    while(e--){
        cin >> src >> des;
        graph[src].push_back(des);
        graph[des].push_back(src);
    }
    cin >> src;
    bfs(graph , src);

    return 0;
}