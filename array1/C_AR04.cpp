#include <iostream>

using namespace std;

int arr[105][105];
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int a,b;
    cin >> a >> b;
    for(int i = 0 ; i < a; i++)
      for(int j = 0; j < b; j++)
        cin >> arr[i][j];
    int dir[4][2] = {{1,0}, {0,1}, {-1,0},{0,-1}};
    for(int i = 0 ; i < a; i++)
    {
      for(int j = 0; j < b; j++)
      {
        if(arr[i][j] == 0) cout << '_';
        else
        {
          bool flag = 1;
          for(int k = 0; k < 4; k++)
          {
            int x = i - dir[k][0], y = j - dir[k][1];
            if(arr[x][y] == 0 && x>=0 && x<=a && y>=0 && y<b)
            {
              flag = 0;
              cout << '0';
              break;
            }
          }
          if(flag) cout << '_';
        }
        cout << ' ';
        if(j == b-1) cout << '\n';
      }
    }
    if(t) cout << '\n';
  }
}
