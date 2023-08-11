/*Task
Given an integer, , perform the following conditional actions:

If n is odd, print Weird
If n is even and in the inclusive range of 2 to 5, print Not Weird
If n is even and in the inclusive range of 6 to 20, print Weird
If n is even and greater than 20, print Not Weird
Complete the stub code provided in your editor to print whether or not  is weird.

Input Format

A single line containing a positive integer, .

Constraints

Output Format

Print Weird if the number is weird; otherwise, print Not Weird.

Sample Input 0

3
Sample Output 0

Weird
Sample Input 1

24
Sample Output 1

Not Weird
*/


#include <iostream>
using namespace std;

void solve(int N){
    if(N%2==0){
        if(N>=2 && N<=5)
            cout<<"Not Weird";
        else if(N>=6 && N<=20)
            cout<< "Weird";
        else if(N>20)
            cout<< "Not Weird";
    }
    else
        cout<<"Weird";
}

int main(){
    int N;
    cin>>N;
    solve(N);
}