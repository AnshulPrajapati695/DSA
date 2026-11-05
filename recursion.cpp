#include<iostream>
using namespace std;

void print(int n,int num=1){
    if(n==num){
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    print(n,num+1);
}

int fact(int n){
    if(n==1) return 1;
    return fact(n-1)*n;
}

int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main(){
    int n = 10;
    //print(n);
    //cout<<fact(5);
    cout<<sum(5);
    return 0;
}