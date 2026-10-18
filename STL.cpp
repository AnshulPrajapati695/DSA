#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<set>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    list<int> l = {1, 2, 3, 4, 5};
    deque<int> d = {1, 2, 3, 4, 5};
    pair<int, string> p = {1, "one"};
    stack<int> s;
    queue<int> q;
    priority_queue<int> pq;
    map<int, string> m = {{1, "one"}, {2, "two"}, {3, "three"}};
    set<int> st = {1, 2, 3, 4, 5};
    vector<int>::iterator it ;
    cout<<"pair: "<<p.first<<" "<<p.second<<endl;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for(auto it = v.rbegin(); it != v.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
    for(int val : d){
        cout << val << " ";
    }
    cout << endl;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Stack elements: ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Queue elements: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    pq.push(12);
    pq.push(8);
    pq.push(1);
    cout << "Priority Queue elements: ";
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    cout << "Map elements: ";
    for(auto pair : m){
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;
    cout << "Set elements: ";
    for(auto val : st){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}