#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void push();
void pop();
void clear();
void print();

struct data 
{  
    char nama[30];
    int umur;
    int vaksin;
};  

struct data stack[100];
int start = -1;
int end = 0;

int main(){
    while(1){
        printf("\e[1;1H\e[2J");
        int pilihan;
        int data;
        printf("Program Antrian COVID-19\n");
        printf("1. Tambah Antrian Baru\n");
        printf("2. Panggil Pasien\n");
        printf("3. Reset Antrian\n");
        printf("4. Cetak Antrian\n");
        printf("5. Exit\n");
        printf("Pilih menu yang anda inginkan:");
        scanf("%d", &pilihan);
        switch (pilihan)
        {
        case 1:
            push();
            getch();
            break;
        case 2:
            pop();
            getch();
            break;
        case 3:
            clear();
            getch();
            break;
        case 4:
            print();
            getch();
            break;
        case 5:
            exit(0);
            break;
        
        default:
            printf("Nilai yang anda masukkan tidak ada di menu!");
            getch();
        }
    }
    return 0;
}

void push(){
    if(start != 100){
        char data[20];
        int umur, vaksin;
        start++;
        printf("Masukkan nama: ");
        scanf(" %[^\n]s",&data);
        printf("Masukkan umur: ");
        scanf("%d",&umur);
        printf("Masukkan vaksin ke: ");
        scanf("%d",&vaksin);
        strcpy(stack[start].nama, data);
        stack[start].umur = umur;
        stack[start].vaksin = vaksin;
        print();
    }
    else{
        printf("Data Full!");
    }
}

void pop(){
    if(end == -1){
        printf("Array Kosong!");
    }
    else{
        printf("Nama: %s\n", stack[end].nama);
        printf("Umur: %d\n", stack[end].umur);
        printf("Vaksin: %d\n", stack[end].vaksin);
        strcpy(stack[end].nama, "");
        stack[end].umur = 0;
        stack[end].vaksin = 0;
        end++;
    }
}

void clear(){
    if(start == 0){
        printf("Array Kosong!");
    }
    else{
        for (int i=end; i <= start;i++){
            strcpy(stack[i].nama, "");
            stack[i].umur = 0;
            stack[i].vaksin = 0;
        }
        start = -1;
    }
}

void print(){
    if(start == -1){
        printf("Array Kosong!");
    }
    else{
        for (int i=end; i <= start;i++){
            printf("Nama: %s\nUmur: %d\nVaksin Ke-:%d ", stack[i].nama, stack[i].umur, stack[i].vaksin);
        }
    }
}