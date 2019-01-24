#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

#define sz 100
vector <int> graph[sz];
bool visited[sz];

void DFS(int now)
{
    visited[now] = true;
    printf("Now visiting  %d\n",now);
    int k,to;
    k = graph[now].size();
    for(int i =0; i < k; i++)
    {
        to = graph[now][i];
        if(visited[to] == false)
        {
            DFS(to);
        }
    }
    return;
}

int main()
{
    int x,y,nodes,edges;
    cin >> nodes >> edges;
    for(int i = 0; i < nodes; i++)
    {
        graph[i].clear();
        visited[i] = false;
    }
    for(int i = 0; i < edges; i++)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(int i = 0; i < nodes; i++)
    {
        if(visited[i] == false)
        {
            printf("The root is --->> %d\n",i);
            DFS(i);
        }
    }
    return 0;
}
