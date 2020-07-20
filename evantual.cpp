//
//  evantual.cpp
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,k;
    cin>>t;
    vector<int> v;
    while (t--) {
        for (int i=0; i<26; i++) {
            v.push_back(0);
        }
        cin>>n;
        string str;
        cin>>str;
        for(auto x:str)
            v[int(x)-97]+=1;
        k=0;
        for(auto x:v)
        {
            if(x%2)
            {
                k=1;
                break;
            }
        }
        if(k==1)
            printf("NO");
        else
            printf("YES");
        
        
    }
    return 0;
    
}
