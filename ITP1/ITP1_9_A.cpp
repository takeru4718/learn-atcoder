#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string W,T;
    cin >> W;

    int count = 0;
    while(true){
        cin >> T;
        if(T =="END_OF_TEXT") break;

        for(auto& t:T) t = tolower(t);
        
        if(T==W)count++;
        
    }

    cout << count << endl;

    return 0;
}