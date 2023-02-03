/*
        Graph introduction:

    -> Graph is a Set of : set of vertices and set of edges.
        G = {v,E}
        v = {v1,v2,v3...}
        E = {e1,e2,e3,e4...}
    
    -> Directed Graph:
    the Directed graphs are such graphs in which edges are directed in a single direction.
    
    In Directed graph there are two type of degrees associated to each vertex:
    indegree and outdegree

    sum of indegree = |E|
    sum of outdegree = |E|

    maximum number of edges = |v|*(|v|-1)

    -> Undirected Graph:
    Undirected graphs are such graphs in which the edges are directionless.
    
    sum of degree = 2*|E|
    maximum edges = (|v|*(|v|-1) )/2

    -> Walk: sequence of vertices and edges such that we can repeat vertices and edges.
    -> Trail: sequence of vertices and edges such that we can repeat vertices but not repeat edges.
    -> Path: sequence of vertices and edges such that we cannot repeat vertices and edges.

    ->Cyclic Graph : if a closed walk exists.
    ->Acyclic:
        1            1---->2
      /   \          ^     ^
     2     3         |     |  
                     4<----3
    
    graph contaning no cycle is also a tree.

    ->Weighted Graph: Weight assigned to edges.


*/