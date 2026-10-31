#include <vector>
#include <string>


enum type {
    Caliza,
    Hierro,
    Cobre,
    Carbon,
    Azufre,
    Uranio,
};

struct Edge {
    int to;
    int weight;
};

struct Node {
    std::string nameid;
    type type;
};

struct Graph {
    int V; // Number of vertices
    std::vector<Node> nodes; // List of nodes
    std::vector<std::vector<Edge>> adj; // Adjacency list

    Graph(int vertices) : V(vertices), adj(vertices) {}

    void setNode(int index, const std::string& nameid, type nodeType) {
        nodes[index] = {nameid, nodeType};
    }

    void addEdge(int u, int v, int weight) {
        adj[u].push_back({v, weight});
        adj[v].push_back({u, weight}); // For undirected graph
    }
};


