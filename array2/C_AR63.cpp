#include <iostream>

using namespace std;

int A[50][50];

int main()
{
  int a,b;
  cin >> a >> b;
  for(int i = 0; i < a; i++)
    for(int j = 0; j < b; j++)
      cin >> A[i][j];

  cin >> a >> b;
  for(int i = 0; i < a; i++)
    for(int j = 0; j < b; j++)
    {
      int n;
      cin >> n;
      A[i][j] += n;
    }

  for(int i = 0; i < a; i++)
  {
    for(int j = 0; j < b; j++)
    {
      if(!j) cout << A[i][j];
      else cout << ' ' << A[i][j];
    }
    cout << endl;
  }

  return 0;
}
