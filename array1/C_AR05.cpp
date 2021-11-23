#include <iostream>

using namespace std;

int check[30] = {0};
int main()
{
  int n;
  cin >> n;
  int maxn = 0;
  for(int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    for(int i = a; i < b; i++)
    {
      check[i]++;
      if(check[i] > maxn) maxn = check[i];
    }
  }

  cout << maxn << endl;
  return 0;
}
