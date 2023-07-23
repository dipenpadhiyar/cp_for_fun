#include <bits/stdc++.h>  // This will work only for g++ compiler.
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define ll long long 
using namespace std;

//classic two pointer algoritham

int main() {
    fast;
    vector<int> data = {1,4,5,7,8};
    int target = 8, total = 0, i = 0  , j = data.size() - 1;
    //impliment two pointer algoritham
    while(!(total == target)){
        cout << total << endl;
        total = data[i] + data[j];
        if(total > target){
            j--;
        }
        else if(total < target){
            i++;
        }
    }

    cout<< i << "and" << j ;
    
    
    return 0;
}