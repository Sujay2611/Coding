//
//  flipbits.cpp
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
#include <typeinfo>

using namespace std;

// Complete the flippingBits function below.
long flippingBits(long n) {
    cout<<(bitset<32>(n).flip()).to_ulong()<<endl;
    return (bitset<32>(n).flip()).to_ulong();


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long result = flippingBits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

