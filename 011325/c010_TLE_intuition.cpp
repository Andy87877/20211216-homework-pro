// yap very bad
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int n;

    while(cin >> n) {
        arr.push_back(n);
        sort(arr.begin(), arr.end());
        if (arr.size() % 2 == 1) {
            cout << arr[(arr.size() / 2)] << endl;
        } else {
            cout << (arr[(arr.size() / 2) - 1]+arr[(arr.size() / 2)])/2 << endl;
        }
    }
}
