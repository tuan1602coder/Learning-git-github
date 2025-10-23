/*Cao Duc Tuan - 202414433 - BTH3 - Tuan36 - 753281 (9/5/2025)
Bai 3.9*/
#include <stdio.h>
#include <math.h>
int main() {
    printf("\nCao Duc Tuan - 202414433 - BTH3 - Tuan36 - 753281 (9/5/2025)");
    printf("\nBai 3.9 \n");
    float diemTX_tuan33, diemGK_tuan33, diemCK_tuan33, diemMH_tuan33;
    printf("Nhap diem thuong xuyen (0-10): ");
    scanf("%f", &diemTX_tuan33);
    printf("Nhap diem giua ky (0-10): ");
    scanf("%f", &diemGK_tuan33);
    printf("Nhap diem cuoi ky (0-10): ");
    scanf("%f", &diemCK_tuan33);
    diemMH_tuan33 = diemTX_tuan33 * 0.1 + diemGK_tuan33 * 0.3 + diemCK_tuan33 * 0.6;
    diemMH_tuan33 = round(diemMH_tuan33 * 10) / 10.0;
    printf("DIEM MON HOC LA: %.1f\n", diemMH_tuan33);
    return 0;
}
