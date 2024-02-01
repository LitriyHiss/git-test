#include <iostream>

using namespace std;

int rec(int stat, int a, int p)
{
    if (p > 1)
    {
        a *= stat;
        return rec(stat, a, p - 1);
    }
    else
    {
        cout << a;
        return 0;
    }
}

int main()
{
    int a;
    int p;
    cin >> a >> p;
    int stat = a;
    rec(stat, a, p);
    
    return 0;
}
