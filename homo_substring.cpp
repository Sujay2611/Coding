//
//  homo_substring.cpp
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
    int t,c,u;
    string s;
    int p = 1000000007;
    cin >> t;
    while (t--) {
        cin >> s;
        if (s.size() == 1) {
            cout << 1 << endl;
        }
        else {
            c = 1;
            u = 0;
            for (int i=0; i<s.size()-1; i++) {
                if (s[i] == s[i+1]) {
                    c = c + 1;
                } else {
                    t = ((t % p) + (int((floor((c * (c+1))/2)))%p)%p);
                    c = 1;
                }
            }
            t = ((t % p) + (int((floor((c * (c+1))/2)))%p)%p);
            cout << t << endl;
        }
        
    }
    return 0;
}
