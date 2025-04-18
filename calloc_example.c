#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i, *ptr;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);
    //declare calloc
    ptr = (int*)calloc(n, sizeof(int));
    //entering the elements(input)
    printf("Enter elements: ");
    for(i=0; i<n; i++){
        scanf("%d", (ptr+i));
    }
    //printing the elements(output)
    printf("The elements are: ");
    for(i=0; i<n; i++){
        printf("%d\t", *(ptr+i));
    }
    free(ptr); //removing the unused memory
    return 0;
    
}
