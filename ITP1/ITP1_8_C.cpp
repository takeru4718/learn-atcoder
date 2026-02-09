#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s;
    vector<int> count(26);
    while(getline(cin,s)){
        if(s == "end") break;//ローカル用
        for(int i=0;i<s.size();i++){
            if(isalpha(s.at(i))){
                //count.at(tolower(s.at(i)) - 'a')++;と書くと条件分岐いらない
                if(islower(s.at(i))){
                    count.at(s.at(i) - 'a')++;
                }
                else{
                    count.at(s.at(i) - 'A')++;
                }
            }
        }
    }

    for(int i=0;i<26;i++){
        cout << (char)('a'+i) << " : " << count.at(i) << endl;
        //cout << char('a'+i) << " : " << count.at(i) << endl;の方がいいキャストらしい(安全な変換?)
    }
}