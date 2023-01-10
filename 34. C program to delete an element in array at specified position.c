
#include <stdio.h>

int main()

{

int size, i, pos;

int arr[100];

printf("Enter size of the array: ");

scanf("%d", &size);

printf("Enter elements of the array: ");

for (i = 0; i < size; ++i)

{

scanf("%d", &arr[i]);

}

printf("Enter the position where the element is to be deleted: ");

scanf("%d", &pos);

// Shift elements of arr[pos+1...size-1] left by 1

for (i = pos; i < size - 1; ++i)

{

arr[i] = arr[i + 1];

}

printf("Array after deleting element at given position:\n");

for (i = 0; i < size - 1; ++i)

{

printf("%d ", arr[i]);

}

return 0;

}

35. C program to search element in array using Linear Search.

#include <stdio.h>

int main()

{

int size, i, element, found = 0;

int arr[100];

printf("Enter size of the array: ");

scanf("%d", &size);

printf("Enter elements of the array: ");

for (i = 0; i < size; ++i)

{

scanf("%d", &arr[i]);

}

printf("Enter the element to be searched: ");

scanf("%d", &element);

for (i = 0; i < size; ++i)

{

if (arr[i] == element)

{

found = 1;

printf("Element %d found at position %d\n", element, i + 1);

break;

}

}

if (found == 0)

printf("Element %d not found in the array\n", element);

return 0;

}
