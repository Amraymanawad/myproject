#include <stdio.h>
#include <stdlib.h>
int *rx=NULL;
typedef struct person{
 int x;
int arr[5] ;
	
} pers;

void addnum(int *x,int*y){
	*x=5;
	*y=6;
}
void um(pers *t){
	t->x=77;
	t->arr[0]=88;
}
void u(int (*v) [3]){
	v[1][2]=188;
	
}
void testtr(int *ptr){
rx=ptr;	
}

int main(){
pers z;
z.x=4;
printf("%d\n",z.x);
int q,w;
addnum(&q,&w);
int res=q+w;
printf("%d\n",res);
pers c;
um(&c);
printf("%d\n %d\n",c.x,c.arr[0]);
int arrr[3][3];
u(arrr);
printf("%d\n",arrr[1][2]);

int data='a';
testtr(&data);
//*rx=120;
printf("%d\n",*rx);

int b=5;
printf("%d\n",&b);
int *ptr=&b;
printf("%d",ptr);


return 0;}


	#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}

#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        // Find the minimum element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum with the first element
        if (min_idx != i) {
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}

#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Return the index where key is found
    }
    return -1; // Key not found
}

int main() {
    int arr[] = {5, 3, 8, 4, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    int result = linearSearch(arr, n, key);

    if (result != -1)
        printf("Element %d found at index %d.\n", key, result);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}



#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // Key not found
}

int main() {
    int arr[] = {1, 3, 4, 5, 7, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Element %d found at index %d.\n", key, result);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}