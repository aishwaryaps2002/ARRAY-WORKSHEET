#include <iostream>
using namespace std;
int main() 
{
  int r, c;
  int mat[10][10];
  int triplet[100][3];
  int z = 0;
  cout << "Enter number of rows: ";
  cin >> r;
  cout << "Enter number of columns: ";
  cin >> c;
  cout << "\nEnter elements of the matrix:\n";
  for (int i = 0; i < r; i++) 
  {
    for (int j = 0; j < c; j++) 
    {
      cin >> mat[i][j];
    }
  }
  cout << "\nGiven Matrix:\n";
  for (int i = 0; i < r; i++) 
  {
    for (int j = 0; j < c; j++) 
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < r; i++) 
  {
    for (int j = 0; j < c; j++) 
    {
      if (mat[i][j] != 0) 
      {
        triplet[z + 1][0] = i;
        triplet[z + 1][1] = j;
        triplet[z + 1][2] = mat[i][j];
        z++;
      }
    }
  }
  triplet[0][0] = r;
  triplet[0][1] = c;
  triplet[0][2] = z;
  cout << "\nSparse Matrix in Triplet Form:\n";
  cout << "Row\tCol\tValue\n";
  for (int i = 0; i <= z; i++) 
  {
    cout << triplet[i][0] << "\t" << triplet[i][1] << "\t" << triplet[i][2] << endl;
  }
  return 0;
}
