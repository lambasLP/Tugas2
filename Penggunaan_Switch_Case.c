#include <stdio.h>
#include<conio.h>
int main(){
    int angka1,angka2;
    printf("Demo Struktur Kondisi \n");
    printf("===================== \n");
    printf("Masukkan Bilangan asli 1 : ");
    scanf("%d",&angka1);
    if(angka1>=0 && angka1<=9)
        {
        printf("Masukkan bilangan asli 2 : ");
        scanf("%d",&angka2);
        if (angka2>=0 && angka2<=9)
        {
            int pilihan;
            printf("\n\nJenis Operator\n");
            printf("------------------\n");
            printf(" 1. Contoh Operator Aritmatika\n");
            printf(" 2. Contoh OPerator Relasional\n");
            printf(" 3. Contoh Operator Logika \n");
            printf(" Pilihan [1-3] : ");
            scanf("%d",&pilihan);
            switch(pilihan)
            {
                case 1:
                printf("\n Contoh Operator Aritmatika \n");
                printf("Penjumlahan \t : %d + %d = %d \n",angka1,angka2,angka1+angka2);
                printf("Perkalian   \t : %d * %d = %d \n",angka1,angka2,angka1*angka2);
                break;
                case 2:
                printf("\nContoh Operator Relasional\n");
                printf("Persamaan     \t : %d == %d = ",angka1,angka2);
                if(angka1==angka2)
                printf("TRUE");
                else
                printf("FALSE");
                printf("\nPertidaksamaan \t : %d != %d = ",angka1,angka2);
                if(angka1!=angka2)
                printf("TRUE");
                else
                printf("FALSE");
                break;
                case 3:
                printf("\n\n Contoh Operator Logika \n");
                printf("Logika AND \t : %d && %d = %d\n",angka1,angka2,angka1 && angka2);
                printf("Logika OR \t : %d || %d = %d\n",angka1,angka2,angka1 || angka2);
                break;
                default:
                printf("\n Harap MAsukkan bilangan asli");
            }
        }else
    {
        printf("\ninput harus benar");
    }

        }
    else
    {
        printf("\ninput harus benar");
    }
    getch();
    return 0;
}


