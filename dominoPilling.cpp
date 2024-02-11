#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    int math;
    if(a>=1 && b<=16){
        math = (a*b)/2;
    }
    cout<<math<<endl;

    return 0;
}