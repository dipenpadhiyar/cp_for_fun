#include <bits/stdc++.h>  // This will work only for g++ compiler.
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define ll long long 
using namespace std;



int main() {
    fast;
   register ll WMW = 0; // watermelon weight

  cin >> WMW;
  /*
  condition is that water melon divide in a such way that distributed between A
  and B as even number of 
    wight: example : 8 kg  Ans : true
            A : 2 , B : 6 
            A : 4 , B : 4 
            A : 6 , B : 2

    */

  if(WMW!=2 && WMW%2 == 0){
    cout << "YES" <<endl;
  }
  else{
    cout << "NO" << endl;
    
  }

  return 0;
}