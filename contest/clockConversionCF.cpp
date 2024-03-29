#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string hour,min;
        for(int i=0;i<2;i++){
            hour+= s[i];
        }
        for(int i=3;i<5;i++){
            min+= s[i];
        }
        int h=stoi(hour);
        int m=stoi(min);
        int total = h*60 + m;
        if(total>=780){
            int newM=total%60;
            int newH = total/60;
            newH -=12;
            if(newH<10){
                if(newM<10){
                    cout<<'0'<<newH<<':'<<'0'<<newM<<" PM"<<endl;
                }
                else cout<<'0'<<newH<<':'<<newM<<" PM"<<endl;
            }
            else{
                if(newM<10){
                    cout<<newH<<':'<<'0'<<newM<<" PM"<<endl;
                }
                else cout<<newH<<':'<<newM<<" PM"<<endl;
            }
        }
        else if(total>=720 && total<780){
            int newM=total%60;
            int newH = total/60;
            
            if(newH<10){
                if(newM<10){
                    cout<<'0'<<newH<<':'<<'0'<<newM<<" PM"<<endl;
                }
                else cout<<'0'<<newH<<':'<<newM<<" PM"<<endl;
            }
            else{
                if(newM<10){
                    cout<<newH<<':'<<'0'<<newM<<" PM"<<endl;
                }
                else cout<<newH<<':'<<newM<<" PM"<<endl;
            }
        }
        else{
            int newM=total%60;
            int newH = total/60;
            
            if(newH<10 && newH>0){
                if(newM<10){
                    cout<<'0'<<newH<<':'<<'0'<<newM<<" AM"<<endl;
                }
                else cout<<'0'<<newH<<':'<<newM<<" AM"<<endl;
            }
            else if(newH==0){
                if(newM<10){
                    cout<<newH+12<<':'<<'0'<<newM<<" AM"<<endl;
                }
                else cout<<newH+12<<':'<<newM<<" AM"<<endl;
            }
            else{
                if(newM<10){
                    cout<<newH<<':'<<'0'<<newM<<" AM"<<endl;
                }
                else cout<<newH<<':'<<newM<<" AM"<<endl;
            }
        }
    }
    
}
