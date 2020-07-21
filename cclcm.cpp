//
//  cclcm.cpp
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
    int t,n,p,l;
    cin>>t;
    vector<int> v;
    while (t--) {
        cin>>n;
        for (int i=0; i<n; i++) {
            cin>>p;
            v.push_back(p);
        }
        l=0;
        for(auto x:v)
        {
            if(x%2==0)
            {
                l=1;
                break;
            }
        }
        if(l)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        v.clear();
    }
    return 0;
}
