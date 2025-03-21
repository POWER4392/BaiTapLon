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

    printf("Tong: %d\n", a + b);
    printf("Hieu: %d\n", a - b);
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
    printf("GUESS THE NUMBER FROM 1 TO 99: \n");
    printf("YOU HAVE 5 LIFE TO GUESS\n");
    printf("GUESS: ");
    scanf("%d", &n);
    printf("\n");
    while (n!=random_num && a--){
        if (a!=0){
            if ( n <random_num){
                printf("HIGHER!! \n");
                printf("GUESS AGAIN - LIFE: %d\n",a);
                scanf("%d",&n);
                printf("\n");
            }
            else if ( n >random_num){
                printf("LOWER!! \n");
                printf("GUESS AGAIN - LIFE: %d\n",a);
                scanf("%d", &n);
                printf("\n");
            }
        }
        else{
            break;
        }
    }
 }

