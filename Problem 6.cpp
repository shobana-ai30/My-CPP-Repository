/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#WAP to calculate a given string expression and show the result.

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    double d1=0.0, d2=0.0;
    vector<string> S;
    string input;
    cout<<"Enter Calculation:";
    getline(cin,input);
    stringstream ss(input);
    while((getline(ss,input,' ')))
    {
        S.push_back(input);
    }
    d1 = double(stoi(S[0]));
    d2 = double(stoi(S[2]));
    string op = S[1];
    if(op =="+")
    {
        cout<<d1<<'+'<<d2<<'='<<(d1+d2);
    }
    else if(op =="-")
    {
        cout<<d1<<'+'<<d2<<'='<<(d1-d2);
    }
    else if(op =="*")
    {
        cout<<d1<<'*'<<d2<<'='<<(d1*d2);
    }
    else if (op =="/")
        cout<<d1<<'/'<<d2<<'='<<(d1/d2);
    return 0;
}
