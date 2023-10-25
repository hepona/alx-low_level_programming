#!/usr/bin/python3
"""
function that returns the perimeter of the island described in grid:
"""


def island_perimeter(grid):
    p = 0
    for i in grid:
        for j in i:
            if j == 1:
                p = p + 4
    return p
