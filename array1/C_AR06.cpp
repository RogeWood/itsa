#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;
  string arr[100];
  int len = 0;
  while(cin >> arr[len]) len++;

  for(int i = 0; i < len; i++) cout << arr[i] << endl;
  return 0;
}
