#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
  string str;

  int arr[15];
  while(getline(cin, str))
  {
    stringstream ss;
    ss << str;
    int i = 0;
    while(ss >> arr[i]) i++;
    for(int j = i-1; j >= 0; j--)
    {
      if(j == 0) cout << arr[j] << endl;
      else cout << arr[j] << ' ';
    }
  }

  return 0;
}
