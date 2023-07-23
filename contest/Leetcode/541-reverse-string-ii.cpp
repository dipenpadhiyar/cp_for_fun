/*
 * @lc app=leetcode id=541 lang=cpp
 *
 * [541] Reverse String II
 */
#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define tab "\t"
int main(){
    fast;
    string s = "abcd";
    int s_size = s.size();
    int k = 4;
    string temp;
    //algo reverser first K() caracter
    int i =0;
    while(s[i]!='\0'){
        reverse(s.begin()+i,s.begin()+k+i);
        cout<<tab<<i;
        i = i+2*k;
        
    }
    //update position of k with two
    cout<<endl<<s;
    return 0;
}

