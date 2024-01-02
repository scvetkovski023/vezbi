#include<iostream>
#include<deque>
#include<string.h>
#include<algorithm>
#include<string>
#include <vector>
using namespace std;
int main(){
    int count=0;
    deque <int> values;
    deque<int>::iterator itr;
    vector<int> reverse_values;
    values.push_front(3);
    values.push_front(2);
    values.push_front(1);
    for (itr = values.begin(); itr != values.end(); itr++)
        cout<< *itr<< " " ;
    while(!values.empty()){
        int pom=values.back();
        values.pop_back();
        reverse_values.push_back(pom);
        count++;
    }
    cout<<endl;
    for(int i=0;i<reverse_values.size();i++){
        cout<<reverse_values[i]<<" ";
    }
    return 0;
}
