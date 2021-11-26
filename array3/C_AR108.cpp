#include <iostream>

using namespace std;

int n[30] = {0};
int main()
{
  string s;
  cin >> s;

  for(int i = 0; i < s.length(); i++)
    n[(s[i] < 'a') ? s[i] - 'A': s[i] - 'a']++;

  for(int i = 0; i < 30; i++)
    if(n[i]) cout << (char)(i+'a') << ' ' << n[i] << endl;
  return 0;
}
