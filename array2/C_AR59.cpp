#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    string s;
    cin >> s;
    int num[11] = {0};
    if(s.length() == 4)
    {
      for(int i = 0; i < 4; i++)
        num[s[i] - '0']++;

      int isPass  = 0, hasTwo = 0;
      for(int i = 0; i < 10; i++)
      {
        if(num[i] == 2)
        {
          if(!hasTwo)
          {
            hasTwo = 1;
            isPass = 1;
          }
          else isPass = 0;
        }
      }
      cout << ((isPass) ? "Yes" : "No") << endl;
    }
    else cout << "Failure Input" << endl;

  }

  return 0;
}
