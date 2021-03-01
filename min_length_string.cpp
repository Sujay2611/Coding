//
//  min_length_string.cpp
//  coding
//
//  Created by sujay2611 on 07/02/21.
//  Copyright © 2021 sujay2611. All rights reserved.
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
    int t,v,z;
    string s,u,a,b;
    vector<int> c,d;
    cin >> t;
    while(t--)
    {
        cin >> s;
        u=s;
        reverse(u.begin(), u.end());
        cout << s << " " << u << endl;
        a=s[0];
        b=u[0];
        c={0};
        d={0};
        for (int i=1; i<s.size(); i++) {
            if(a[a.size()-1]!=s[i]){
                a=a+s[i];
                c.push_back(i);
            }
        }
        for (int i=1; i<u.size(); i++) {
            if (b[b.size()-1]!=u[i]) {
                b=b+u[i];
                d.push_back(i);
            }
        }
        cout << a << " " << b << endl;
        for (auto x : c) {
            cout << x << endl;
        }
        for (auto x : d) {
            cout << x << endl;
        }
        if (a.size()==1) {
            if (s.size()>1) {
                cout << 0 << endl;
            }
            else {
                cout << 1 << endl;
            }
        }
        v=0;
        while (v<a.size()) {
            if (a[v]==b[v]) {
                v=v+1;
            }
            else {
                break;
            }
        }
        if (v==a.size()) {
            if (a.size()%2==1) {
                z=floor(a.size()/2);
                if ((c[z+1]-c[z])%2==1) {
                    cout << 1 << endl;
                }
                else {
                    cout << 0 << endl;
                }
            }
            else {
                cout << 0 << endl;
            }
        }
        else {
            cout << s.size()-c[v]-d[v] << endl;
        }
    }
    return 0;
}
