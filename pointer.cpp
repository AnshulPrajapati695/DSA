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
    change(&a);
    cout<<a<<endl;
    return 0;
}