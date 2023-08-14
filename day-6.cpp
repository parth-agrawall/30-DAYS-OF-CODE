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
