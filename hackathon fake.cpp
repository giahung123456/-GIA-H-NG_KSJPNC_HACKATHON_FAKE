#include <stdio.h>

int main() {
    int arr[100], n = 0, chon, x;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu\n");
        printf("3. In ra gia tri lon nhat cua mang\n");
        printf("4. In ra cac phan tu la so nguyen to trong mang\n");
        printf("5. Them mot phan tu vao trong mang\n");
        printf("6. Xoa mot phan tu trong mang\n");
        printf("7. Su dung Selection Sort de sap xep mang theo thu tu tang dan\n");
        printf("8. Su dung Linear Search de tim kiem phan tu\n");
        printf("9. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap gia tri phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("Gia tri cac phan tu trong mang: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                {
                    int max = arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > max) {
                            max = arr[i];
                        }
                    }
                    printf("Gia tri lon nhat trong mang: %d\n", max);
                }
                break;
            case 4:
                printf("Cac so nguyen to trong mang: ");
                for (int i = 0; i < n; i++) {
                    int a = 1;
                    if (arr[i] < 2) a = 0;
                    for (int j = 2; j * j <= arr[i]; j++) {
                        if (arr[i] % j == 0) {
                            a = 0;
                            break;
                        }
                    }
                    if (a) {
                        printf("%d ", arr[i]);
                    }
                }
                printf("\n");
                break;
            case 5:
                printf("Nhap gia tri phan tu can them: ");
                scanf("%d", &x);
                arr[n] = x;
                n++;
                break;
            case 6:
                printf("Nhap gia tri phan tu can xoa: ");
                scanf("%d", &x);
                int i;
                for (i = 0; i < n; i++) {
                    if (arr[i] == x) {
                        break;
                    }
                }
                if (i < n) {
                    for (int j = i; j < n - 1; j++) {
                        arr[j] = arr[j + 1];
                    }
                    n--;
                } else {
                    printf("Phan tu khong co trong mang\n");
                }
                break;
            case 7:
                for (int i = 0; i < n - 1; i++) {
                    int min = i;
                    for (int j = i + 1; j < n; j++) {
                        if (arr[j] < arr[min]) {
                            min = j;
                        }
                    }
                    if (min != i) {
                        int temp = arr[i];
                        arr[i] = arr[min];
                        arr[min] = temp;
                    }
                }
                printf("Mang sau khi sap xep: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 8:
                
                break;
            case 9:
                return 0;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    }

    return 0;
}