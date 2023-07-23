#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define tab "\t"
//pattern for learning for loops
int main(){
    /*
            ---1--- 
            --121--
            _12321_
     */
    int n;
    cin>>n;
    int count=1,temp;
    for(int i =1;i<=n;i++){
        for(int  j=0;j<n-i;j++){
            cout<<""<<tab;
        }
        for(int k =0;k<i;k++){
            cout<<k+1<<tab;
            count++;
        }
        temp = i;
        for(int  l=1;l<i;l++){
            cout<<temp - 1<<tab;
            temp -=1;
        }
    
        cout<<endl;
    }
    return 0;
}