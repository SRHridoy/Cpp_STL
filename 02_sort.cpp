#include"bits/stdc++.h"
using namespace std;

int main(){
    int a[4] = {5, 4, 1, 2};
    sort(a,a+3);
    for(int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }cout << endl;

    vector<int>v = {3,2,2,0};
    sort(v.begin(), v.end());

    for(auto it:v){
        cout << it << " ";
    }
}
