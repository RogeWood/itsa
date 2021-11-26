#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;
  int flag = 0;
  for(int i = 0; i <s.length()/2 + 1; i++)
    if(s[i] != s[s.length() - i - 1])
    {
      flag = 1;
      break;
    }
  cout << ((flag) ? "NO" : "YES") << endl;
  return 0;
}
