#include "main.h"
#include "stdlib.h"
/**
  *free_grid - free a 2 dimensional grid
  *@grid: 2d array
  *@height: height of grid
  *Return: none
  */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
