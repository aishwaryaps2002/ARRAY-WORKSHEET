#include <iostream>
using namespace std;
int main() 
{
  int matrix[3][3]; 
  cout << "Enter elements for a 3x3 matrix:\n";
  for(int i = 0; i < 3; i++) 
  {
    for(int j = 0; j < 3; j++) 
    {
      cin >> matrix[i][j];
    }
  }
  cout << "\nThe 3x3 Matrix is:\n";
  for(int i = 0; i < 3; i++) 
  {
    for(int j = 0; j < 3; j++) 
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl; 
  }
  return 0;
}
