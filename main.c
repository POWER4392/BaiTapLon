#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include "function.h"

int main() {
    int choice; 
    int i, n;
    int a= 5;
    int random_num; 
    printf("Chuong trinh cua nhom 8\n");
    printf("1-So Sanh 2 So Nguyen\n");
    printf("2-Cong tru phep tinh\n");
    printf("3-Doan SO\n");
    printf("4-Xac Dinh Chan Le\n");
    printf("5-Keo Bua Bao\n");
    printf("Chon Chuong Trinh: ");
    if (scanf("%d", &choice) != 1) {
        printf("Chuong Trinh khong ton tai, Vui Long chon lai.\n");
        return 1;
    }
    switch (choice) {
     
    case 1:  // phuong anh
     int So1, So2;
    
     printf("Nhap hai so nguyen: ");
     scanf("%d %d", &So1, &So2);
    
     soSanhHaiso(So1, So2);
     break;
    
    case 2: //manh
     int x, y;
      printf("Nhap so thu nhat: ");
      scanf("%d ", &x, congtru );
       
      printf("Nhap so thu hai: ");
      scanf("%d ", &y, congtru );
     congtru(x, y);
      
    case 3: // vu
       
     DoanSo();
     if (n==random_num){
        printf("u win \n");
    }
    
     else {
        printf("u lost \n");
        printf("The number is: %d\n", random_num);
    }

    break;
     
      
    case 4: //hanh

     int arr[] = {10, 23, 15, 7, 8, 22, 5, 11};
     int size = sizeof(arr) / sizeof(arr[0]);
     xacDinhChanLe(arr, size);
     break;

     case 5:  // vu ,phuong anh
     while(1) {
        keobuabao();
        printf("Ban co muon choi lai khong? (y/n): ");

        char Choilai;
        if (scanf(" %c", &Choilai) != 1) {
            printf("Loi nhap! Vui long thu lai.\n");
            while(getchar() != '\n'); 
            continue;
        }
        while(getchar() != '\n'); 
        if (Choilai == 'n') {
            printf("Cam on vi da choi\n");
            sleep(5);
            break;
        }
    }
 }

  return 0;
}
