#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void push();
void pop();
void clear();
void print();

struct data 
{  
    char move[20];
};  

struct data stack[100];
int top = -1;

int main(){
    while(1){
        printf("\e[1;1H\e[2J");
        int pilihan;
        int data;
        printf("Program Tracker Move dalam Catur\n");
        printf("1. Move\n");
        printf("2. Redo Move\n");
        printf("3. Reset Game\n");
        printf("4. Print All Moves\n");
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
    if(top != 4){
        char data[20];
        top++;
        printf("Masukkan gerakan: ");
        scanf("%s",&data);
        strcpy(stack[top].move, data);
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
        printf("%s", stack[top].move);
        strcpy(stack[top].move, "");
        top--;
    }
}

void clear(){
    if(top == -1){
        printf("Array Kosong!");
    }
    else{
        for (int i=top; i >= 0;i--){
            strcpy(stack[top].move, "");
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
            if(i%2==0){
                printf("| White: %s |\n", stack[i].move);
            }
            else{
                printf("| Black: %s |\n", stack[i].move);
            }
        }
    }
}