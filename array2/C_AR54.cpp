#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[30] = {0};
  for(int i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    arr[c-'a']++;
  }
  for(int i = 0; i < 30; i++) if(arr[i]) cout << (char)(i+'a') << ' ' << arr[i] << endl;
  return 0;
}
