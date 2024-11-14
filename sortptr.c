//sorting numbers with pointers
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *no;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    no= (int *)malloc(sizeof(n));
    for (int i = 0; i< n; i++) 
    {
        printf("Enter number: ");
        scanf("%d", (no+i));
    }

    for (int i = 0; i< n ; i++) 
    {
        for (int j = 0 ; j < n; j++) 
        {
            if (*(no + j) >*(no + i)) 
            {
    
                int temp = *(no+ i);
                *(no + i) = *(no + j);
                *(no+ j) = temp;
            }
        }
    }

    printf("\nSorted numbers: \n");
    for (int i = 0; i< n; i++) 
    {
        printf("%d ", *(no + i));
    }
    return 0;
}
