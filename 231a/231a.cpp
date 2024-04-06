#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); // fast I/O
    int num, cantSol = 0;
    cin >> num;
    cin.ignore();  
    string sol[num];
    for(int i = 0; i < num; i++) {
        getline(cin, sol[i]);
    }
    for(int i = 0; i < num; i++) {
        if((sol[i][0] == '1') + (sol[i][2] == '1') + (sol[i][4] == '1') >= 2) {
            cantSol++;
        }
    }
    cout << cantSol << endl;
    return 0;
}