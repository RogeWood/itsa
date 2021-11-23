#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;

void binary(int n);

int main()
{
  int n;
  cin >> n;
  /* while寫法
  while(n > 0)
  {
    arr.push_back(n%2);
    n /=2;
  }*/
  binary(n);
  for(int i = arr.size()-1; i >= 0 ; i--)
    cout << arr[i];
  cout << endl;
  return 0;
}
void binary(int n)
{
  if(n == 0) return;
  arr.push_back(n%2);
  binary(n/2);
}
