#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int arr[10];
  string s;
  cin >> s;
  int len;
  for(int i = 0, j = 0; i < s.length(); i++)
  {
    if(s[i] != ',')
    {
      arr[j] = s[i] - '0';
      j++;
      len = j;
    }
  }
  sort(arr, arr+len);
  int nmax = 0, nmin = 0;
  for(int i = 0; i < len; i++)
  {
    nmin *= 10;
    nmax *= 10;
    nmin += arr[i];
    nmax += arr[len-i-1];
  }
  cout << nmax - nmin;

}
