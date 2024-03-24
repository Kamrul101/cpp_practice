int a,b;
        int rem;
    cin>>a>>b;
    if(a>b ){
        rem = a/b;
        cout<<rem+1<<endl;
    }
    else if(b>a){
        rem = b/a;
        cout<<rem+1<<endl;
    }
    else cout<<0<<endl;