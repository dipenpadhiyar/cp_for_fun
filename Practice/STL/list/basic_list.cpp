#include <bits/stdc++.h> // This will work only for g++ compiler.
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0)
#define ll long long
using namespace std;
#define tab "\t"
//////////////////////////// LIST IN CPP/////////////////////
int main()
{
    fast;
    //////define list
    list<int> ls = {10,30,40,50};
    list<pair<int,string>> key_dic = {{1,"Dipen"}};
    //////puss data in list
    //->> in list we can add data from both-side
    //--methods data.push_back(), data.push_front()
    //--another option emplace_back() , emplace_front()
    ls.emplace_front(10);
    key_dic.push_front({3,"dipen_data"});
    return 0; 
}