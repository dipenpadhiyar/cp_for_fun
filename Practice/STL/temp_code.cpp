#include <bits/stdc++.h>  // This will work only for g++ compiler.
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define ll long long 
using namespace std;

bool x(int d1,int d3){
    return d1 > d3;
}

void vectorDemo(){
    vector<int> data = {11,3,4,14};

///////sort method
    //sort in O(N * log N)
    sort(data.begin(),data.end()); 
    for(auto i : data){
        cout<< i << "\t";
    }
//////binery serch if element is present or not
    //O(log N)
    bool present = binary_search(data.begin(),data.end(), 4);
    cout << present;
///////lower_bound fand upper_bound 
    data.emplace_back(100);
    data.emplace_back(100);
    data.emplace_back(100);
    data.emplace_back(100);
    data.emplace_back(100);
    data.emplace_back(130);
    cout<<endl;
    for(auto i : data){
        cout<< i << "\t";
    }
    auto it = lower_bound(data.begin(),data.end(),100);
    auto it2 = upper_bound(data.begin(),data.end(),100);
    cout << endl << *it << " and " << *it2 << endl;
    cout << it2 - it << endl;

    ////////sort the data with sort opeeration
    sort(data.begin(),data.end() , x);
     for(auto i : data){
        cout<< i << "\t";
    }
    cout<< endl;
    // if we want to ulpdate any thing during for loop we can use refrence
    for(auto &i : data){
        i = i - 10;
        cout<< i << "\t";
    }

}

void setDemo(){
    set<int> s;
    
}
int main() {
    fast;
    
     return 0;
}