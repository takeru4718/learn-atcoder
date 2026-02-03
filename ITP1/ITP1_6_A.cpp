#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin >> a.at(i);
    }

    for(int i=0;i<n;i++){
        cout << a.at(n-1-i);
        if(i!=n-1){
            cout << " ";
        }
    }
    cout << endl;
}