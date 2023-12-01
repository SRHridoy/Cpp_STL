#include"bits/stdc++.h"
using namespace std;

int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    cout << v.size() << endl; 

    cout << v[0] << " " << v[1] << " " << v[2] << endl;

    v.pop_back();
    cout << v.size() << endl;
    v.push_back(9);
    cout << v.size() << endl;

    cout << v[0] << " " << v[1] << " " << v[2] << endl;

    v.clear();
    cout << v.size() << endl;
    
}
