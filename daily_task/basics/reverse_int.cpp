#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
#define tab "\t"

#define fast ios::sync_with_stidio(false);cin.tie(0)

int main(){
    int num = -134, out, j = 0;
    string rev = to_string(num),  temp_out;
    bool check_sign = NULL;

    if(rev[0] == '-'){
        temp_out.push_back('-');
        rev.erase(remove(rev.begin(),rev.end(),'-'));
        }
        reverse(rev.begin(),rev.end());
        for(char i : rev){
        temp_out.push_back(i);    
        }
        num = stoi(temp_out);
        cout<< num <<endl;
    return 0;
}