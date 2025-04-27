#include <iostream>
#include <string>
#include <vector>
#include <bitset>

using namespace std;

string s;
int n;
long long bestNum;
int maxSetBits;

void dfs(int idx, string current) {
    if (idx == n) {
        long long num = stoll(current);
        int setBits = bitset<64>(num).count();
        if (setBits > maxSetBits) {
            maxSetBits = setBits;
            bestNum = num;
        } else if (setBits == maxSetBits && num > bestNum) {
            bestNum = num;
        }
        return;
    }
    if (s[idx] == '?') {
        for (char d = '0'; d <= '9'; ++d) {
            current[idx] = d;
            dfs(idx + 1, current);
        }
    } else {
        current[idx] = s[idx];
        dfs(idx + 1, current);
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> s;
        n = s.length();
        bestNum = -1;
        maxSetBits = -1;
        dfs(0, s);
        cout << bestNum << endl;
    }
    return 0;
}
