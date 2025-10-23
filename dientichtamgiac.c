#include <stdio.h>
int main() {
    float canh_day, chieu_cao;
    float dien_tich;
    printf("Nhap vao do dai canh day cua tam giac: ");
    scanf("%f", &canh_day);
    printf("5Nhap vao chieu cao cua tam giac: ");
    scanf("%f", &chieu_cao);
    dien_tich = 0.5 * canh_day * chieu_cao;
    printf("Dien tich cua tam giac la: %.2f\n", dien_tich);

    return 0;
}