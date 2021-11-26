#include <iostream>

using namespace std;

void add(string a, string b);
int main()
{
  int n;
  cin >> n;
  while(n--)
  {
    string a, b;
    cin >> a >> b;
    add(a, b);
  }
  return 0;
}

void add(string a, string b)
{
    int sum[50]={0};
    int an[50] = {0}, bn[50] = {0};
    for(int i=0;i<a.length();i++) an[i] = a[a.length()-i-1] - '0';
    for(int i=0;i<b.length();i++) bn[i] = b[b.length()-i-1] - '0';
    int len = (a.length() > b.length()) ?a.length(): b.length();

    for(int i=0;i<len;i++)
    {
      sum[i] += an[i] + bn[i];
      sum[i+1] += sum[i]/10;
      sum[i] %= 10;
    }

    int flag = 0;
    for(int i = len; i >= 0; i--)
    {
      if(flag)
        cout << sum[i];
      else if(sum[i])
      {
        flag = 1;
        cout << sum[i];
      }
    }
    cout << endl;

    return;
 }
