//
//  minmax.cpp
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

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
    int diff=1000000000;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-k+1;i++)
    {
        if(arr[i+k-1]-arr[i]<diff)
        {
            diff=arr[i+k-1]-arr[i];
        }
    }
    return diff;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = maxMin(k, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

