#include <vector>
#include <string.h>
#include <iostream>

#include <algorithm>

using namespace std;

int main()

{
    vector<char> v1,v2;
    char zbor[]={'s','t','a','k','l','o'};
    for(int i=0;i<strlen(zbor);i++){
        v1.push_back(zbor[i]);
    }
    for(int i=0;i<strlen(zbor);i++){
        cout<<v1[i];
    }
    cout<<endl;
    char zbor1[]={'s','l','a','t','k','o'};
    for(int i=0;i<strlen(zbor1);i++){
        v2.push_back(zbor1[i]);
    }
    for(int i=0;i<strlen(zbor1);i++){
        cout<<v2[i];
    }
    cout<<endl;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    cout<<"Anagram(1)/Ne e anagram(0)"<<equal(v1.begin(),v1.end(),v2.begin());
    return 0;

}
