#include <iostream>
using namespace std;

int main(){
    int x,y,z,count = 0;
        cin>>z;
    for(int i=1;i<=z ;i++){
        if(z%i == 0){
                count++;
        }
    }
    if(count == 3){

    return true;
    }
    else return false;
    
}