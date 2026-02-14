#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    double p1=0,p2=0,p3=0,pi=0;

    for(int i=0;i<n;i++){
        cin >> x.at(i);
    }

    for(int i=0;i<n;i++){
        cin >> y.at(i);
    }

    for(int i=0;i<n;i++){
        p1 += abs(x.at(i)-y.at(i));
        p2 += pow(abs(x.at(i)-y.at(i)),2);
        p3 += pow(abs(x.at(i)-y.at(i)),3);
        if(pi<abs(x.at(i)-y.at(i))) pi = abs(x.at(i)-y.at(i));
    }

    p2 = pow(p2, 1.0/2);
    p3 = pow(p3, 1.0/3);

    cout << fixed << setprecision(8) << p1 << "\n" << p2 << "\n" << p3 << "\n" << pi << endl;





}