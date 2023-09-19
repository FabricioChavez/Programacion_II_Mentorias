#include <bits/stdc++.h>
using namespace std;
#define  Pi pair<int , int >


struct edge{
    Pi inicio;
    Pi fin;
    int peso;

    edge(const pair<int, int> &inicio, const pair<int, int> &fin, int peso) : inicio(inicio), fin(fin), peso(peso) {}

};
void dfs( int matrix[20][20] , Pi root , Pi antecesor , Pi target  , vector<edge> & aristas)
{

    matrix[root.first][root.second]=2;

    aristas.emplace_back(antecesor,root,1);
    vector<Pi> cardinales{{0,1},{0,-1},{-1,0},{1,0}};
    if(root==target)
        return;
    for(auto coordinates : cardinales)
    {
        if(matrix[root.first+coordinates.first][root.second+coordinates.second]!=2)
            dfs(matrix, make_pair(root.first+coordinates.first,root.second+coordinates.second), root,  target , aristas);
    }
    // Vuelta de la recursion o backtracking

}

void bfs(int matrix[20][20] , Pi root  , Pi target)
{
    queue<Pi> frontier;
    frontier.push(root);
    vector<Pi> cardinales{{0,1},{0,-1},{-1,0},{1,0}};
    while (!frontier.empty())
    {
        Pi current=frontier.front();
        frontier.pop();
        matrix[current.first][current.second]=2;
        if(root==target)
            break;
        for(auto coordinates : cardinales)
        {
            if(matrix[current.first+coordinates.first][current.second+coordinates.second]!=2)
                frontier.push(make_pair(current.first+coordinates.first,current.second+coordinates.second));
        }
    }

}


int main(){







}