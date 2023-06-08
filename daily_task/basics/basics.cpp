#include <bits/stdc++.h>  // This will work only for g++ compiler.
#include<time.h>

#define fast ios::sync_with_stdio(false);cin.tie(0)
#define ll long long 
using namespace std;

int main() {
    fast;
    clock_t time;
    ll t=1;cin>>t;
    
    register int a =10,b = 0,c = 0;
    time = clock();
    for(int i =0 ;i<10;i++){
        b = b + i;
        c = a + b;
    }
    time = clock() - time;
    double time_taken = ((double)time)/CLOCKS_PER_SEC;
    
    cout<<"fun() took "<< time_taken <<"seconds to execute \n", );

    return 0;
}