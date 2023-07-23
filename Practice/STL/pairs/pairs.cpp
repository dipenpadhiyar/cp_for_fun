#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0)

// pairs is inside #include <utility>
int main(){
    fast;

    pair<int ,int > p ={1,3};
    cout<< p.first<< "" <<p.second;
    
    //pair inside pairs (nested pair)
    pair<int,pair<int,int>> pa ={1,{3,4}};
    cout<<pa.first<< " " << pa.second.first<<" "<<pa.second.second;  

    //pair inside arrays
    pair<int,int> arr[] = {{1,3},{4,3}};

    cout<<arr[1].first;
    return 0;
}