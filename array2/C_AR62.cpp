#include <iostream>

using namespace std;

int A[50][50], B[50][50];

int main()
{
  int a,b;
  cin >> a >> b;
  for(int i = 0; i < a; i++)
    for(int j = 0; j < b; j++)
      cin >> A[i][j];

  int a1, b1;
  cin >> a1 >> b1;
  for(int i = 0; i < a1; i++)
    for(int j = 0; j < b1; j++)
      cin >> B[i][j];

  for(int i = 0; i < a; i++)
  {
    for(int j = 0; j < b1; j++)
    {
      int sum = 0;
      for(int k = 0; k < b; k++)
        sum += A[i][k] * B[k][j];
      if(!j) cout << sum;
      else cout << ' ' << sum;
    }
    cout << endl;
  }

  return 0;
}
