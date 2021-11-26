#include <iostream>

using namespace std;

int main()
{
  string s;
  int n;
  getline(cin, s);
  cin >> n;

  for(int i = 0; i < s.length(); i++)
    s[i] = ((s[i] >= 'A' && s[i] <= 'Z') ? (s[i]+n - 'A')%26 + 'A' : ((s[i] >= 'a' && s[i] <= 'z') ? (s[i]+n - 'a')%26 + 'a' : ((s[i] >= '0' && s[i] <= '9') ? (s[i]+n - '0')%10 + '0' : s[i])));

  cout << s << endl;
  return 0;
}
