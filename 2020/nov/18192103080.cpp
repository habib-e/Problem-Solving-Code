#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
struct Edge
{
    int source, dest, weight;
};
struct Node
{
    int vertex, weight;
};
class Graph
{
public:
    vector<vector<Edge>> adjList;

    Graph(vector<Edge> const &edges, int N)
    {
        adjList.resize(N);

        for (Edge const &edge: edges)
        {
            adjList[edge.source].push_back(edge);
        }
    }
};

void print_route(vector<int> const &prev, int i)
{
    if (i < 0)
        return;

    print_route(prev, prev[i]);
    cout << i << " ";
}

struct comp
{
    bool operator()(const Node &lhs, const Node &rhs) const
    {
        return lhs.weight > rhs.weight;
    }
};
struct comp1
{
    bool operator()(const Node &lhs, const Node &rhs) const
    {
        return lhs.weight < rhs.weight;
    }
};

void shortestPath(Graph const& graph, int source, int N)
{
    priority_queue<Node, vector<Node>, comp> min_heap;
    min_heap.push({source, 0});
    vector<int> dist(N, INT_MAX);
    dist[source] = 0;
    vector<bool> done(N, false);
    done[source] = true;
    vector<int> prev(N, -1);
    while (!min_heap.empty())
    {
        Node node = min_heap.top();
        min_heap.pop();
        int u = node.vertex;
        for (auto i : graph.adjList[u])
        {
            int v = i.dest;
            int weight = i.weight;
            if (!done[v] && (dist[u] + weight) < dist[v])
            {
                dist[v] = dist[u] + weight;
                prev[v] = u;
                min_heap.push({v, dist[v]});
            }
        }
        done[u] = true;
    }
    for (int i = 0; i < N; ++i)
    {
        if (i != source && dist[i] != INT_MAX)
        {
            cout << "Path (" << source << " -> " << i << "): Minimum Cost = "
                 << dist[i] << " and Route is [ ";
            print_route(prev, i);
            cout << "]" << endl;
        }
    }
}

void shortestPath1(Graph const& graph, int source, int N)
{
    priority_queue<Node, vector<Node>, comp1> min_heap;
    min_heap.push({source, 0});
    vector<int> dist(N, INT_MAX);
    dist[source] = 0;
    vector<bool> done(N, false);
    done[source] = true;
    vector<int> prev(N, -1);
    while (!min_heap.empty())
    {
        Node node = min_heap.top();
        min_heap.pop();
        int u = node.vertex;
        for (auto i : graph.adjList[u])
        {
            int v = i.dest;
            int weight = i.weight;
            if (!done[v] && (dist[u] + weight) > dist[v])
            {
                dist[v] = dist[u] + weight;
                prev[v] = u;
                min_heap.push({v, dist[v]});
            }
        }
        done[u] = true;
    }
    for (int i = 0; i < N; ++i)
    {
        if (i != source && dist[i] != INT_MAX)
        {
            cout << "Path (" << source << " -> " << i << "): Minimum Cost = "
                 << dist[i] << " and Route is [ ";
            print_route(prev, i);
            cout << "]" << endl;
        }
    }
}


int main()
{
    vector<Edge> edges =
    {
        {0, 1, 4}, {0, 7, 8}, {1, 0, 4}, {1, 7, 11}, {1, 2, 8},
        {2, 1, 8}, {2, 8, 2}, {2, 5, 4}, {2, 3, 7},{3, 2, 7}, {3, 5, 14}, {3, 4, 9}, {1, 7, 11}, {1, 2, 8},
        {4, 3, 9}, {4, 5, 10}, {5, 6, 2}, {5, 2, 4},{5, 3, 14},{5, 4, 10},{6, 7, 1},
        {6,8,6},{6,5,2},{7,0,8},{7,1,11},{7,8,7},{7,6,1},{8,7,7},{8,2,2},{8,6,6}
    };
    int N = 9;
    Graph graph(edges, N);
    int source = 0;
    shortestPath(graph, source, N);
    N=9;
    source=0;
    shortestPath1(graph, source, N);
    return 0;
}
