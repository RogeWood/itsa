#include <iostream>

using namespace std;

int main()
{
  int arr[3];

  for(int i = 0; i < 3; i++)
  {
    scanf("%d,%d,%d", &arr[0], &arr[1], &arr[2]);
    for(int j = 0; j < 3; j++)
    {
      cout << arr[j] << endl;
    }
    
  }
  return 0;
}
