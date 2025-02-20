#include <bits/stdc++.h>
using namespace std;

string findRestaurantName(int N, string A) {
    if (A == string(N, 'z')) {
        return "-1";
    }

   
    string S = A;
    for (int i = N - 1; i >= 0; --i) {
        if (S[i] < 'z') {
            S[i]++;
            for (int j = i + 1; j < N; ++j) {
                S[j] = 'a';
            }
            break;
        }
    }

   
    string reversedS = S;
    reverse(reversedS.begin(), reversedS.end());
    if (S > A && reversedS > A) {
        return S;
    }

    
    for (int i = N - 1; i >= 0; --i) {
        if (S[i] < 'z') {
            S[i]++;
            for (int j = i + 1; j < N; ++j) {
                S[j] = 'a';
            }
            reversedS = S;
            reverse(reversedS.begin(), reversedS.end());
            if (S > A && reversedS > A) {
                return S;
            }
        }
    }

   
   
}

int main() {
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string A;
        cin >> A;

        string result = findRestaurantName(N, A);
        cout << result << "\n";
    }
    return 0;
}