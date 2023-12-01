#include"bits/stdc++.h"
using namespace std;

pair<int,int>f(){
    return {3, 5};
}

int main(){
    pair<int, string> p = {4, "Hridoy"};

    p.first = 007;
    //sort(p.second.begin(),p.second.end());
    cout << p.first << " " << p.second << endl;
    
    pair<int,int>q = f();
    cout << q.first << " " << q.second << endl;
}
