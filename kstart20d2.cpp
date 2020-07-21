//
//  kstart20d2.cpp
//  coding
//
//  Created by sujay2611 on 20/07/20.
//  Copyright © 2020 sujay2611. All rights reserved.
//

#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,p,d,e;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> b;
        for (int i=0; i<n; i++) {
            cin>>p;
            b.push_back(p);
        }
        vector<int> c;
        for (int i=0; i<n-1; i++) {
            if(b[i+1]>b[i])
                c.push_back(1);
            else
                c.push_back(-1);
        }
        d=0;
        e=1;
        for (int i=0; i<c.size()-1; i++) {
            if(c[i]!=c[i+1])
            {
                d=d+floor(e/4);
                e=1;
            }
            else
            {
                e+=1;
            }
        }
        d=d+floor(e/4);
        printf("%d\n",d);
        
    }
    return 0;
}
