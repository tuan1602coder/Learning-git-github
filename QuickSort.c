#include <stdio.h>
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}//Hàm đổi chỗ
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int phandoan(int arr[], int giatridau, int giatricuoi, int n) {// Em dùng hàm phân đoạn chọn chốt là giá trị cuối
    int chot = arr[giatricuoi];
    int i = (giatridau - 1);
    for (int j = giatridau; j <= giatricuoi - 1; j++) {
        if (arr[j] <= chot) {
            i++;
            swap(&arr[i], &arr[j]);
            printArray(arr, n); // In mảng sau mỗi lần lặp trong vòng lặp
        }
    }
    swap(&arr[i + 1], &arr[giatricuoi]);
    printArray(arr, n); // In mảng sau khi đặt chốt về vị trí
    return (i + 1);
}
void quickSort(int arr[], int giatridau, int giatricuoi, int n) {//Hàm sắp xếp
    if (giatridau < giatricuoi) { 
        int pi = phandoan(arr, giatridau, giatricuoi, n); 
        quickSort(arr, giatridau, pi - 1, n); 
        quickSort(arr, pi + 1, giatricuoi, n); 
    }
}
int main() {
    int arr[100]; 
    int n; 
    printf("Ban muon mang co bao nhieu phan tu?: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le. Vui long chay lai chuong trinh.\n");
        return 1; 
    }
    printf("Moi ban nhap %d phan tu cho mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nMang ban dau da nhap:\n");
    printArray(arr, n); 
    printf("\nBat dau qua trinh sap xep:\n");
    quickSort(arr, 0, n - 1, n); 
    printf("\nMang sau khi sap xep (QuickSort):\n");
    printArray(arr, n);
    return 0;
}
