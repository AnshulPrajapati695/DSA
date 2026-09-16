#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a decimal number : ";
    cin>>num;
    int binary=0;
    int pow = 1; //10^0
    while (num>=0){
        int r = num%2;
        num /= 2;
        binary += r*pow;
        pow *= 10;

    }
    cout<<"The binary number is "<<binary;
    return 0;
}