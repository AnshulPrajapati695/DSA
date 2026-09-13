#include <iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        for(int k=1; k<2*(n-i)-1;k++){
            cout<<" ";
        }
        
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }

        for(int k=1; k<(i*2)+1;k++){
            cout<<" ";
        }
        
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}