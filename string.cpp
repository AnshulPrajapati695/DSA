#include<iostream>
using namespace std;

int main(){
  /*string name;
  cout<<"Enter Your Name : ";
  getline(cin,name);
  cout<<"Hello "<<name<<endl;
  //reverse the string
  string str = "hello";
  int start = 0,end = str.length()-1;
  while(start<end){
    swap(str[start],str[end]);
    start++;
    end--;
  }
  cout<<"Reverse String is "<<str<<endl;   */

  //if a string is palindrome
  string str = "madm";
  string rstr = str;
  int start = 0,end = rstr.length()-1;
  while(start<end)  swap(rstr[start++],rstr[end--]);
  if(str==rstr) cout<<"Palindrome"<<endl;
  else cout<<"Not Palindrome"<<endl;
  return 0;
}