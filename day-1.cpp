#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    
    // Declare second integer, double, and String variables.
    int inn;
    double dd;
    string st;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin>>inn;
    cin>>dd;
    cin.ignore();
    getline(cin, st);
    // cin>>st;
    // Print the sum of both integer variables on a new line.
    cout<< i+inn<<endl;
    // Print the sum of the double variables on a new line.
    // cout.precision(1)<<d+dd<<endl;
    cout<<fixed<<setprecision(1)<<d+dd<<endl;
    cout<<s+st<<endl;

    return 0;
}