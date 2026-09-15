#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a decimal number : ";
    cin>>num;
    int r;
    int binary=0;
    while (num>0){
        r = num%2;
        num /= 2;
        binary += r;
        binary *= 10;

    }
    cout<<"The binary number is "<<binary;
    return 0;
}