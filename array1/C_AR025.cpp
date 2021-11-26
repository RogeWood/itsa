#include <iostream>

using namespace std;

int count[200] = {0};
int main()
{
  string s;
  cin >> s;
  for(int i = 0; i < s.length(); i++)
    count[s[i]]++;

  for(int i = 200; i > 0; i--)
    if(count[i]) cout << i << ' ' << count[i] << endl;
  return 0;
}
