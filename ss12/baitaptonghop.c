#include <stdio.h>
void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
float averageArray(int arr[], int n) {
    int sum = sumArray(arr, n);
    return (float)sum / n;
}
void printResults(int arr[], int n) {
    int sum = sumArray(arr, n);
    float average = averageArray(arr, n);
    printf("Tong cac phan tu trong mang: %d\n", sum);
    printf("Gia tri trung binh cua cac phan tu trong mang: %.2f\n", average);
}
int main() {
    int n;
    printf("Nhap vao so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    inputArray(arr, n);
    printResults(arr, n);

    return 0;
}
