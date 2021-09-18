def choose_pivot(arr):
    indices = {}

    for i in range(len(arr)):
        if arr[i][0] in indices:
            continue
        indices[arr[i][0]] = i

    index = list(indices.values())
    index = sorted(index)
    return(index)