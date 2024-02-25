#include<iostream>

using namespace std;

int main(){

    long long number;
    cin>>number;

    long long sum;
    if (number%2==0){
        sum = (number/2) * (number+1);
    }else{
        sum = (number/2) * (number+1) + (number/2+1);
    }

    cout<<sum;



    return 0;
}