#include <stdio.h>
#include <stdlib.h>

struct Data{
    int data;
    struct Data *next;
};

struct Data *head = NULL;

struct Data* makepoint(int data){
    struct Data *newNode = malloc(sizeof(struct Data));
    newNode->data = data;
    return newNode;
}

void search(int search){
	print();
	struct Data *temp = malloc(sizeof(struct Data));
	struct Data *tempprev;
	temp = head;
	while(temp != NULL){
	    if(temp->data == search){
	        printf("Data Ditemukan");
	        return;
	    }
	    tempprev = temp;
	    temp = temp->next;
	}
	printf("Data Tidak Ditemukan");
	tempprev->next = makepoint(search);
}

void print(){
	struct Data *temp = malloc(sizeof(struct Data));
	temp = head;
	while(temp != NULL){
		printf("%d", temp->data);
		temp = temp->next;
	}
}


void main(){
	head = makepoint(1);
	head->next = makepoint(2);
	search(2);
	search(4);
}