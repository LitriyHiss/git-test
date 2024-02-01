#include <iostream>

using namespace std;

int rec(int stat, int n)
{
    if (stat == 1)
    {
        return 0;
    }
    if (n % stat == 0)
    {
        cout << stat << "\n";
        return rec(stat - 1, n);
    }
    else
    {
        return rec(stat - 1, n);
    }
}

int main()
{
    int n;
    cin >> n;
    int stat = n - 1;
    rec(stat, n);
    
    return 0;
}
