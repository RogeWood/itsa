#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  string s;
  while(getline(cin, s))
  {
    stringstream ss;
    ss << s;
    int n, len = 0, sum = 0;
    while(ss >> n)
    {
      len++;
      sum += n;
    }
    cout << "Size: " << len << endl;
    printf("Average: %.3lf\n", ((double)(sum))/len);
  }
  return 0;
}
