#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a binary number : ";
    cin>>num;
    int dec=0;
    int pow = 1; //2^0
    while (num>0){
        int r = num%10;
        num /= 10;
        dec += r * pow;
        pow *= 2;
    }
    cout<<"The Decimal number is "<<dec;
}