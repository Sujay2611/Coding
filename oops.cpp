//
//  oops.cpp
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
using namespace std;

class Student
{
    public:
    vector<int> scores;

    void input()
    {
        int x;
        for(int i=0;i<5;i++)
        {
            cin>>x;
            scores.push_back(x);
        }
    }
    int calculateTotalScore()
    {
        int s=0;
        for(auto x: scores)
        {
            s=s+x;
        }
        return s;
    }
};
// Write your Student class here

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();

    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

