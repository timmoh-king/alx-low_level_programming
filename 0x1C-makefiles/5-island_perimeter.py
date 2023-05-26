#!/usr/bin/python3

"""5-island_perimeter.py module"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i][j-1] == 0:
                    perimeter += 1
                if i == len(grid) -1 or grid[i+1][j] == 0:
                    perimeter += 1
                if j == len(grid[0]) - 1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter
