//
//  convstr.cpp
//  coding
//
//  Created by sujay2611 on 21/07/20.
//  Copyright © 2020 sujay2611. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t,n,s,u;
    cin>>t;
    string a;
    string b;
    vector<vector<int>> c;
    vector<int> d;
    while (t--) {
        cin>>n;
        cin>>a;
        cin>>b;
        u=0;
        for (int i=0; i<26; i++) {
            d={1};
            c.push_back(d);
            d.clear();
        }
        s=0;
        for (int i=0; i<n; i++) {
            if (b[i]>a[i]) {
                s=1;
                break;
            }
            else if (a[i]>b[i])
            {
                if (a.find(b[i])!=string::npos) {
                    c[int(b[i])-97].push_back(i);
                    c[int(b[i])-97][0]+=1;
                }
                else
                {
                    s=1;
                    break;
                }
            }
        }
        if(s==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for (auto x : c) {
                if (x.size()>1) {
                    u+=1;
                }
            }
            cout<<u<<endl;
            for (int i=25; i>-1; i--) {
                if(c[i].size()>1)
                {
                    //cout<<c[i].size()<<endl;
                    auto it=c[i].insert(c[i].begin()+1,a.find(char(i+97)));
                    //cout<<c[i].size()<<endl;
                    for (auto x : c[i]) {
                        cout<<x<<" ";
                    }
                    cout<<endl;
                    
                }
            }
            
        }
        for (auto x : c) {
            x.clear();
        }
        
        
    }
    return 0;
}
