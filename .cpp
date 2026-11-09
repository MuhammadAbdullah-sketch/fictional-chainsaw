#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "1 se 10 ke beech number daalo: ";
        cin >> n;          // input main() mein hi
    } while (n < 1 || n > 10);

    cout << "Aapne daala: " << n << endl;
    return 0;
}