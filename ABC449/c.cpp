#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, L, R;

    string S;

    cin >> N >> L >> R >> S;

    vector<int> pos[26];

    for (int i = 0; i < S.size(); ++i) {
        pos[S[i] - 'a'].push_back(i);
    }

    long long ans = 0;

    for (int c = 0; c < 26; ++c) {
        auto &v = pos[c];

        for (int i = 0; i < v.size(); ++i) {
            int left = v[i] + L;
            int right = v[i] + R;

            //left以上の最初の要素のイテレータを返す
            auto l = lower_bound(v.begin(), v.end(), left);
            //rightより大きい最初の要素のイテレータを返す
            auto r = upper_bound(v.begin(), v.end(), right);

            //イテレータ同士の引き算は個数を返す
            //[L, R]は[lower, upper)で表現できる
            ans += r - l;
        }
    }

    cout << ans << endl;

}