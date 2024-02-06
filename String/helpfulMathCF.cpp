#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    string str;
    string ret;
    string s1;
    cin >> str;
    vector<int> v;
    for (auto u : str)
    {

        if (u == '1' || u == '2' || u == '3')
        {

            v.push_back(u - '0');
        }
    }
    sort(v.begin(), v.end());
    for (int s : v)
    {
        s1 = to_string(s);
        ret += s1;
        ret += "+";
    }
    ret.pop_back();
    cout << ret << "\n";
}