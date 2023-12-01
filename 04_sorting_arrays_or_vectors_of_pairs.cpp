#include"bits/stdc++.h"
using namespace std;

int main(){
    vector<pair<int,string>>v = {{90,"Hridoy"}, {54,"Nova"},{90,"Elina"}, {80, "Omar"}};

    sort(v.begin(),v.end());

    for(auto it:v){
        cout << it.first << " " << it.second << endl;
    }

    for(int i = v.size()-1; i >= 0; i--){
        cout << v[i].second << endl;
    }
}
