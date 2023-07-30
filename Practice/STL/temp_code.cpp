#include <bits/stdc++.h>  // This will work only for g++ compiler.
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define ll long long 
using namespace std;
//comparator function
    bool x(int d1,int d3){
        return d1 > d3;
    }
//////////////////////////////////// VECTOR//////////////////////////////////// 
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

//////////////////////////////////// SET ////////////////////////////////////
void setDemo(){
    ////each option in (log N) time in set./////
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(-5);
    s.insert(-10);
    for(auto i : s){
        cout << i <<  "\t";
    }
    auto it = s.find(-10);
    if(it == s.end()){
        cout << "element not present. \n";
    }else{
        cout << "element present \n";
    }

    auto it2  = s.lower_bound(-5);
    auto it3 = s.upper_bound(-5);

    cout << *it2 << " " << *it3  << endl;
}

//////////////////////////////////// MAP ////////////////////////////////////
void mapDemo(){
    map<int, int > data;
    data[1] = 100;
    data[2] = 1;
    data[4] = 1000;
    data[3] = 10;
    ////////print map///
    for(auto i : data){
        cout <<  " key value is : " << i.first << " and value holds : " << i.second << endl;
    }
    //////////////////char print
    auto it = data.begin();
    map<char, int> cti;
    string s = "dipen padhiyar";
    for(auto c : s){
        cti[c]++;
    }
   


}
int main() {
    fast;
    mapDemo();
     return 0;
}