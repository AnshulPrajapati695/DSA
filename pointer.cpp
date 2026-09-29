#include <iostream>
using namespace std;
void change(int* ptr){
    *ptr = 20;
}
int main(){
    int a = 10;
    int* ptr1 = NULL;
    int *ptr = &a;
    int** ptr2 = &ptr;
    int arr[]={1,2,3,4,5};
    change(&a);
    for(int i=0;i<5;i++){
        cout<<*arr+1<<endl;
    }
    return 0;
}