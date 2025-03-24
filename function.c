#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include "function.h"

 void xacDinhChanLe(int arr[], int size) {
    printf("Cac so chan: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\nCac so le: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void soSanhHaiso(int So1, int So2) {
    if (So1 > So2) {
        printf("%d > %d\n", So1, So2);
    }else if (So1 < So2){
        printf("%d < %d\n", So1, So2);
    }else {
        printf("%d = %d\n", So1, So2);
    }
}

void congtru(int a, int b) {
    int choice;
    printf ("1. Cong \n");
    printf ("2. Tru \n");  
    printf ("3. Nhan \n");
    printf ("4. Chia \n");
    printf ("Chon phep tinh: ");
    scanf("%d", &choice); 

    switch (choice) {
        case 1:
            printf("Tong: %d\n", a + b);
            break;
        case 2:
            printf("Hieu: %d\n", a - b);
            break;
        case 3:
            printf("Tich %d\n", a * b);
            break;
        case 4:
            printf("Thuong %d\n", a / b);
            printf("Du %d\n", a % b);
            break;    
        default:
            printf("Lua chon khong hop le\n");
            break;
    }
}

void keobuabao() { //manh, minh hanh
    char *chon[] = {"Keo", "Bua", "Bao"};
    int Nguoichoi, May;
    int choice;

    printf("Chon Keo, Bua, Bao\n");
    printf("1. Keo\n");
    printf("2. Bua\n"); 
    printf("3. Bao\n");
    printf("Chon: ");

    scanf("%d", &Nguoichoi);
    May = rand() % 3 + 1;
    printf("Nguoi choi chon: %s\n", chon[Nguoichoi - 1]);
    printf("May chon: %s\n", chon[May - 1]);
    if (Nguoichoi == May) {
        printf("Hoa\n");
    } else if((Nguoichoi == 1 && May == 2) || (Nguoichoi == 2 && May == 3) || (Nguoichoi == 3 && May == 1)) {
        printf("May thang\n");
    } else {
        printf("Nguoi choi thang\n");
    }
  }

  void DoanSo() {
    int n;
    int a=5;
    unsigned int time_value=(unsigned int)time(NULL);
    int random_num=time_value%10;
    printf("Doan so tu 1 den 10: \n");
    printf("Ban co 5 luot doan\n");
    printf("DOAN: ");
    scanf("%d", &n);
    printf("\n");
    while (n!=random_num && a--){
        if (a!=0){
            if ( n <random_num){
                printf("CAO HOWN!! \n");
                printf("DOAN LAI - LUOT DOAN CON: %d\n",a);
                scanf("%d",&n);
                printf("\n");
            }
            else if ( n >random_num){
                printf("THAP HON!! \n");
                printf("DOAN LAI - LUOT DOAN CON: %d\n",a);
                scanf("%d", &n);
                printf("\n");
            }
        }
        else{
            break;
        }
    }
 }

