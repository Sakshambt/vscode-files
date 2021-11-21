from collections import deque


class Graph:
    def __init__(self, adjac_lis):
        self.adjac_lis = adjac_lis

    def get_neighbors(self, v):
        return self.adjac_lis[v]

    # This is heuristic function which is having equal values for all nodes
    def h(self, n):
        H = {
            'A': 1,
            'B': 1,
            'C': 1,
            'D': 1,
            'E': 1,
            'G': 1
        }

        return H[n]

    def a_star_algorithm(self, start, stop):

        open_lst = set([start])
        closed_lst = set([])

        curr_dist_of_nodes = {}
        curr_dist_of_nodes[start] = 0

        adjac_nodes = {}
        adjac_nodes[start] = start
        while len(open_lst) > 0:
            n = None

            for v in open_lst:
                if n == None or curr_dist_of_nodes[v] + self.h(v) < curr_dist_of_nodes[n] + self.h(n):
                    n = v

            if n == None:
                print('Path does not exist!')
                return None

            if n == stop:
                reconst_path = []

                while adjac_nodes[n] != n:
                    reconst_path.append(n)
                    n = adjac_nodes[n]

                reconst_path.append(start)
                reconst_path.reverse()

                print('Path found: {}'.format(reconst_path))
                return reconst_path

            # for all the neighbors of the current node do
            for (m, weight) in self.get_neighbors(n):

                if m not in open_lst and m not in closed_lst:
                    open_lst.add(m)
                    adjac_nodes[m] = n
                    curr_dist_of_nodes[m] = curr_dist_of_nodes[n] + weight

                else:
                    if curr_dist_of_nodes[m] > curr_dist_of_nodes[n] + weight:
                        curr_dist_of_nodes[m] = curr_dist_of_nodes[n] + weight
                        adjac_nodes[m] = n

                        if m in closed_lst:
                            closed_lst.remove(m)
                            open_lst.add(m)

            open_lst.remove(n)
            closed_lst.add(n)

        print('Path does not exist!')
        return None


adjac_lis = {
    'A': [('B', 2), ('E', 3)],
    'B': [('A', 2), ('C', 1), ('G', 9)],
    'C': [('B', 1)],
    'D': [('E', 6), ('G', 1)],
    'E': [('A', 3), ('D', 6)],
    'G': [('D', 1), ('B', 9)]
}
graph1 = Graph(adjac_lis)
graph1.a_star_algorithm(input("START NODE: "), input("GOAL NODE: "))
