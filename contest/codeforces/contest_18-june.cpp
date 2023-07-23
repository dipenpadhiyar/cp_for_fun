#include<bits/stdc++.h>
#include<cassert>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
int main(){
    // fast;
    int m_value,sub_main,value[]={0};
    unordered_map<int , vector<int>> data;
    cout<<"how many number you want:\t";
    cin>>m_value;
    for(int i =0;i<m_value;i++){
        cout<<"key values:\t";
        cin>>sub_main;
        for(int j = 0;j<sub_main;j++){
            cout<<"vector_data : \t";
            cin>>value[j];
        }
        data.insert(make_pair(sub_main,value));
        }
        return 0;

     }
