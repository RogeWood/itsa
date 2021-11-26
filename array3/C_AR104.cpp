#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];
int numSum(int x)
{
  int ans = 0;
  while(x)
  {
    ans += x % 10;
    x /= 10;
  }
  return ans;
}
bool compare(int a, int b)
{
  int suma = numSum(a), sumb = numSum(b);
  if(suma < sumb) return true;
  else if(suma == sumb) return a < b;
  else return false;
}
int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> arr[i];
  sort(arr, arr+n, compare);
  for(int i = 0; i < n; i++)
  {
    if(!i) cout << arr[i];
    else cout << ' ' << arr[i];
  }
  cout << endl;
  return 0;
}
