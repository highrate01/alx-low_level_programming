#!/usr/bin/python3
"""returns a perimeter of the island"""


def island_perimeter(grid):
    """Defines a function with an argument grid"""
    width = len(grid[0])
    height = len(grid)
    edges = 0
    sizes = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                sizes += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1

                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return (sizes * 4) - (edges * 2)
