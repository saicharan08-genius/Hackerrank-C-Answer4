//https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<string> vec{"one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
    int n;
    cin >> n;
    if(n >= 1 && n <= 9)
    {
        cout << vec[n-1];
    }
    else 
    {
        cout << "Greater than 9";
    }
    
    return 0;
}
