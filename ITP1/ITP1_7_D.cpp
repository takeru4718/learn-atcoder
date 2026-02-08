#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n, m, l;
    cin >> n >> m >> l;
    vector<vector<long long>> a(n,vector<long long>(m));
    vector<vector<long long>> b(m,vector<long long>(l));
    vector<vector<long long>> c(n,vector<long long>(l));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a.at(i).at(j);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0; j<l;j++){
            cin >> b.at(i).at(j);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int k=0;k<m;k++){
                c.at(i).at(j) += a.at(i).at(k)*b.at(k).at(j);
            }

            if(j!=l-1) cout << c.at(i).at(j) << " ";
            else cout<<c.at(i).at(j)<<endl;
        }
    }
}