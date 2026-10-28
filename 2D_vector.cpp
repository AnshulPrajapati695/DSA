#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> vec = {{1,2},{1,2,3,4},{2,3,6}};
    int row = vec.size();
    for(int i=0;i<row;i++){
        for(int j=0;j<vec[i].size();j++) cout<<vec[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}