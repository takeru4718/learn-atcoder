#include <iostream>

#include <vector>
#include <string>

using namespace std;

int main(){
    int N;

    cin >> N;
    vector<string> S(N);

    int m = 0;
    for(int i=0;i<N;i++){
        cin >> S[i];
        if(m < S[i].size()){
            m = S[i].size();
        }
    }

    for(int i=0;i<N;i++){
        int point = (m-S[i].size())/2;
        for(int j=0;j<point;j++){
            cout<<".";
        }
        cout<<S[i];
        for(int j=0;j<point;j++){
            cout<<".";
        }
        cout << endl;
    }






}