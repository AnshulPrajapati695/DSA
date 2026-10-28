#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 157648;  /*
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
        int sum=0;
        while(n>0){
            int rem = n%10;
            sum += rem;
            n = n/10;
        }
        cout<<sum;   
        int ans = 0;
        int copyn = n;
        while(copyn>0){
            int digit = copyn%10;
            ans += (digit*digit*digit);
            copyn = copyn/10;
        }
        if(ans==n) cout<<"Armstrong";
        else cout<<"Non Armstrong"; 
        int a=20,b=28;
        while(a>0 && b>0){
            if(a>b) a=a%b;
            else b=b%a;
        }
        if(a>b) cout<<a;
        else cout<<b;*/
        int ans=0;
        while(n>0){
            int dig = n%10;
            ans += dig;
            ans *= 10;
            n = n/10;
        }
        cout<<ans/10;
    return 0;
}