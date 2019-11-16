#!/usr/bin/python3
"""
A simple function that count the island_perimeter
"""


def island_perimeter(grid):
    """Returns the island perimeter"""
    count = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[0])):
            if grid[i][j] == 1:
                count = count + 1
    if count == 0:
        return (0)
    return ((2 * count) + 2)
