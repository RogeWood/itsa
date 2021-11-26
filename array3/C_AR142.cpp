#include <iostream>

using namespace std;

int main()
{
  int m, n;
  cin >> m >> n;
  long int sum = 0;
  for(int i = 1; i <= m; i++)
    if(!(i*i % n)) sum += i*i;

  cout << sum << endl;
  return 0;
}
