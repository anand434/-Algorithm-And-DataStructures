#include <bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    vector <int> *adj;
    public:
        Graph(){}
        Graph(int v){
            this->v =v;
            adj = new vector<int>[v];
        }

        void addEdge(int vertex, int weight){
            adj[vertex].push_back(weight);
        }

        void bfs(int src){
            
            bool visited[v] = {false};

            queue<int> q;
            q.push(src);
            visited[src] = true;
            
            while(!q.empty()){
                int index = q.front();
                cout << index << " ";
                q.pop();
                for(vector <int> :: iterator i = adj[index].begin();
                    i != adj[index].end(); i++){
                        if(!visited[*i]){
                            visited[*i] = true;
                            q.push(*i);
                        }
                }
            }
        }

};

int main(){
    Graph g(9);
    g.addEdge(1 , 2);
    g.addEdge(1 , 3);
    g.addEdge(1 , 4);
    g.addEdge(2 , 5);
    g.addEdge(3 , 7);
    g.addEdge(3 , 6);
    g.addEdge(4 , 8);
    g.addEdge(4 , 9);

    g.bfs(1);

    return 0;
}