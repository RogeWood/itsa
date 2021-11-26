#include <iostream>

using namespace std;

long long int arr[20][20] = {0};
int main()
{
  for(int i = 0; i < 20; i++)
    arr[0][i] = 1;
  for(int i = 1; i < 20; i++)
  {
    for(int j = i; j < 20; j++)
    {
      arr[i][j] += arr[i-1][j-1] + arr[i-1][j] + arr[i][j-1];
    }
  }

  int t;
  cin >> t;
  while(t--)
  {
    int a;
    cin >> a;
    cout << arr[a][a] << endl;
  }
  return 0;
}
