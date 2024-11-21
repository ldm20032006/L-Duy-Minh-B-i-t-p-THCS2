#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
    // Nhap so luong phan tu mang A 
int main() {
    int n;
    cin >> n;
    // Nhap cac phan tu mang A 
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i]; 
    }
    
    vector<int> even, odd;
    
    // Phan Chan va Le 
    for (int i = 0; i < n; ++i) {
        if (A[i] % 2 == 0) {
            even.push_back(A[i]);
        } else {
            odd.push_back(A[i]);
        }
    }
    
    // Sap sep cac mang theo thu tu tang dan 
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    
    for (int i = 0; i < even.size(); ++i) {
        cout << even[i] << " ";
    }
    
    for (int i = 0; i < odd.size(); ++i) {
        cout << odd[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
