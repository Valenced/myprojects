#pragma

class Grid 
{
public:
  Grid();
  void Initalize();
  void Print();
  int grid[20][10];

private:
  int num_Rows;
  int num_Cols;
  int cell_Size;
};
