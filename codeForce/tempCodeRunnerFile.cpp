  int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum=0;
        for(auto u:v){
            if(u==s) break;
            sum+=u.size();
        }
        cout<<sum<<endl;
    }