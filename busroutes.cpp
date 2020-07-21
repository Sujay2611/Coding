//
//  busroutes.cpp
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
    int t,n,d,p,w;
    cin>>t;
    vector<int> x;
    for (int i=1; i<=t; i++) {
        cin>>n;
        cin>>d;
        for (int j=0; j<n; j++) {
            cin>>w;
            x.push_back(w);
        }
        p=n-1;
        while (p>-1) {
            d=d-d%x[p];
            p=p-1;
        }
        cout<<"Case #"<<i<<": "<<d<<endl;
        x.clear();
        
    }
    return 0;
}
