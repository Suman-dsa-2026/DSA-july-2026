#include<iostream>
using namespace std;

int findLargest(vector<int>& arr) {
    int maxi = arr[0];
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    return maxi;
}

int main() {
    vector<int> arr = {3, 2, 1, 5, 2};
    cout << "Largest element: " << findLargest(arr); // Output: 5
    return 0;
}
