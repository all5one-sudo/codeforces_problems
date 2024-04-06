#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); // fast I/O
    int op, v = 0;
    cin >> op;
    string set[op];
    for(int i = 0;i < op; i++) {
        cin >> set[i];
    }
    for(int i = 0; i < op; i++) {
        if(set[i][1] == '+') {
            v++;
        } else {
            v--;
        }
    }
    cout << v << endl;
    return 0;
}