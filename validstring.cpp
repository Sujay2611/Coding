//
//  validstring.cpp
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
#include <set>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    if(s.length()==1)
    {
        return "YES";
    }
    else
    {
        vector<int> a;
        for(int i=0;i<26;i++)
        {
            a.push_back(0);
        }
        for(auto x:s)
        {
            a[int(x)-97]+=1;
        }
        set<int> b;
        for(auto x:a)
        {
            if(x>0)
            {
                b.insert(x);
            }
        }
        vector<int> c;
        c.assign(b.begin(),b.end());
        for(auto x:b)
        {
            cout<<x<<endl;
        }
        if(b.size()==1)
        {
            return "YES";
        }
        else if(b.size()==2)
        {
            if((count(a.begin(),a.end(),c[0])==1 && (abs(c[0]-c[1])==1 || c[0]==1)) || (count(a.begin(),a.end(),c[1])==1 && (abs(c[0]-c[1])==1 || c[1]==1)) )
            {
                return "YES";
            }
            else
            {
                return "NO";
            }
        }
        else
        {
            return "NO";
        }
    }


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

