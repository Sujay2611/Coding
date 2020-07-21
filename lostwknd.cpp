//
//  lostwknd.cpp
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
    int t,l,m,n;
    cin>>t;
    while (t--) {
        l=0;
        for (int i=0; i<5; i++) {
            cin>>m;
            l=l+m;
        }
        cin>>n;
        if(l*n>120)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    return 0;
    
}
