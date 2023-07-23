#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0)
int main(){
    fast;
    string data;
    string s = "  dwqwd  d qwdqw -- -42";
    for(int i =0; i<s.length();i++){
            if(std::isdigit(s[i])){
                if(s[i-1] == '-'){
                    data.insert(0,"-");
                }
                data.push_back(s[i]);
            }
    }
    int new_data = stoi(data);
    cout<<sizeof(new_data)<<new_data;
    return 0;
}