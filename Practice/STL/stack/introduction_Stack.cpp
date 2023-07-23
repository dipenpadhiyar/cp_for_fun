// stack //



#include <bits/stdc++.h>  // This will work only for g++ compiler.
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define ll long long 
using namespace std;
#include<stack>

void printElement(stack<int > sTemp){
    while(!sTemp.empty()){
        cout<<"current_position : " <<sTemp.size()<<" value is : "<< sTemp.top()<<"."<<endl;
        sTemp.pop();
    }
}

int main() {
    fast;
    stack<int> s;
    int data;
    //Push data to stack :
    //->first how many element we want to owwer stack
    int n;
    cin>>n;
    for(int  i =0;i<n;i++){
        cout<<"enter data :"<<endl;
        cin>>data;
        s.push(data);
    }

    printElement(s);
    return 0;
}