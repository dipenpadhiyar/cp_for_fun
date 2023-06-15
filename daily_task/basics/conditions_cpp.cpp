#include<bits/stdc++.h>
using namespace std;
#define MAX 100
// int main(){
//     int a =0;

//     if(a>0){
//         cout<<"+ve"<<endl;
//     }else if (a<0){
//         cout<<"-vr"<<endl;
//     }else{
//         cout<<"0"<<endl;
//     }
//     return 0;
// }

/*
Q1.condition
*/
int main(){
    string ch;
    int flag = 0;
    do{
        cout<<"Enter one single character:"<<endl;
        cin>>ch;
        cout<<ch.length()<<endl;
        if(ch.length() == 1){ flag = 1;}
        else{flag = -1;cout<<"Enter more then one characters."<<endl;}
    }while(flag == -1);
    cout<<"character enter :"<< int(ch[0])<<endl;
    //check charavter enter is smaller case or uppercase or numeric number.

    // 
    if(ch[0]>=65 &&  ch[0]<=90){cout<<"Upper case letter."<<endl;
    }else if(ch[0]>=97 &&  ch[0]<=122){cout<<"Lower case letter."<<endl;   
    }else if(ch[0]>=48 &&  ch[0]<=57){cout<<"Numeric letter."<<endl;
    }else{
        cout<<"chracter pressed: "<< ch[0]<<" value of this character in ASCII : "<<int(ch[0])<<endl;
    }
    return 0;
}