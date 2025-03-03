#include <iostream>
using namespace std;

int sigma(int n) {
    if (n < 0)
        throw "n < 0";
    else if (n <= 1)
        return n;
    return n + sigma(n - 1);
}

int main() {
    int result = sigma(3);
    cout << result << '\n';
}