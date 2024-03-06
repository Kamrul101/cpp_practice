#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int a[101][101];

int main() {
    optimize();
    int r,c;
    for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                cin>>a[i][j];
                if(a[i][j]==1){
                    r=i;
                    c=j;
                    break;
                }
            }  
    }
    int n = abs(3-r)+abs(3-c);
    cout<<n<<"\n";

}