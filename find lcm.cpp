#include <iostream>

using namespace std;

int n;
int arr[10];

// 최대공약수 구하기
int gcd(int a, int b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

// 최소공배수 구하기
int lcm(int a, int b) {
    return a*b / gcd(a, b);
}

// 리스트의 수를 하나씩 꺼내서 여러 수의 최소공배수 구하기
int list_lcm(int a[], int n) {
    if (n==1) return a[0];
    return lcm(a[n-1], list_lcm(a, n-1));
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << list_lcm(arr, n);

    return 0;
}
