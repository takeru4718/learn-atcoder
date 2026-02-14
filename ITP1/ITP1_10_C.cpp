#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int n;
    vector<int> s;

    double m,a;

    while(true){
        cin >> n;
        if(n == 0) break;
        s.resize(n);
        m=0;
        a=0;

        for(int i=0;i<n;i++){
            cin >> s.at(i);
            m += s.at(i);
        }
        m /= n;

        for(int i=0;i<n;i++){
            a += pow(s.at(i) - m,2);
        }

        a /= n;

        a = sqrt(a);

        cout << fixed << setprecision(8) << a << endl;
    }

}