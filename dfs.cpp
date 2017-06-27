#include <bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    vector< int > *adj;
    public:
        Graph(int v){
            this->v = v;
            adj = new vector<int>[v];
        }
        void addEdge(int vertex , int weight){
            adj[vertex].push_back(weight);
        }
        void dfs(int src){
            stack <int> s;
            bool visited[v] = {false};
            
            s.push(src);
            visited[src] = true;

            while(!s.empty()){
                int index = s.top();
                s.pop();
                cout << index << "  ";
                for(vector <int> :: iterator it = adj[index].begin(); it != adj[index].end(); it++){
                    if(!visited[*it]){
                        visited[*it] = true;
                        s.push(*it);
                    }
                }
            } 
        }
};

int main(){
    Graph g(7);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(3,4);
    g.addEdge(2,5);
    g.addEdge(5,6);
    g.addEdge(6,7);
    
    g.dfs(1);

    return 0;
}