//
//  letter_permutation.cpp
//  C++
//
//  Created by sujay2611 on 28/02/21.
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
#include <cstring>

using namespace std;

int main()
{
    int t,p;
    string s,z;
    cin >> t;
    vector<string> a;
    while (t--) {
        cin >> s;
        a = {};
        p = 0;
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                z=toupper(s[i]);
                a.push_back(s.substr(0,i)+z+s.substr(i+1,s.size()-1-i));
                z=tolower(s[i]);
                a.push_back(s.substr(0,i)+z+s.substr(i+1,s.size()-1-i));
                p = 1;
            }
        }
        if (p == 0) {
            a.push_back(s);
        }
        for (auto x : a) {
            cout << x << endl;
        }
        cout << a.size() << endl;
    }
    return 0;
}
