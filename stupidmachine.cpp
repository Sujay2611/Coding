//
//  stupidmachine.cpp
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
    int t,n,x,sum,mn;
    cin>>t;
    while (t--) {
        cin>>n;
        sum=0;
        mn=1000000000;
        for (int i=0; i<n; i++) {
            cin>>x;
            mn=min(x,mn);
            sum+=mn;
        }
        cout<<sum<<endl;
    }
    return 0;
}
