#include <iostream>

using namespace std;

int main()
{
  long long int sum = 0;
  for(int i = 0; i < 6; i++)
  {
    int n;
    cin >> n;
    sum += n*n*n;
  }
  cout << sum << endl;
  return 0;
}
