/*
Task
Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

Note:  is considered to be an even index.

Example


Print abc def

Input Format

The first line contains an integer,  (the number of test cases).
Each line  of the  subsequent lines contain a string, .

Constraints

Output Format

For each String  (where ), print 's even-indexed characters, followed by a space, followed by 's odd-indexed characters.

Sample Input

2
Hacker
Rank
Sample Output

Hce akr
Rn ak
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    string str[n];
    

    int len[10000];
    cin.ignore();
    for (int i=0;i<n;i++){
        getline(cin,str[i]);
        len[i]=str[i].length();
        // cout<<len[i]<<endl;

    }
    for (int i=0;i<n;i++){
            string even;
            string odd;
        for(int j=0;j<len[i];j++){
            if(j%2==0)
                even+=str[i][j];
            else
                odd+=str[i][j];
        }
        cout<<even<<" "<<odd<<endl;
    }
    return 0;
}
