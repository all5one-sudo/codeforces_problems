#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); // fast I/O
    int num;
    cin >> num;
    string words[num];
    for(int i = 0; i < num; i++) {
        cin >> words[i];
    }
    for(int i = 0; i < num; i++) {
        if(words[i].length() <= 10) {
            cout << words[i] << endl;
        }
        else {
            cout << words[i][0] << words[i].length() - 2 << words[i][words[i].length() - 1] << endl;
        }
    }
    return 0;
}