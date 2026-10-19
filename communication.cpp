#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    static const int H = 11;
    static const int N = (1 << H) - 1;
    static const int BITS = 14;
    vector<int> colv, parityNodes;
    vector<char> isParity;
    pair<int, int> basis[BITS];
    bool hasBasis[BITS];

    int depthOf(int v) { return 32 - __builtin_clz(v); }

    void prepare() {
        colv.assign(N + 1, 0);
        for (int v = 1; v <= N; v++) {
            int d = depthOf(v);
            int id = (v - (1 << (d - 1))) << (H - d);
            colv[v] = (d << (H - 1)) | id;
        }
        memset(hasBasis, 0, sizeof(hasBasis));
        isParity.assign(N + 1, 0);
        for (int v = 1; v <= N && (int)parityNodes.size() < BITS; v++) {
            int vec = colv[v], comb = 0;
            for (int b = BITS - 1; b >= 0; b--) {
                if (!(vec >> b & 1)) continue;
                if (hasBasis[b]) {
                    vec ^= basis[b].first;
                    comb ^= basis[b].second;
                } else {
                    int k = parityNodes.size();
                    basis[b] = {vec, comb ^ (1 << k)};
                    hasBasis[b] = true;
                    parityNodes.push_back(v);
                    isParity[v] = 1;
                    break;
                }
            }
        }
    }

    void doubleSwap(string &y, int u) {
        int d = depthOf(u);
        for (int j = 1; d + j <= H; j++) {
            int base = u << j, half = 1 << (j - 1);
            for (int r = 0; r < half; r++) swap(y[base + r - 1], y[base + r + half - 1]);
        }
    }

    string encode(const string &b, int n) {
        string x(N, '0');
        int cnt = 0, s = 0;
        for (int v = 1; v <= N && cnt < n; v++) {
            if (isParity[v]) continue;
            x[v - 1] = b[cnt++];
            if (x[v - 1] == '1') s ^= colv[v];
        }
        int vec = s, comb = 0;
        for (int bt = BITS - 1; bt >= 0; bt--) {
            if (!(vec >> bt & 1)) continue;
            vec ^= basis[bt].first;
            comb ^= basis[bt].second;
        }
        for (int k = 0; k < BITS; k++)
            if (comb >> k & 1) x[parityNodes[k] - 1] = '1';
        return x;
    }

    string decode(string y, int n) {
        int syn = 0;
        for (int v = 1; v <= N; v++)
            if (y[v - 1] == '1') syn ^= colv[v];
        int a = syn >> (H - 1);
        int idv = syn & ((1 << (H - 1)) - 1);
        int u = 1;
        for (int i = 1; i <= a - 1; i++) u = 2 * u + ((idv >> (H - 1 - i)) & 1);
        y[u - 1] ^= 1;
        doubleSwap(y, u);
        string out;
        int cnt = 0;
        for (int v = 1; v <= N && cnt < n; v++) {
            if (isParity[v]) continue;
            out += y[v - 1];
            cnt++;
        }
        return out;
    }

    void run() {
        string mode;
        cin >> mode;
        int t;
        cin >> t;
        prepare();
        while (t--) {
            int n, h;
            cin >> n >> h;
            string s;
            cin >> s;
            if (mode == "first") {
                if (h == 2) {
                    cout << string(3, s[0]) << "\n";
                } else {
                    cout << encode(s, n) << "\n";
                }
            } else {
                if (h == 2) {
                    int ones = count(s.begin(), s.end(), '1');
                    cout << (ones >= 2 ? '1' : '0') << "\n";
                } else {
                    cout << decode(s, n) << "\n";
                }
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
