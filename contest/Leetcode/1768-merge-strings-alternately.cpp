#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<stack>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0)

string check_small_string(string wo1,string wo2){
    if(wo1.length() < wo2.length()){
        return wo1;
    }
    else if(wo1.length()==wo2.length()){
        return "\0";
    }
    else{
        return wo2;
    }
}
int main(){
    fast;
    vector<string>  data;
   string word1 = "abcd",word2= "pqr",word3;
   string out;
   char temp;
   int total_char;
   // check if any string is empty
    if(word1.empty()){
        return word2;
    }
    else if(word2.empty()){
        return word1;
    }
    else if(word1.empty() && word2.empty()){
        return nullptr;
    }
   for(int i = 0 ;i<(word1.length()+word2.length())+(1);i++){
    if(i==0){
        out.push_back(word1.at(i));
        break;
    }else if(i == (word1.length()+word2.length())){
    }else{
    }
   }
   return 0;
}

