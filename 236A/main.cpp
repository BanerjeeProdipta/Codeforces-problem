#include <iostream>
using namespace std;
string a;
int pas = 0, num;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                num++;
            }
        }
        if (num == 0) {
            pas++;
        }
        num = 0;
    }
    if (pas % 2 == 0) {
         cout << "CHAT WITH HER!";
    } else {

         cout << "IGNORE HIM!";
    }
}
