#include <iostream>

using namespace std;

int main()
{
  double maxm, minm;
  for(int i = 0; i < 10; i++)
  {
    double a;
    cin >> a;
    if(!i)
    {
      maxm = a;
      minm = a;
    }
    else
    {
      if(a > maxm) maxm = a;
      if(a < minm) minm = a;
    }
  }
  printf("maximum:%.2lf\n", maxm);
  printf("minimum:%.2lf\n", minm);
  return 0;
}
