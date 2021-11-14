#include <stdio.h>

//Bubble Sort
void bubbleSort(int *array, int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

//Quick Sort with partition with center pivot
void quickSort(int a[], int p, int r)
{
    if(p < r)
    {
        int q = partition(a, p, r);
        quickSort(a, p, q - 1);
        quickSort(a, q + 1, r);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int begin, int end){

  int pivot = arr[begin + ((end - begin) / 2)];

  while (begin != end) {

    if (arr[begin] < pivot)
      begin++;
    else
      swap(&arr[begin], &arr[end--]);
  }

  return end;
}


void main(){
    int a, array[10], fill = 0, choice, i;
    printf("Program Inputan Array Dima\n");
    printf("1. Input Data\n");
    printf("2. Bubble Sort\n");
    printf("3. Quick Sort\n");
    printf("4. Exit\n");
    printf("Pilih Menu : ");
    scanf("%d", &choice);
    while (choice != 4)
    {
        switch (choice)
        {

        case 1:
            printf("Input Data : ");
            scanf("%d", &a);
            array[fill] = a;
            fill++;
            printf("Data : ");
            for (i = 0; i < fill; i++){
                printf("%d ", array[i]);
            }
            getch();
            break;

        case 2:
            bubbleSort(array, fill);
            printf("Hasil Sort : ");
            for (i = 0; i < fill; i++){
                printf("%d ", array[i]);
            }
            getch();
            break;

        case 3:
            quickSort(array, 0, fill - 1);
            printf("Hasil Sort : ");
            for (i = 0; i < fill; i++){
                printf("%d ", array[i]);}
            getch();
            break;

        default:
            printf("Input Salah");
            break;
        }
        system("cls");
        printf("\n");
        printf("Program Inputan Array Dima\n");
        printf("1. Input Data\n");
        printf("2. Bubble Sort\n");
        printf("3. Quick Sort\n");
        printf("4. Exit\n");
        printf("Pilih Menu : ");
        scanf("%d", &choice);
    }
}