#By Shubharthak
from collections import defaultdict, deque
from typing import Dict, List, Set
def to_adj_list(V: Set, E: Set) -> Dict:
    #TC: O(V + E)
    '''
    Returns the given vertices V, edges E to a Graph Dict
    V = {1, 2, 3, 4, 5, 6}
    E = {(1, 4), (2, 3), (2, 7), (7, 5), (3, 3)}
    '''
    G = {}
    for x in V:
        G[x] = set()
    for src, dest in E:
        assert src in G, f"Error!!! {src} is not found in the vertices set V"
        G[src].add(dest)
    return G

def single_source_unweighted(G: Dict, source_path: int) -> Dict:
    '''
    Return the dict of all minimum units of paths from the given source_path
    '''
    dict_of_source, visited, d = {}, set([source_path]), deque([(source_path, 0)])
    while d:
        source, level = d.popleft()
        dict_of_source[source] = level
        for child_node in G[source]:
            if child_node in visited: continue
            d.append((child_node, level + 1))
            visited.add(child_node)
    return dict_of_source

def single_pair_unweighted(G: Dict, source: int, destination: int) -> int:
    '''
    Return the minimum unit required by the source_path to destination.
    '''
    visited, d = set([source]), deque([(source, 0)])
    while d:
        cur_src, level = d.popleft()
        if cur_src == destination:
            return level
        for child_node in G[cur_src]:
            if child_node in visited: continue
            d.append((child_node, level + 1))
            visited.add(child_node)
    '''
    Another Solution:-
    get_path = single_source_unweighted(G, source)
    return get_path[destination]
    '''       
def bfs_print(G: Dict, start_node: int) -> None:
    '''
    Print the Level Order of the start_node.
    '''
    d = deque([start_node])
    visited = set([start_node])
    while d:
        node = d.popleft()
        print(node)
        for child_node in G[node]:
            if child_node in visited: continue
            d.append(child_node)
            visited.add(child_node)
            
def bfs_list2list(G: Dict, start_node: int) -> List[List[int]]:
    '''
    Returns List of List containing Nodes value in Level Order of the start_node.
    '''
    dict_of_nodes = defaultdict(list)
    visited = set([start_node])
    d = deque([(start_node, 0)])
    while d:
        node, level = d.popleft()
        dict_of_nodes[level].append(node)
        for child_node in G[node]:
            if child_node in visited: continue
            d.append((child_node, level + 1))
            visited.add(child_node)
    return [dict_of_nodes[i] for i in range(len(dict_of_nodes))]

def bfs_list(G: Dict, start_node: int) -> List[int]:
    '''
    Return the List of Node in Level Order of the start_node.
    '''
    d = deque([start_node])
    list_of_nodes = []
    visited = set([start_node])
    while d:
        node = d.popleft()
        list_of_nodes.append(node)
        for child_node in G[node]:
            if child_node in visited: continue
            d.append(child_node)
            visited.add(child_node)
    return list_of_nodes

def dfs_preorder_print(G: Dict, start_node: int) -> None:
    '''
    Print the Pre-Order Traversal of start_node.
    '''
    visited = set([start_node])
    def recurse(start_node):
        print(start_node)
        for child_node in G[start_node]:
            if child_node in visited: continue
            visited.add(child_node)
            recurse(child_node)
    recurse(start_node)
    
def dfs_preorder_list(G: Dict, start_node: int) -> List[int]:
    '''
    Return the List of Node in Pre-Order Traversal of start_node.
    '''
    visited = set([start_node])
    list_of_node = []
    def recurse(start_node):
        list_of_node.append(start_node)
        for child_node in G[start_node]:
            if child_node in visited: continue
            visited.add(child_node)
            recurse(child_node)
    recurse(start_node)
    return list_of_node

def dfs_postorder_print(G: Dict, start_node: int) -> None:
    '''
    Print the Pre-Order Traversal of start_node.
    '''
    visited = set([start_node])
    def recurse(start_node):
        for child_node in G[start_node]:
            if child_node in visited: continue
            visited.add(child_node)
            recurse(child_node)
        print(start_node)
    recurse(start_node)

def dfs_using_stack(G: Dict, start_node: int) -> None:
    '''
    Print the Pre-Order Traversal of start_node using own stack.
    '''
    stack, visited =  [start_node], set([start_node])
    while stack:
        node = stack.pop()
        print(node)
        for child_node in reversed(list(G[node])):
            if child_node in visited: continue
            stack.append(child_node)
            visited.add(child_node)

if __name__ == '__main__':
    V = {1, 2, 3, 4, 5, 6, 7}
    E = {(1, 4), (2, 3), (2, 7), (7, 5), (3, 3)}
    G = to_adj_list(V, E)
    print(G)
    bfs_print(G, 2)
    print('*' * 20)
    # print(bfs_list(G, 2))
    # print(bfs_list2list(G, 2))
    dfs_preorder_print(G, 2)
    print('*' * 20)
    # print(dfs_preorder_list(G, 2))
    dfs_using_stack(G, 2)
    # dfs_postorder_print(G, 2)
    # print(single_source_unweighted(G, 2))
    # print(single_pair_unweighted(G, 2, 1))
    
    