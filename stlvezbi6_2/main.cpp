#include <iostream>
#include <queue>

using namespace std;
typedef pair<int, int> par;
// za da se se po prioritet po vtoriot element
struct myComp {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        return a.second > b.second; // najmal e prv 1,2,3...
    }
};
int main(){
    priority_queue<par,vector<par>,myComp> processes;
    // prioritetot e 1,2,3
    processes.push(make_pair(1,3));
    processes.push(make_pair(5,2));
    processes.push(make_pair(7,1));
    while(!processes.empty()){
        cout<<processes.top().first<<" ";
        processes.pop();
    }

    return 0;
}
