#!/usr/bin/python3
"""
A simple function that count the island_perimeter
"""


def island_perimeter(grid):
    """Returns the island perimeter"""
    per = 0
    r = len(grid)
    if (r - 1) < 1:
        return (per)
    c = len(grid[0])
    if (c - 1) < 1:
        return (per)
    if r > 100 or c > 100:
        return
    for i in range(r):
        for j in range(c):
            if grid[i][j] == 1:
                if (i - 1) == -1 or grid[i - 1][j] != 1:
                    per = per + 1
                if (j + 1) == c or grid[i][j + 1] != 1:
                    per = per + 1
                if (i + 1) == r or grid[i + 1][j] != 1:
                    per = per + 1
                if j < 0 or grid[i][j - 1] != 1:
                    per = per + 1
    return (per)
