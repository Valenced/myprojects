#pragma once
#include "screen.h"

#include <raylib.h>
#include <iostream>
#include <vector>

  class Grid 
{
public:
  Grid();
  void Initalize();
  void Print();
  void Draw();
  int grid[20][10];

private:
  std::vector<Color> GetCellColors();
  int num_Rows;
  int num_Cols;
  int cell_Size;
  int grid_XOffset;
  int grid_yOffset;
  std::vector<Color> colors;
};

