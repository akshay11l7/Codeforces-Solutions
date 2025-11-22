#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0, totalCubes = 0, count = 0;
    cin >> n;

    for (int i = 1; totalCubes + sum + i <= n; i++) {
        sum += i;         
        totalCubes += sum; 
        count++;          
    }

    cout << count << endl; 
    return 0;
}

