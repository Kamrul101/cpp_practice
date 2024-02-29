#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int mx[1230],my[1230];

int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>mx[i]>>my[i];
    }
    double max = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x1 = mx[i];
            int y1 = my[i];
            int x2 = mx[j];
            int y2 = my[j];
            double k = sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
            if(k>max) {
                max = k;
            }
        }
    }
    cout<<setprecision(11)<<max<<"\n";
    
}