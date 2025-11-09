#include <iostream>
using namespace std;
int main() 
{
  int m,n;
  int A[10][10], B[10][10], sum[10][10];
  cout << "Enter number of rows: ";
  cin >> m;
  cout << "Enter number of columns: ";
  cin >> n;
  cout << "\nEnter elements of Matrix A:\n";
  for(int i = 0; i < m; i++) 
  {
    for(int j = 0; j < n; j++) 
    {
      cin >> A[i][j];
    }
  }
  cout << "\nEnter elements of Matrix B:\n";
  for(int i = 0; i < m; i++) 
  {
    for(int j = 0; j < n; j++) 
    {
      cin >> B[i][j];
    }
  }
  for(int i = 0; i < m; i++) 
  {
    for(int j = 0; j < n; j++) 
    {
      sum[i][j] = A[i][j] + B[i][j];
    }
  }
  cout << "\nSum of the two matrices is:\n";
  for(int i = 0; i < rows; i++) 
  {
    for(int j = 0; j < cols; j++) 
    {
      cout << sum[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
