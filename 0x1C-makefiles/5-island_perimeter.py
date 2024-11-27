#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.

This module provides a function to determine the perimeter of an island
represented in a 2D grid, where land cells (1) are
surrounded by water cells (0).
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island in a 2D grid.

    Args::
        grid (List[List[int]]): A 2D grid representing land and water.
                                0 represents water, 1 represents land.

    Returns:
        int: The total perimeter of the island.
    """
    # Initialize perimeter
    perimeter = 0

    # Get grid dimensions
    rows = len(grid)
    cols = len(grid[0])

    # Iterate through each cell in the grid
    for r in range(rows):
        for c in range(cols):
            # Check if current cell is land
            if grid[r][c] == 1:
                # Check adjacent cells (up, down, left, right)
                # Each missing adjacent cell or grid boundary
                # adds 1 to perimeter

                # Check cell above
                if r == 0 or grid[r-1][c] == 0:
                    perimeter += 1

                # Check cell below
                if r == rows-1 or grid[r+1][c] == 0:
                    perimeter += 1

                # Check cell to the left
                if c == 0 or grid[r][c-1] == 0:
                    perimeter += 1

                # Check cell to the right
                if c == cols-1 or grid[r][c+1] == 0:
                    perimeter += 1

    return perimeter
