#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[4];
  for(int i = 0; i < 4; i++, n /= 10)
    arr[i] = (n%10+7) % 10;

  swap(arr[0], arr[2]);
  swap(arr[1], arr[3]);

  for(int i = 3; i >= 0; i--)
    cout << arr[i];
  cout << endl;
  return 0;
}
