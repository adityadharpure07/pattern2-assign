#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;

for(int i = 0; i < n-1; ++i) {
for(int j = 0; j < i; ++j) {
cout << " ";
}
cout << "*";
int m = 2 * (n - i - 1);
for(int j = 0; j < m-1; ++j) {
cout << " ";
}
cout << "*" << endl;
}

for(int i = 0; i < n-1; ++i) {
cout << " ";
}
}