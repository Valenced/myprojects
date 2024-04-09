#include "../includes/grid.h"
#include <iostream>

Grid::Grid() 
{
  num_Rows = 20;
  num_Cols = 10;
  cell_Size = 30;
  
  
  Initalize();
}

void Grid::Initalize()
{
  for(int row = 0; row < num_Rows; row++)
  {
    for(int col = 0; col < num_Cols; col++)
      {
        grid[row][col] = 0;
      }
  }
}

void Grid::Print()
{
  for(int row = 0; row < num_Rows; row++)
  {
    for(int col = 0; col < num_Cols; col++)
    {
        std::cout << grid[row][col] << " ";
    }
      std::cout << std::endl;
  }
}
