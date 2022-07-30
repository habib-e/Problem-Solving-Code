#include<bits/stdc++.h>
using namespace std;
int mrge(int arr[], int temp[], int left, int mid, int right) {
   int i, j, k;
   int cnt = 0;
   i = left;
   j = mid;
   k = left;
   while ((i <= mid - 1) && (j <= right)) {
      if (arr[i] <= arr[j]){
      temp[k++] = arr[i++];
      } else {
         temp[k++] = arr[j++];
         cnt += (mid - i);
      }
   }
   while (i <= mid - 1)
      temp[k++] = arr[i++];
   while (j <= right)
      temp[k++] = arr[j++];
   for (i=left; i <= right; i++)
      arr[i] = temp[i];
   return cnt;
}
int merge_sort(int arr[], int temp[], int left, int right){
   int mid, cnt = 0;
   if (right > left) {
      mid = (right + left)/2;
      cnt = merge_sort(arr, temp, left, mid);
      cnt += merge_sort(arr, temp, mid+1, right);
      cnt += mrge(arr, temp, left, mid+1, right);
   }
   return cnt;
}
int inversion(int arr[], int n) {
   int temp[n];
   return merge_sort(arr, temp, 0, n - 1);
}
int main() {
   int arr[] = {1,2,5,6,2,24,42,24,4,24,24};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Number of inversions are : "<< inversion(arr, n);
}
