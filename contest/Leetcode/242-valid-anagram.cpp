#include <bits/stdc++.h>  // This will work only for g++ compiler.
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long 
using namespace std;

//////////thinking process:
//first atlest both string shoolud be same
//now if samle character is present in both string
    //if not prensent thern return FALSE
    //if presernt then return TRUE

//////////solutin:

int main() {
    fast;
    map<int,char> stack;
    bool ans;
    int n;
    string  s , t;
    vector<char> data, data3;
    
    cin>>s;
    cout<<endl;
    cin>>t;
    
    for(int i =0,j=0; i< s.size(),j<t.size();i++,j++){
        data.emplace_back(s[i]);
        data3.emplace_back(t[j]);
    }
     ////if string not equal then return flase
    if(s.size() != t.size()){
        ans  = false;
    } else if(s.size() == 2 && s.size() == 2){
        ans = false;
    }else if(data.size() == data3.size()){
        n = data.size();
        sort(data.begin(),data.end());
        sort(data3.begin(),data.end());
        for(int i =0 ;i<n;i++){
        if(data[i] == data3[i]){
            ans = true;
        }else{
            ans = false;
        }
        }
    }
    cout<<ans;
    return ans;
}