#include <iostream>
#include <sstream>
using namespace std;

int main()
{
  stringstream ss;
  string s;
  getline(cin, s);
  ss << s;
  int n, index = 0, minn = 10000, maxn = -1, sum = 0, maxindex = 0;
  while(ss >> n)
  {
    if(n < minn) minn = n;
    if(n > maxn)
    {
      maxn = n;
      maxindex = index;
    }
    sum += n;
    index++;
  }
  cout << minn << ' ' << maxindex << ' ' << sum << endl;
  return 0;
}
