//
//  check.cpp
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
    int t,v,w,total;
    string s;
    char u;
    cin>>t;
    while (t--) {
        cin>>s;
        total=0;
        for(int i=0;i<s.size();)
        {
            u=s[i];
            v=1;
            w=i+1;
            while(w<s.size() && s[i]==s[w])
            {
                v+=1;
                w+=1;
            }
            while(v>0)
            {
                total+=1;
                v/=10;
            }
            total++;
            i=w;
        }
        cout<<total<<endl;
        if(total>=s.size())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
