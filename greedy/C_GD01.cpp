#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int a, sum = 0;
    cin >> a;
    string s;
    cin >> s;
    for(int i = 0; i < a; i++)
    {
      if(s[i] == '.')
      {
        sum++;
        i += 2;
      }
    }
    cout << sum << endl;
  }
  return 0;
}
