#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char c;
        cin >> c;
        cout << (char)((int)c+2) << '\n';
    }
    return 0;
}