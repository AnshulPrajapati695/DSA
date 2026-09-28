#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr1 = NULL;
    int *ptr = &a;
    int** ptr2 = &ptr;
    cout<<*ptr1<<endl;
    return 0;
}