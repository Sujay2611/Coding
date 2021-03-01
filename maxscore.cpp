//
//  maxscore.cpp
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

int max1(int a,int b,int c)
{
    if (a>=b) {
        if (c>=a) {
            return c;
        } else {
            return a;
        }
    } else {
        if (c>=b) {
            return c;
        } else {
            return b;
        }
    }
}

int main()
{
    int x,y,z,t,a,b,c;
    cin >> t;
    while (t--) {
        cin >> x;
        cin >> y;
        cin >> z;
        a=max1(x,y,z);
        b=x+y+z;
        c=b-a;
        if (a>=c) {
            cout << c << endl;
        }
        else {
            cout << floor(b/2) << endl;
        }
    }
    return 0;
}




