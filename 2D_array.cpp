#include<iostream>
using namespace std;

pair<int,int> find(int matrix[][3],int row,int col,int key){
    pair<int,int> p = {-1,-1};
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++) if(matrix[i][j]==key) p = {i+1,j+1};
        //cout<<endl;
    }
    return p;
}

int maxRowSum(int matrix[][3],int row,int col){
    int maxSum = 0;
    for(int i=0;i<col;i++){
        int rowSum = 0;
        for(int j=0;j<row;j++) rowSum += matrix[j][i];
        //cout<<endl;
        if(rowSum > maxSum) maxSum = rowSum;
    }
    return maxSum;
}

int main(){
    int arr[3][3] = { {1,2,3},
                      {4,5,6},
                      {7,8,9}};
    int row = 3,cols = 3,sum = 0;
    // int key = 8;
    // pair<int,int> ans = find(arr,row,cols,key);
    // cout<<ans.first<<","<<ans.second<<endl;
    //cout<<maxRowSum(arr,cols,row);
    for(int i=0;i<row;i++){
            sum += arr[i][i];
            if(i != row-1-i) sum += arr[i][row-1-i];
    }
    cout<<sum;
    return 0;
}