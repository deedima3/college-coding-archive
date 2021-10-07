#include<stdio.h>
<<<<<<< Updated upstream
#include<string.h>
#include<stdlib.h>
=======
>>>>>>> Stashed changes

void push();
void pop();
void clear();
void print();

<<<<<<< Updated upstream
struct data 
{  
    char name[20]; 
};  

struct data stack[4];
int top = -1;

int main(){
    while(1){
        printf("\e[1;1H\e[2J");
        int pilihan;
        int data;
        printf("Program Stack By Dima\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Clear\n");
        printf("4. Print\n");
        printf("5. Exit\n");
        printf("Pilih menu yang anda inginkan:");
        scanf("%d", &pilihan);
=======
int main(){
    int top = -1;
    while(1){
        int pilihan;
        printf("Program Stack By Dima");
        printf("1. Push");
        printf("2. Pop");
        printf("3. Clear");
        printf("4. Print");
        printf("5. Exit");
        printf("Pilih menu yang anda inginkan:");
>>>>>>> Stashed changes
        switch (pilihan)
        {
        case 1:
            push();
<<<<<<< Updated upstream
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
=======
            break;
        case 2:
            pop();
            break;
        case 3:
            clear();
            break;
        case 4:
            print();
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
    if(top != 4){
        char data[15];
        top++;
        printf("Masukkan data: ");
        scanf("%s",&data);
        strcpy(stack[top].name, data);
        print();
    }
    else{
        printf("Data Full!");
    }
}

void pop(){
    if(top == -1){
        printf("Array Kosong!");
    }
    else{
        printf("%s", stack[top].name);
        strcpy(stack[top].name, "");
        top--;
    }
}

void clear(){
    if(top == -1){
        printf("Array Kosong!");
    }
    else{
        for (int i=top; i >= 0;i--){
            strcpy(stack[top].name, "");
        }
        top = -1;
    }
}

void print(){
    if(top == -1){
        printf("Array Kosong!");
    }
    else{
        for (int i=top; i >= 0;i--){
            printf("| %s |\n", stack[i].name);
        }
    }
=======

}

void pop(){

}

void clear(){

}

void print(){

>>>>>>> Stashed changes
}