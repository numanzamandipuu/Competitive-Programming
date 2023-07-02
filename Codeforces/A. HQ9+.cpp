#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define newline "\n"

int main() {
        
    ios::sync_with_stdio(false);
    cin.tie(0);
    bool ans = false;

    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'H' or str[i] == 'Q' or str[i] == '9') ans = true;
    }

    if (ans) yes;
    else no;

    return 0;
}