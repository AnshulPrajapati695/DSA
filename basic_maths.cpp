#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 7;
    long int count=0;
        vector<bool> isPrime(n+1,true);
        for(int i=2;i<n;i++){
            if(isPrime[i]){
                count++;
                cout<<i<<" is a Prime Number"<<endl;
                for(int j=i*2;j<n;j=j+i){
                    isPrime[j]=false;
                }
            }
        }
        cout<<"Total Number of prime numbers are "<<count<<endl;
    return 0;
}