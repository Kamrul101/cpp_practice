#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    string s;
    getline(cin,s);
    s = s + 'a';
    cout<<s.size()<<" "<<s.length()<<endl;
    char c = toupper(s[0]);

    cout<<c<<endl;
    // transform(s.begin(),s.end(),s.begin(),::toupper);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    s.pop_back();
    cout<<s.back()<<endl;
    cout<<s[1]<<endl;
    int a =123;
    string s2 = to_string(a);
    cout<<s2<<endl;
    string s3 = "445";
    int b = stoi(s3);
    b++;
    cout<<b<<endl;
    return 0;
}