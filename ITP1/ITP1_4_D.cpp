#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for(int i=0; i<n; i++){
//         cin >> a.at(i);
//     }

//     cout << *min_element(a.begin(),a.end()) << " " << *max_element(a.begin(), a.end()) << " " << accumulate(a.begin(), a.end(),0) << endl;

// }

//関数使わないver

int main(){
    int n;
    cin >> n;

    vector<long long> a(n);

    cin >> a.at(0);
    long long mn = a.at(0);
    long long mx = a.at(0);
    long long sum = a.at(0);

    for(int i=1; i<n; i++){
        cin >> a.at(i);
        if(mn > a.at(i)) mn = a.at(i);
        if(mx < a.at(i)) mx = a.at(i);
        sum += a.at(i);
    }

    cout << mn << " " << mx << " " << sum << endl;
}