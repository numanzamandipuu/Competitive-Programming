#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define newline "\n"

int countDigits(int num) {
    if (num == 0) return 1;
    int numDigits = std::floor(std::log10(std::abs(num))) + 1;
    return numDigits;
}

int main() {
        
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, a, b = 10;
        cin >> n;
        int container = n;
            
        int numDigits = countDigits(n) - 1;
        int dig = pow(10, numDigits);
        vector <int> vec;
        vec.push_back((n / dig) * dig);

        while (numDigits--) {
            if (container % b != 0) {
                vec.push_back(container % b);
                container -= (container % b);
                b *= 10;
            }
            else b *= 10;
        }

        cout << vec.size() << newline;
        for (int i = 0; i < vec.size(); i++) {
           cout << vec[i] << " ";
        }

        cout << newline;
    }
    return 0;
}