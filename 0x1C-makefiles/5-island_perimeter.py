#!/usr/bin/python3
"""Contains the island_perimeter"""

def island_perimeter(grid):
    """Fun that return the perinter """
    perimeter = 0

    nrow = len(grid)

    if grid != []:
        ncolums = len(grid[0])

    for a in range(nrow):
        for c in range(ncolums):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == nrow or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == ncolums or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter

