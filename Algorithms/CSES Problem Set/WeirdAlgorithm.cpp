// Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
// 3→10→5→16→8→4→2→1

// Your task is to simulate the execution of the algorithm for a given value of n.

// Input

// The only input line contains an integer n.

// Output

// Print a line that contains all values of n during the algorithm.

// Constraints
// 1≤n≤106
// Example

// Input:
// 3

// Output:
// 3 10 5 16 8 4 2 1


#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){
    long long int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n=n/2;
            cout<<n<<" "; 
        }
        else{
            n=(n*3)+1;
             cout<<n<<" "; 
        }
    }

}