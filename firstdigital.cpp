#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int H = N / 3600 % 24;
    int M = N % 3600 / 60;
    int S = N % 3600 % 60;
    cout << H << ":" << M << ":" << S << endl;

    return 0;
}