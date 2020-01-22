#include "../headers/GraphVec.h"

GraphVec::GraphVec(int nbNodes) {
    for (int i = 0; i < nbNodes; i++ )
        adj.push_back( std::vector<int>{} );
}

GraphVec::GraphVec( std::vector< std::vector< int > > ADJ) :
    adj (ADJ)
{}

GraphVec* GraphVec::copy() const {
    return new GraphVec(*this);
}

int GraphVec::nbNodes() const{
    return adj.size();
}

int GraphVec::nbEdges() const{
    return adj.size();
}

int GraphVec::degree(int i) const{
    return adj[i].size();
}

std::vector< int > GraphVec::adjacency(int i) const{
    return adj[i];
}

void GraphVec::addEdge(int i, int j) {
    if (max(i, j) >= nbNodes()) {
        std::cout << "Edge non créé : " << i << " ou " << j << " n'existe pas" << std::endl;
    }
    else {
        adj[i].push_back(j);
        adj[j].push_back(i);
    }
}

std::vector<int> GraphVec::sortGraphDegree() const{
    
    std::vector<int> tmp;

    for (int i = 0; i < adj.size(); i++) {
        bool done = false;
        for (int j = 0; j < tmp.size(); j++){
            if (adj[i].size() >= adj[tmp[j]].size()){
                tmp.insert(tmp.begin() + j, i);
                done = true;
                break;
            }
        }
        if (!done) {
            tmp.push_back(i);
        }
    }
    return tmp;
}
