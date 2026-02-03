#include <iostream>
#include <vector>

using namespace std;

//改善点: ループ少ないほうがよかった.rsumとcsum配列用意すればよかった．
int main(){
    int r,c;
    cin >> r >> c;

    vector<vector<int>> table(r,vector<int>(c));

    int sum;

    for(int i=0;i<r;i++){
        sum = 0;
        for(int j=0;j<c;j++){
            cin >> table.at(i).at(j);
            cout << table.at(i).at(j) << " ";
            sum += table.at(i).at(j);
        }
        cout << sum << endl;
    }

    int total_sum = 0;

    //最後の行出力
    for(int j=0;j<c;j++){
        sum = 0;
        for(int i=0;i<r;i++){
            sum += table.at(i).at(j);
        }
        cout << sum << " ";
        total_sum += sum;
    }

    cout << total_sum << endl;

}