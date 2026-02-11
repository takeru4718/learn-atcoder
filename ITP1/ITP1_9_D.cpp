#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str, verb, temp;

    int q, a, b;

    cin >> str >> q;

    for(int i=0;i<q;i++){
        cin >> verb >> a >> b;
        if(verb == "print"){
            cout << str.substr(a, b-a+1) << endl;
        } else if(verb == "reverse"){
            temp = str.substr(a, b-a+1);
            //パターン1
            // for(int j=0;j<b-a+1;j++){
            //     str.at(a+j) = temp.at(temp.size()-1-j);
            // }

            //パターン2
            reverse(temp.begin(), temp.end());
            str.replace(a, b-a+1, temp);
        } else if(verb == "replace"){
            cin >> temp;
            str.replace(a, b-a+1, temp);
        }
    }
}