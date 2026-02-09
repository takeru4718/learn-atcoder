#include <iostream>

using namespace std;

int main(){
    string s,p;
    //sを二つくっつけて，pをfindする
    cin >> s >> p;

    string ss;

    ss = s + s;

    if(ss.find(p) == string::npos) cout << "No" << endl;
    else cout << "Yes" <<endl;


}