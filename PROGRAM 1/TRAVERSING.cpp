#include <iostream>
using namespace std;
int main() 
{
  int n;
  int arr[50];   // Array with max size 50
  cout << "Enter number of elements: ";
  cin >> n;
  cout << "Enter " << n << " elements:\n";
  for(int i = 0; i < n; i++) 
  {
    cin >> arr[i];
  }
  cout << "\nArray elements are:\n";
  for(int i = 0; i < n; i++) 
  {
    cout << arr[i] << " ";
  }
  return 0;
}
