#include <bits/stdc++.h>  // This will work only for g++ compiler.
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define ll long long 
using namespace std;



int main() {
    fast;
    vector<vector<int>> data = {{10,30,40},{50,60,70}};
    for(vector<int> i : data){
        for(int j : i){
            cout << j << "\t";
        }
        cout << endl;
    } 
    return 0;
}