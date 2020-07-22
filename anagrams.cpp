//
//  anagrams.cpp
//  coding
//
//  Created by sujay2611 on 22/07/20.
//  Copyright © 2020 sujay2611. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
#include <fstream>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    vector<int> c;
    vector<int> d;
    for(int i=0;i<26;i++)
    {
        c.push_back(0);
        d.push_back(0);
    }
    for(auto x:a)
    {
        c[int(x)-97]+=1;
    }
    for(auto x:b)
    {
        d[int(x)-97]+=1;
    }
    int s=0;
    for(int i=0;i<26;i++)
    {
        s=s+abs(c[i]-d[i]);
    }
    return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}

