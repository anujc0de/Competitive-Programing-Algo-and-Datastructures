#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int varifyprime(int n)
{
    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = false;
        }
    }
    if (flag == true)
        return 1;
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << varifyprime(n);
}