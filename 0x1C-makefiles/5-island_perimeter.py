#!/usr/bin/python3
"""
    Module: 5-island_perimeter

    This module contains functions to solve the Island Perimeter problem.
    The problem involves calculating the perimeter of an island represented
    as a 2D grid, where 1s represent land and 0s represent water.
    The perimeter is defined as the total length of the boundary between
    land and water.

    Functions:
        - check_grid(grid)
        - check_horizontal_axis(grid, row, index)
        - check_vertical_axis(grid, row, index)
        - island_perimeter(grid)
"""


def check_grid(grid):
    """
    Checks if the given grid is valid.

    Args:
        grid (list): A 2D list representing the grid.

    Returns:
        bool: True if the grid is valid, False otherwise.
    """
    if not grid:
        print("Error: Grid is empty")
        return False

    if not isinstance(grid, list):
        print("Error: Grid is not of type list")
        return False

    for row in grid:
        if not isinstance(row, list):
            print("Error: Grid is not a List of Lists")
            return False
        for item in row:
            if not isinstance(item, int):
                print("Error: Some elements in the grid are not integers")
                return False
    return True


def check_horizontal_axis(grid, row, index):
    """
    Checks the horizontal axis for the presence of land.

    Args:
        grid (list): A 2D list representing the grid.
        row (int): The row index.
        index (int): The column index.

    Returns:
        int: If the left side of the current cell is land, returns 2, else 0.
    """
    if index == 0:
        return 0

    if grid[row][index - 1] == 1:
        return 2
    else:
        return 0


def check_vertical_axis(grid, row, index):
    """
    Checks the vertical axis for the presence of land.

    Args:
        grid (list): A 2D list representing the grid.
        row (int): The row index.
        index (int): The column index.

    Returns:
        int: If the upper side of the current cell is land, returns 2, else 0.
    """
    if row == 0:
        return 0

    if grid[row - 1][index] == 1:
        return 2
    else:
        return 0


def island_perimeter(grid):
    """
    Calculates the perimeter of the island based on the given grid.

    Args:
        grid (list): A 2D list representing the grid.

    Returns:
        int: The perimeter of the island.
    """
    if not check_grid(grid):
        return

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                perimeter -= check_horizontal_axis(grid, i, j)
                perimeter -= check_vertical_axis(grid, i, j)

    return perimeter
