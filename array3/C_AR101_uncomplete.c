#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int main()
{
  int t;
  while(cin >> t)
  {
    while(t--)
    {
      int visited[102][102] = {0};
      int n, k;
      cin >> n >> k;
      for(int i = 0; i < k; i++)
      {
        int a, b;
        cin >> a >> b;
        visited[a][b] = 1;
      }

      int rootx, rooty;
      int sum = 1;
      cin >> rootx >> rooty;
      //BFS
      queue<pair<int, int> > q;
      visited[rootx][rooty] = 1;
      q.push(make_pair(rootx, rooty));
      while(q.size())
      {
        int next[4][2] = {{0,-1},{-1,0},{1,0},{0,1}};
        int x = q.front().first, y = q.front().second;
        for(int i= 0; i < 4; i++)
        {
          int nx = x + next[i][0], ny = y + next[i][1];
          if(nx > 0 && nx <= n && ny > 0 && ny <= n)
          {
            if(!visited[nx][ny])
            {
              visited[nx][ny] = 1;
              q.push(make_pair(nx, ny));
              sum++;
            }
          }
        }
        q.pop();
      }

      cout << sum << endl;
    }
  }
  return 0;
}
