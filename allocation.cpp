//
//  allocation.cpp
//  coding
//
//  Created by sujay2611 on 21/07/20.
//  Copyright © 2020 sujay2611. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t,n,k,l,s,p;
    cin>>t;
    vector<int> v;
    for (int j=1; j<=t; j++) {
        cin>>n;
        cin>>k;
        for (int i=0; i<n; i++) {
            cin>>l;
            v.push_back(l);
        }
        sort(v.begin(), v.end());
        s=0;
        p=0;
        vector<int>:: iterator it;
        it=v.begin();
        while(it<v.end() && s+*it<=k)
            s+=*it;
            it+=1;
            p+=1;
        if(it==v.end())
            cout<<"Case #"<<j<<": "<<n<<endl;
        else
            cout<<"Case #"<<j<<": "<<p<<endl;
        v.clear();
    }
    return 0;
}
