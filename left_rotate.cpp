vector<int> rotateArray(vector<int>&arr, int n, string dir) {
    int temp=arr[0];
    for (int i = 1; i < arr.size(); i++) {
      arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp; // Write your code here.
    return arr;
}
