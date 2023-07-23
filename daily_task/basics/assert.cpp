#include<iostream>
using namespace std;
#include <cassert>

// assert function cpp
//  ->>(1) assert()
//  ->>(2) static_assert()
// #include <cassert> in cassert lib
// example of assert function()
//is use for run time error

//  ->>(1) assert()
// here above code shows if pointer value passed is null then  assert function executed.
/*
void display_number(int* p){
    if(p!=NULL)
    {cout<<*p<<endl;}
}
int main(){
    int a = 10;
    display_number(&a);
    int *k =NULL;
    display_number(k);
    return 0;
}
*/

////  ->>(2) static_assert()
/*
int main(){
    //static_Assert(condition,'string message pass')
    static_assert(sizeof(int)!=2,"32 bit system.");
    cout<<sizeof(int)<<" 64 bit system.";
}
*/
