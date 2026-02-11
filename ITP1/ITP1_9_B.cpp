#include <iostream>

using namespace std;

int main(){
    string s;
    int m,h;

    while(true){
        cin >> s >> m;
        if(s == "-") break;

        for(int i=0;i<m;i++){
            cin >> h;
            s += s.substr(0, h);
            s = s.substr(h, s.size());
        }

        cout << s << endl;
    }
    
    return 0;

}