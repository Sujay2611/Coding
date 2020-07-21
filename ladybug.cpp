//
//  ladybug.cpp
//  coding
//
//  Created by sujay2611 on 21/07/20.
//  Copyright © 2020 sujay2611. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b) {
    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=0;
    }
    int u=0;
    for(auto x:b)
    {
        if(x=='_')
        {
            u+=1;
        }
        else
        {
            //cout<<int(x)<<endl;
            a[int(x)-65]+=1;
        }
    }
    int v=0;
    int n=b.size();
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(n>1 && b[0]!=b[1])
            {
                cout<<1<<endl;
                v=1;
                break;
            }
        }
        else if(i==n-1)
        {
            if(n>1 && b[i]!=b[i-1])
            {
                cout<<2<<endl;
                v=1;
                break;
            }
        }
        else
        {
            if(b[i]!=b[i-1] && b[i]!=b[i+1])
            {
                cout<<3<<endl;
                v=1;
                break;
            }
        }
    }
    int s=0;
    for(auto x:a)
    {
        //cout<<x<<endl;
        if(x==1)
        {
            s=1;
            break;
        }
    }
    cout<<s<<u<<v<<endl;
    if(s==1)
    {
        return "NO";
    }
    else if(v==1 && u==0)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

