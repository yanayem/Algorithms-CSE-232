#include <bits/stdc++.h>
using namespace std;

bool isBicolorable(vector<int> graph[], int n)
{
    vector<int> color(n, -1);

    queue<int> q;
    color[0] = 0;
    q.push(0);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : graph[u])
        {
            if (color[v] == -1)
            {
                color[v] = 1 - color[u];
                q.push(v);
            }
            else if (color[v] == color[u])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;

        int l;
        cin >> l;

        vector<int> graph[n];

        for (int i = 0; i < l; i++)
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        if (isBicolorable(graph, n))
            cout << "BICOLORABLE." << endl;
        else
            cout << "NOT BICOLORABLE." << endl;
    }

    return 0;
}
