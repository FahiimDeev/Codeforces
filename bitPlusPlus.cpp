#include<iostream>
using namespace std;

int main(){

    int number, x(0);
    cin>>number;

    string s;
    for(int i=0;i<number;i++){
        cin>>s;
        if(s[1]=='+'){
            ++x;
        }
        else{
            --x;
        }
    }
    cout<<x<<endl;


    return 0;
}