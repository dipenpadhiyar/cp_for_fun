// #include <bits/stdc++.h>  // This will work only for g++ compiler.
// #define fast ios::sync_with_stdio(false);cin.tie(0)
// #define long long ll
// using namespace std;
// #include<conio.h>
// #include<stdio.h>
// #include <vector>
// class pdecay{
// 	public:
// 		pdecay();
// 		void pdecay_single(int);
// 		void pdecay_double(int,int);
// };
// pdecay::pdecay(){
// 	cout<<"no parameter my friend\n\n";
// }
// void pdecay::pdecay_single(int a){
// 			cout<< "Size of C-style of array"<<sizeof(a)<<"\n"<<endl;
// 		}
// void pdecay::pdecay_double(int a,int a1){
// 	cout<< "Size of C-style of array is "<<sizeof(a)<<"\n\n"<<endl;
// 	cout<< "Size of STL Class of array is "<<sizeof(a1)<<"\n"<<endl;
// 	}
//  int main(){

// 	int a[5]={1,2,3,4,5};
	
// 	array<int, 5> a1 = {1,2,3,4,5};
// 	cout<<"-----Inside main----\n";
// 	cout<< "Size of c-type of array"<<sizeof(a)<<endl;
// 	cout<< "Size of STL Class of array"<<sizeof(a1)<<endl;
	
// 	pdecay pd;
	
	
// 	getch();	
// 	return 0;
// }

#include <bits/stdc++.h>  // This will work only for g++ compiler.
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define fi first
#define se second
#define it iterator
#define vc vector
#define  vcit vc<int>::it
#define tab "\t"
using namespace std;
int main() {
    fast;
    vc<int> v;
    v.push_back(1);     //insert data in vector like stack wise
    v.emplace_back(3); //fast way to insert data inside vector
    cout<<"v value is: >";
    for(auto i : v){
        cout<<i<<tab;
    }
    cout<<endl;
    vc<pair<int,int>> vec;
    vec.emplace_back(1,3); //no curly brackets are requried for insert pair value.
    vec.push_back({1,1}); //require curly breckets for insert value.

    vc<int> vec1(5,50); // five times 50 value inserted.
;
    for(auto itr : vec1){
        cout<< itr;
    }
    cout<<endl;
    /////////////////////////////////////////////////////////////////
    //vector access using two ways//
    //(one).as array
    cout<<endl<<"data access v[1]:"<<v[1]<<endl;
    //(two).as iterator
    vcit it1 = v.begin();
    vcit it3 = v.end(); // actlue point to end of data 1 3 4 \0<-- end of data
    //vcit it4 = v.rend();
    //vcit it5 = v.rbegin();
    cout <<"v.begin() value access >" << *it1<<""<<endl;
    it3--;
    cout <<"v.end() value access >" << *it3;
    //////////////////////////////////////////////////////////////////
    cout<<endl<<v[0] << " " <<v.at(0)<<endl;
    cout << "v.back(): "<<(v.back()) << endl;
    ///////////////////////////////////////////////////////////////////
    //print all element from vector using iterator
    //option - 1
    cout<<endl<<" for loop method 1 : "<<endl;
    for(vcit it = v.begin();it!=v.end();it++){
        cout<<*(it)<<tab;
    }
    //option - 2;
    cout<<endl<<" for loop method 2 : "<<endl;
    for(auto it = v.begin();it != v.end();it++){
        cout << *(it)<<tab;
    }
    //option 3
    cout<<endl<<" for loop method 2 : "<<endl;
    for(auto it : v){
        cout << it << tab;
    }
    ////////////////////////////////////////////////////
    //delete elements form vector data
    vc<int> data = {10,30,40,50};
    //1.erase function:
    cout<<endl<<"data value : "<<tab;
    for(auto i : data){
        cout<< i <<tab;
    }
    cout<<endl;
    cout<<"data after erase : ";
    data.erase(data.begin()+1);
    for(auto i : data){
        cout<< i <<tab;
    }
    //erase specific range in vector
    data.insert(data.end(),60);
    // 10 40 50 60
    // erase 40 and 50
    data.erase(data.begin()+1,data.end()-1);
    cout<<endl<<"data after erase mulltiple value: ";
    for(auto i : data){
        cout<< i << tab;
    }
    ////////////////////////////////////////////////////
    //Insert data in null vector or fill vector
    vc<int> ins;
    ins.insert(ins.begin(),10);
    cout<<endl;
    for(auto i : ins){
        cout<<"inserted value : "<< i << endl;
    }
    //now insert using push;
    ins.push_back(30);
    //now insert data at specific postion
    ins.insert(ins.begin()+1,40);
    for(auto i : ins){
        cout<< i << tab;
    }
    cout<<endl;
    ////////////////////////////////////////
    //copy vector from another vector
    vc<int> copy_data={10,40,50,60,70};
    vc<int> new_data;
    new_data.insert(new_data.begin(),copy_data.begin(),copy_data.end());
    for(auto i : new_data){
        cout<< i << tab;
    }
    cout<<endl;
    /////////////////////////////////////////
    //check size of vector
    cout<<new_data.size();

    ////////////////////////////////////////
    //remove last value from vetor
    new_data.pop_back();
    cout<<endl<<"Remove last eliment from vector.\n";
    cout<<"Elements in new_data value:\n";
    for(auto i : new_data){
        cout<<i<<tab;
    }
    cout<<endl;
    new_data.pop_back();
    cout<<"Elements remove from last new_data value:\n";
    for(auto i : new_data){
        cout<<i<<tab;
    }
    }