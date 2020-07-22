//
//  arrays.cpp
//  coding
//
//  Created by sujay2611 on 22/07/20.
//  Copyright © 2020 sujay2611. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<vector<int>> a;
    int n,q,k,x,u,v;
    cin>>n;
    cin>>q;
    for(int j=0;j<n;j++)
    {
        cin>>k;
        vector<int>b;
        for(int i=0;i<k;i++)
        {
            cin>>x;
            b.push_back(x);
        }
        a.push_back(b);
    }
    while(q--)
    {
        cin>>u;
        cin>>v;
        cout<<a[u][v]<<endl;
    }

    return 0;
}
