#include <bits/stdc++.h>  // This will work only for g++ compiler.
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define ll long long 
using namespace std;
auto upperTolowerCase(string data){
    for(int i =0; i<data.length();i++){
        data[i] = tolower(data[i]);
    }
    return data;
}
int main() {
    fast;
     string s="Abcba",temp(s.size(), ' '),temp3(temp.size(),' ');
    cout<<s.length()<<endl;
    bool ans = false;
        //remove extra chracter from specific posiotion.
        int j = 0;
        for(int i =0 ;i<s.size();i++){
            if(isalpha(s[i])){
                if(isupper(s[i])){
                    s[i] = tolower(s[i]);
                    temp[j] = s[i];
                    j++;
                }
                else{temp[j] = s[i];j++;}
            }
            else{continue;}
        }
        // now check string is palidrom or not check
        //////fist reverse the string
        temp3 = temp;
        reverse(temp.begin(),temp.end());
        //case one :  if string is emppty
        if(temp.empty()){
            ans = true;
        }
        // case two: if only one character in string
        if(temp.size() == 1){
            ans =  true;
        }
        //case three: if more then one charactr then check palindroman
        if(temp.size()>1){
            if(temp ==temp3){
                ans = true;
            }
        }
        cout<<s.data()<<"\t";
        cout<<ans;
        return 0;
}