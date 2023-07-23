#include <bits/stdc++.h>  // This will work only for g++ compiler.
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define ll long long 
using namespace std;



int main() {
    fast;
    string s = "(){}";
    //make comparinsion vector for check if 
    vector<char> par = {')','(',']','[','{','}'};
    
    char c1,c3;
    int count;
    bool ans;
    if(s.length()==0 || s.length()==1){
        ans = false;
    }
    int k =0;
    // if string is empty and only one character.
     if(s.length()==0 || s.length()==1){
        ans = false;
    }

    while(!s.empty()){
        c1=s.back();s.pop_back();
        c3 =s.back();s.pop_back();
        cout<< c1 << "\t"<<c3;
        if(c1 == 93 || c3 == 91){}
            else if(c1 == 93 || c3 == 91){
            }
    }
   cout<<endl<<ans<<"\t"<<count;

    return 0;
}