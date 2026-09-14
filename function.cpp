#include <iostream>
using namespace std;

//Sum of n function
void sum(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout<<sum<<endl;
}

//factorial function
int fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    //cout<<fact<<endl;
    return fact;
}

//sum of digits of a number
void digit_sum(int n){
    int sum = 0;
    while (n > 0){
        int r = n%10;
        n /= 10;
        
        sum += r;
    }
    cout<<sum<<endl;
}

//combination
void comb(int n,int r){
    if (n<r){
        cout<<"Number of object can not be smaller than selection\n";
        return;
    }
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr = fact(n-r);

    cout<< (fact_n / (fact_r*fact_nmr)) <<endl;
}

//prime or not 
bool isprime(int n){
    int detect = 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            detect = 1;
        }
    }
    if(detect==0){
        return true;
    }
    else{
        return false;
    }
}

//print 1 to n prime number
void print_prime(int n){
    for(int i=1;i<=n;i++){
        int detect = 0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                detect = 1;
            }
        }
        if(detect==0){
            cout<<i<<endl;
        }
    }
}

//print fibonacci series
void fib(int n){
    int first = 0;
    int second = 1;
    cout<<first<<","<<second;
    for(int i=1;i<=n;i++){
        int num=first+second;
        cout<<","<<num;
        first=second;
        second=num;
    }
}

//main function
int main(){
    // sum(5);
    // fact(5);
    //digit_sum(55);
    //comb(6,3);
    //cout<<isprime(12)<<endl;
    //print_prime(20);
    fib(10);
    return 0;
}