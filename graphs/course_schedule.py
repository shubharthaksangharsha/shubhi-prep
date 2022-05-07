from collections import deque
from typing import Dict, Optional, List
from graph import to_adj_list

def make_G_inv(G: Dict) -> Dict:
    #TC: O(V + E)
    print(G)
    G_prime = {}
    for node in G:
        G_prime[node] = set()
    for node in G:
        for neighbour_node in G[node]:
            G_prime[neighbour_node].add(node)
    return G_prime

def make_G_indeg(G: Dict) -> Dict:
    #TC: O(V + E)
    G_indeg = {}
    for node in G:
        G_indeg[node] = 0
    for node in G:
        for neighbour_node in G[node]:
            G_indeg[neighbour_node] = 1 + G_indeg.get(neighbour_node, 0)
                        
    #Another way    
    # G_inv = make_G_inv(G)
    # for x in G_inv:
    #     G_indeg[x] = len(G_inv[x])
    return G_indeg

def is_dag(G: Dict) -> bool:
    #TC: O(V + E)
    return False if topological_sort(G) == None else True

def topological_sort(G: Dict) -> Optional[List[int]]:
    #TC: O(V + E)
    '''
    Return True if given graph G is Directed acyclic graph. 
    '''
    empty_nodes, processed = [], []
    g_inv = make_G_inv(G)
    g_indeg = make_G_indeg(G)
    #For G_inv
    # for val in g_inv:
    #     if len(g_inv[val]) == 0:
    #         empty_nodes.append(val)
    
    #For G_indeg
    for val in g_indeg:
        if g_indeg[val] == 0:
            empty_nodes.append(val)
    q = deque(empty_nodes)
    while q:
        node = q.popleft() 
        processed.append(node)
        # for inv_node in G[node]:
        #     g_inv[inv_node].remove(node)
        #     if len(g_inv[inv_node]) == 0:
        #         q.append(inv_node)
        # for inv_node in G[node]:    
        for neighbour_node in G[node]:
            g_indeg[neighbour_node] -= 1
            if g_indeg[neighbour_node] == 0:
                q.append(neighbour_node)
    return processed if len(processed) == len(G) else None

def canFinish(numCourses: int, prerequisites: List[List[int]]) -> bool:
    V = set()
    for val in range(numCourses):
        V.add(val)
    E = set()
    for src in prerequisites:
        E.add(tuple(src))
    G = to_adj_list(V, E)
    return is_dag(G)
if __name__ == '__main__':
    # V = {0, 1, 2, 3}
    # E = {(0, 1), (3, 1), (1, 2), (2,3)}
    V = {0, 1, 2, 3}
    E = {(0, 1), (1, 2), (3, 2)}
    G = to_adj_list(V, E)
    # print(G)
    # print(topological_sort(G))
    # print(is_dag(G))
    # print(make_G_indeg(G))
    print(canFinish(2, [[1, 0]]))