#include<iostream>
using namespace std;

int main(){

    int price,dollars,turns, borrow;
    cin>>price>>dollars>>turns;

     int total_cost = price * (turns * (turns + 1) / 2);

     if (total_cost > dollars){
        borrow = total_cost - dollars;
        cout<<borrow;
     }
     else {
        cout<<0<<endl;
     }


    return 0;
}