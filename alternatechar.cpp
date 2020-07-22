//
//  alternatechar.cpp
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

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    int count=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]!=s[i-1])
        {
            count+=1;
        }
    }
    return s.length()-count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

