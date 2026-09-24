#include <iostream>
using namespace std;

int main(){
    int arr[4] = {2,7,11,15};
    int target = 9;
    int i=0,j=4;
    while(i<j){
        int sum = arr[i]+arr[j];
        if (sum>target) j--;
        else if (sum<target) i++;
        else {
            cout<<arr[i]<<","<<arr[j]<<endl;
            break;
        }
    }
    return 0;
}