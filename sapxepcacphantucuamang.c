#include <stdio.h>
int main() {
    int arr[100]; 
    int n; 
    int i, j, temp;
    printf("Ban muon nhap bao nhieu phan tu (toi da 100)? ");
    scanf("%d", &n);
    if (n > 100 || n <= 0) {
        printf("So luong khong hop le. Vui long nhap so tu 1 den 100.\n");
        return 1; 
    }
    printf("Vui long nhap %d so:\n", n);
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]); 
    }
    printf("\nMang ban dau: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang da sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}