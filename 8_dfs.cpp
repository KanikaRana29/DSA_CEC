#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int cost[10][10], i, j, k, n, e, top, v, stk[10], visit[10], visited[10];

    cout << "Enter the number of vertices ";
    cin >> n;
    cout << "\nEnter the number of edges ";
    cin >> e;
    cout << "\nEnter the start and end vertex of the edges: \n";

    for (k = 1; k <= e; k++)
    {
        cin >> i >> j;
        cost[i][j] = 1;
    }

    cout << "\nEnter the initial vertex to start the DFS traversal with: ";
    cin >> v;
    cout << "\nThe DFS traversal on the given graph is : \n";
    cout << v << " ";
    visited[v] = 1;

    k = 1;
    while (k < n)
    {
        for (j = n; j >= 1; j--)
        {
            if (cost[v][j] != 0 && visited[j] != 1 && visit[j] != 1)
            {
                visit[j] = 1;
                stk[top] = j;
                top++;
            }
        }
        v = stk[--top];
        cout << v << " ";
        k++;
        visited[v] = 1;
    }

    return 0;
}
