#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(isalpha(s.at(i))){
            if(islower(s.at(i))) cout<<(char)toupper(s.at(i));
            else cout<<(char)tolower(s.at(i));
        } else {
            cout<<s.at(i);
        }
    }
    cout << endl;
}

//別解
// int main(){
//     string s;
//     getline(cin, s);
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='a'&&s[i]<='z')s[i] += 'A'-'a';
//         else if(s[i]>='A'&&s[i]<='Z')s[i] += 'a'-'A';
//     }
//     cout << s << endl;
// }