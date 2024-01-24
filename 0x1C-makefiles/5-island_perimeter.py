#!/usr/bin/python3

def def island_perimeter(grid):
    """this method finds the perimeter of an island surrounded by water
    in the grid 0 rep water and 1 land
     args: grid- consist of integers rep land and water
     Return: perimeter of the island
     """
    perimeter = 0
    for i in range(len(grid)):
        for x in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and  grid[i-1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j-1 == 1}:
                    perimeter -= 2

    return perimeter
