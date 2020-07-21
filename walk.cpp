//
//  walk.cpp
//  coding
//
//  Created by sujay2611 on 21/07/20.
//  Copyright © 2020 sujay2611. All rights reserved.
//

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,n,x,y,c,d,p;
    cin>>t;
    vector<int> a;
    vector<int> b;
    while (t--) {
        cin>>n;
        for (int i=0; i<n; i++) {
            cin>>x;
            a.push_back(x);
        }
        for (int i=0; i<n; i++) {
            cin>>y;
            b.push_back(y);
        }
        c=0;
        d=0;
        p=0;
        for (int i=0; i<n; i++) {
            if(c==d && a[i]==b[i])
                p+=a[i];
            c+=a[i];
            d+=b[i];
            
        }
        cout<<p<<endl;
        a.clear();
        b.clear();
    }
    return 0;
}
