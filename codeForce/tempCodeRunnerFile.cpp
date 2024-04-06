if(a%2!=0 && b%2==0) {
        newB = b/2;
        newA=a;
        }
       else if(a%2==0 && b%2!=0) {
        newA= a/2;
        newB = b;
        }
       else {
        newA = a/2;
        newB = b;
       }
       if(newB*2 >b ) cout<<"YES"<<endl;
       else if(newA*2 > a ) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;