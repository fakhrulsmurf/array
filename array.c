#include <stdio.h>
 
main()
{
    int array[100], n, c;
   
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
   
    printf("Enter %d elements\n", n);
   
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
   
    printf("The array elements are:\n");
   
    for (c = 0; c < n; c++)
        printf("%d\n", array[c]);
   
    return 0;
}
