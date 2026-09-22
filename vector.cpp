#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3};
    // for(int i : vec){
    //     cout<<i<<endl;
    // }
    //vector function
    cout<<vec.size()<<endl;
    vec.push_back(24);
    cout<<vec[3]<<endl;
    vec.pop_back();
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(1)<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
}