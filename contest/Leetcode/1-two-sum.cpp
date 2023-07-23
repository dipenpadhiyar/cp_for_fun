#include<iostream>
#include<vector>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0)
#define tab "\t"
void vector_pass(const vector<int> &data);
int main(){
    fast;
    vector<int> data {3,3};
    vector<int> out;
    int target = 6;
    for(int i=0;i<data.size();i++){
        for(int j=i+1;j<data.size();j++){
            if(data.at(i) + data.at(j) == target){
            out.push_back(i);
            out.push_back(j);
        }
        }
    }
    for(auto const &d : out){
        cout<< d << tab;
    }
    return 0;
}

void vector_pass(vector<int> &data){
    for(auto const &d : data){
        cout<< d << tab;
    }
}