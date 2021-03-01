//
//  binary_string.cpp
//  C++
//
//  Created by sujay2611 on 14/02/21.
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
    string s,a,b;
    int t,d1,d2;
    cin >> t;
    while (t--) {
        cin >> s;
        int n = floor(s.size()/2);
        a = "";
        for (int i=0; i<n; i++) {
            a = a + "01";
        }
        b = "";
        for (int i=0; i<n; i++) {
            b = b + "10";
        }
        if (s.size()%2) {
            a = a + "0";
            b = b + "1";
        }
        d1 = 0;
        d2 = 0;
        for (int i=0; i<s.size(); i++) {
            if (s[i]!=a[i]) {
                d1 += 1;
            }
            if (s[i]!=b[i]) {
                d2 += 1;
            }
        }
        if (d1>d2) {
            cout << d2 << endl;
        }
        else {
            cout << d1 << endl;
        }
        
    }
    return 0;
    
}
