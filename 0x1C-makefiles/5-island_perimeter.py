#!/usr/bin/python3
"""
Module 5-island_perimeter
Defines function island_perimeter that returns
perimeter of the island described in grid variable
"""




def island_perimeter(grid):
    """
    Returns perimeter of island in grid

    Attributes:
        grid - list of integers(
                0 represents a water zone
                1 represents a land zone
                one cell is a square with side length 1
                grid cells are connected horizontally/vertically
                grid is rectangular, width and height dont exceed 100)
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    
    return size * 4 - edges * 2
