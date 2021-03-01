//
//  doctorchef.cpp
//  coding
//
//  Created by sujay2611 on 25/07/20.
//  Copyright © 2020 sujay2611. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int t,n,k,x,mx,q,u;
    cin>>t;
    vector<int> a;
    double p;
    while (t--) {
        cin>>n;
        cin>>k;
        mx=0;
        for (int i=0;i<n;i++) {
            cin>>x;
            if(x>mx)
            {
                mx=x;
            }
            a.push_back(x);
        }
        u=n-1;
        p=mx/k;
        q=ceil(log2(p));
        if (q==0) {
            cout<<n<<endl;
        }
        else
        {
            for (int i=0; i<=q; i++) {
                if (find(a.begin(),a.end(),k*pow(2,i))!=a.end()) {
                    u=u-1;
                }
            }
            cout<<q+u+1<<endl;
        }
        
        
    }
    return 0;
}
