#include <iostream>
using namespace std;

int main(){
    int a = 6,b = 10;
    cout<< (a & b) <<endl;  //bitwise AND
    cout<< (a | b) <<endl;  //bitwise OR
    cout<< (a ^ b) <<endl;  //bitwise XOR
    cout<< (b<<2) <<endl;   //bitwise left shift
    cout<< (b>>1) <<endl;   //bitwise right shift
    return 0;
}