#include "../include/grid.h"
#include <raylib.h>

Grid::Grid() 
{
  num_Rows = 20;
  num_Cols = 10;
  cell_Size = 30;
  grid_XOffset = GetScreenWidth()/3;
  grid_yOffset = 0;
  Initalize();
  colors = GetCellColors();
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

std::vector<Color> Grid::GetCellColors()
{
  Color dark_Gray = {26, 31, 40, 255};
  Color green = GREEN;
  Color red = RED;
  Color orange = ORANGE;
  Color yellow = YELLOW;
  Color purple = PURPLE;
  Color cyan = {21,114,209,255};
  Color blue = BLUE;

  // 0, 1, 2, 3, 4, 5, 6, 7
  // The struct just contains numbers, those numbers correlate to the designated color.
  // The Color we choose will determine the shape / type of block we are drawing
  return {dark_Gray, green, red, orange, yellow, purple, cyan, blue};
}

void Grid::Draw() 
{
  // Remember that row is the Y, and col is the X. It's reversed in this instance.
  for(int row = 0; row < num_Rows; row++)
  {
    for(int col = 0; col < num_Cols; col++)
    {
      // Using Cell Vaule to index through and figure out which color shape we are drawing
      // Tetris board is 300 by 600, Screen is 800 by 600
      int cell_Vaule = grid[row][col];
      DrawRectangle(col * cell_Size + grid_XOffset, row * cell_Size + grid_yOffset,cell_Size,cell_Size, colors[cell_Vaule]);
    }
  }
}
