#include <stdio.h>

#define MAX 100

char binary_tree[MAX];

void set_root(char value){
    binary_tree[0] = value;
}

void set_left(int idx, char value){
    binary_tree[2 * idx + 1] = value;
}

void set_right(int idx, char value){
    binary_tree[2 * idx + 2] = value;
}


void check_node(int node){
    if(binary_tree[node-1]){
        printf("ADA\n");
    }
    else{
        printf("TIDAK ADA\n");
    }
}

void maketree(){
    set_root('A');
    set_left(0, 'B');
    set_right(0, 'C');
    set_left(1, 'D');
    set_right(1, 'E');
    set_left(2, 'F');
    set_right(2, 'G');
    set_left(3, 'H');
    set_right(3, 'I');
    set_left(6, 'H');
    set_right(6, 'I');
}


void nomor_satu(){
    maketree();
    check_node(1);
    check_node(2);
    check_node(10);
}


void main(){
    nomor_satu();
}