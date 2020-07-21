//
//  main.cpp
//  coding
//
//  Created by sujay2611 on 20/07/20.
//  Copyright © 2020 sujay2611. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,n,m,c,w;
    cin>>t;
    int p=1;
    vector<int> a;
    while(p<=t)
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>w;
            a.push_back(w);
        m=0;
        c=0;
        int i;
        for(i=0;i<n;i++)
            if(i==0)
                if(n==1)
                    c+=1;
                else if(a[0]>a[1])
                    c+=1;
            else if(i==n-1)
                if(a[i]>m)
                    c+=1;
            else
                if(a[i]>m && a[i]>a[i+1])
                    c+=1;
            m=max(a[i],m);
        cout<<"Case #"<<p<<": "<<endl;
        
        
        

    return 0;
}
