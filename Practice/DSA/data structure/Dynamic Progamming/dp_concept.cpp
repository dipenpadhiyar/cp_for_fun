#include <bits/stdc++.h>  // This will work only for g++ compiler.
#include <chrono>

#define fast ios::sync_with_stdio(false);cin.tie(0)
#define ll long long 
#define ull unsigned long long
using namespace std;
using namespace std::chrono;

auto start = high_resolution_clock::now();

//////////revuresion method
ull fact_recursion(ull num){
    if(num > 0 ){
    return num + fact_recursion(num - 1);
    }
    return 0;
}
////////// dp

unsigned long long factorial(int n) {
    std::vector<unsigned long long> dp(n + 1, 1); // Initialize the array with 1's
    
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] * i; // Calculate the factorial for i using the previous value (i - 1)
    }
    
    return dp[n]; // The final result is stored in dp[n]
}

int main() {
    fast;
    ull number = 43335, output = 0;
    cout << number << "\t" << endl;
    //////////////////////////////////////////////////// RECURSION /////////////////////////////////////////
     // Get starting timepoint
    auto start = high_resolution_clock::now();
 
    // Call the function, here
    output = fact_recursion(number);
 
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by factorial function: "
         << duration.count() << " microseconds" << endl;
    //////////////////////////////////////////////////// callculate time of dp code /////////////////////////////////////////
     // Get starting timepoint
    start = high_resolution_clock::now();

    unsigned long long result = factorial(number);

    // Get ending timepoint
    stop = high_resolution_clock::now();
    
    duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by factorial function: "
         << duration.count() << " microseconds" << endl;

    return 0;
}