#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//find all the subset of the array
int main()
{
    unordered_map<int, pair<string, string>> A;
    pair<string, string> p;
    p = make_pair("sdfs", "sdfsdf");

    A[1] = p;
    p = make_pair("sdsfs", "sfssdfsdf");

    A[2] = p;
    cout << A[1].first;
}