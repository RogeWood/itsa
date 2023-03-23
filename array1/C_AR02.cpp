#include <iostream>
using namespace std;

int main()
{
  int arr[6];
  for(int i = 0; i < 6; i++)
    cin >> arr[i];
  for(int j = 5; j >= 0; j--)
  {
    if(j == 0)
      cout << arr[j] << endl;
    else
      cout << arr[j] << ' ';
  }
  return 0;
}
