#include <iostream>
using namespace std;
int main() 
{
  int n, s, a = -1;
  int arr[50];
  cout << "Enter number of elements: ";
  cin >> n;
  cout << "Enter " << n << " elements:\n";
  for(int i = 0; i < n; i++) 
  {
    cin >> arr[i];
  }
  cout << "Enter element to search: ";
  cin >> search;
  for(int i = 0; i < n; i++) 
  {
    if(arr[i] == s)
    {
      a = i;
    }
  }
  if(a != -1)
    cout << "Element " << search << " found at position " << pos + 1 << endl;
  else
    cout << "Element not found!" << endl;
  return 0;
}
