//
//  prime.cpp
//  coding
//
//  Created by sujay2611 on 23/07/20.
//  Copyright © 2020 sujay2611. All rights reserved.
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

// Complete the primality function below.
string primality(int n) {
    if(n==1)
    {
        return "Not prime";
    }
    else
    {
        for(int i=2;i<floor(sqrt(n))+1;i++)
        {
            if(n%i==0)
            {
                return "Not prime";
            }
        }
        return "Prime";
    }


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int p_itr = 0; p_itr < p; p_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = primality(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

