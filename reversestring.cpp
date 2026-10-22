#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str = " The  Pen ";
    int n = str.length();
    reverse(str.begin(),str.end());
    string ans = "";
    for(int i=0 ;i<n ;i++){
        string word = "";
        while((i<n) && (str[i] != ' ')){
            word += str[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0) ans += " "+word;
    }
    cout<<ans.substr(1);
    return 0;
}