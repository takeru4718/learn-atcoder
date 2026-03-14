#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W, Q;

    cin >> H >> W >> Q;

    vector<vector<int>> choco(H, vector<int>(W));

    for (int i = 0; i < Q; ++i) {
        int N, R, C;

        cin >> N;
        if (N == 1){
            cin >> R;
            int num = R * choco[0].size();
            
            cout << num << endl;
            choco.resize(choco.size() - R);
        } else {
            cin >> C;
            int num = C * choco.size();

            cout << num << endl;
            for (int j = 0; j < choco.size(); ++j) {
                choco[j].resize(choco[j].size() - C);
            }
        }
    }
}