#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    string mark;

    vector<int> S(13), H(13), C(13), D(13);

    int number;

    for(int i=0; i<n; i++){
        cin >> mark;
        cin >> number;
        if(mark == "S"){
            S.at(number-1) = 1;
        }
        else if(mark == "H"){
            H.at(number-1) = 1;
        }
        else if(mark == "C"){
            C.at(number-1) = 1;
        }
        else if(mark == "D"){
            D.at(number-1) = 1;
        }
    }

    for(int i=0; i<13; i++){
        if(S.at(i) == 0) cout << "S " << i+1 << endl; 
    }
    for(int i=0; i<13; i++){
        if(H.at(i) == 0) cout << "H " << i+1 << endl; 
    }
    for(int i=0; i<13; i++){
        if(C.at(i) == 0) cout << "C " << i+1 << endl; 
    }
    for(int i=0; i<13; i++){
        if(D.at(i) == 0) cout << "D " << i+1 << endl; 
    }
    


}