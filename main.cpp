#include <iostream>
#include <set>

using namespace std;

int main()
{
    int a[] = {1,2,3};
    set<int> s(a,a+3);
    set<int>::iterator iter;
    if((iter = s.find(2)) != s.end()){
        cout << *iter<<endl;
    }
    return 0;
}
