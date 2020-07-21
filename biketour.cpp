//
//  biketour.cpp
//  coding
//
//  Created by sujay2611 on 21/07/20.
//  Copyright © 2020 sujay2611. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int t,n,u,c;
    cin>>t;
    vector<int> v;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        for (int j=0; j<n; j++) {
            cin>>u;
            v.push_back(u);
        }
        c=0;
        for (int j=1; j<n-1; j++) {
            if(v[j]>v[j+1] and v[j]>v[j-1])
                c+=1;
        }
        cout<<"Case #"<<i<<": "<<c<<endl;
        v.clear();
        
    }
    return 0;
}
