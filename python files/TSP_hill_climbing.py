import random


def DifferentPaths(tsp):
    cities = list(range(len(tsp)))
    solution = [0]
    for i in range(len(tsp)-1):
        randomCity = cities[random.randint(1, len(cities) - 1)]
        solution.append(randomCity)
        cities.remove(randomCity)
    # print(solution)
    return solution

# route length after visiting all the cities


def LenghtOfPath(tsp, solution):
    LenghtOfPath = 0
    for i in range(len(solution)):
        LenghtOfPath += tsp[solution[i - 1]][solution[i]]
    # print(LenghtOfPath)
    return LenghtOfPath


def getNeighbours(solution):
    neighbours = []
    for i in range(1, len(solution)):
        for j in range(i + 1, len(solution)):
            neighbour = solution.copy()
            neighbour[i] = solution[j]
            neighbour[j] = solution[i]
            neighbours.append(neighbour)
    # print(neighbours)
    return neighbours


def getBestNeighbour(tsp, neighbours):
    # best route will be find after
    bestRouteLength = LenghtOfPath(tsp, neighbours[0])
    bestNeighbour = neighbours[0]
    for neighbour in neighbours:
        currentRouteLength = LenghtOfPath(tsp, neighbour)
        if currentRouteLength < bestRouteLength:
            bestRouteLength = currentRouteLength
            bestNeighbour = neighbour
    #print(bestNeighbour, bestRouteLength)
    return bestNeighbour, bestRouteLength


def hillClimbingAlgo(tsp):
    currentSolution = DifferentPaths(tsp)
    currentRouteLength = LenghtOfPath(tsp, currentSolution)
    neighbours = getNeighbours(currentSolution)
    bestNeighbour, bestNeighbourRouteLength = getBestNeighbour(tsp, neighbours)

    while bestNeighbourRouteLength < currentRouteLength:
        currentSolution = bestNeighbour
        currentRouteLength = bestNeighbourRouteLength
        neighbours = getNeighbours(currentSolution)
        bestNeighbour, bestNeighbourRouteLength = getBestNeighbour(
            tsp, neighbours)

    currentSolution.append(0)
    for i in range(len(currentSolution)):
        if currentSolution[i] == 0:
            currentSolution[i] = 'A'
        elif currentSolution[i] == 1:
            currentSolution[i] = 'B'
        elif currentSolution[i] == 2:
            currentSolution[i] = 'C'
        elif currentSolution[i] == 3:
            currentSolution[i] = 'D'
        elif currentSolution[i] == 4:
            currentSolution[i] = 'E'
    return currentSolution


tsp = [
    [0, 7, 12, 10, 13],
    [7, 0, 14, 10, 12],
    [12, 14, 0, 14, 9],
    [10, 10, 14, 0, 7],
    [13, 12, 9, 7, 0]
]
print(hillClimbingAlgo(tsp))
