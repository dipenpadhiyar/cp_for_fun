#include<iostream>
#include<vector>
#include<string>
#include<bitset>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define tab "\t"
int main(){
    fast;
    int n = 5,counter[]={0};
    vector<int> result;
    string data;
    for(int i =0;i<n;i++){
        cout<<i%2<<tab; 
        bitset<32> binary(i);
        data = binary.to_string();  
        if(data.at(i) == '1'){
            counter[i];
        }
    }
    return 0;
}