#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* escape sequence:
        \n new line
        \t tab indentation
        \b backspace
        \\ slash
        \" double quote
        \r remove before part
    */
    // printf("Hello,\" World!");

    // getch is for getting character and immediately goes to the next line... it takes only one character

    // sizeOf operator is used to get the size of a variable or data type in bytes
    // printf("Size of float: %d bytes", sizeof(float));
    // printf("\nSize of double: %d bytes", sizeof(double));
    // printf("\nSize of char: %d bytes", sizeof(char));
    // printf("\nSize of 1234567: %d bytes", sizeof(123456));
    // printf("\nSize of 5.8: %d bytes", sizeof(5.8));
    // printf("\nSize of 'a': %d bytes", sizeof('a')); // converted to ascii
    // char a = 'a';
    // printf("\nSize of variable a: %d bytes", sizeof(a));
    // return 0;

    // printf("size = %d", sizeof("hell"));
    // it would give 5 instead of 4 because null character

    //  ================

    // char arr[3][10];
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("\nenter string %d", i + 1);
    //     scanf("%s", arr[i]);
    // }

    //  ================
    // int age = 10;
    // int *ptr = &age;

    // // it will give the the value
    // printf("%d\n", age);
    // printf("%d\n", *ptr);
    // printf("%d\n", *(&age));

    // // it will give the the address
    // printf("%d\n", ptr);
    // printf("%d\n", &age);

    // // pointer always store the 8 size.
    // printf("%d", sizeof(ptr));

    //  ========================== extended pointers. ; nd pointer ===============================
    //  ================ ND pointer
    /*.  jis level ka pionter hoga usme (n-1)th pointer ka address hoga.  */
    // int x = 10;
    // int *first = &x;
    // int **second = &first;
    // printf("%d, %p, %p\n", x, first, second);
    // printf("%d, %d, %d\n", *first, **second, x);

    //  ================ arithmetic operation on pointers..
    // two pointers of same level can only be subtracted not added multiplied etc.
    // we can add or subtract a number from the pointer...
    // int a = 10, b = 10, *p = &a, *q = &b;
    // int sub = p + 6;
    // printf("%d", sub);

    //  ========================== pointers and functions ===============================
    /*
    functions me hamesha jab pass by value krte hain to functions me copy create hoti hai,
    to direct values change nahi hoti
    pass by reference krne pr value update hojati hai
    */

    // storing values in array by pointers.
    // int arr[5];
    // int *p = arr; // "arr" and '&arr[0]' both are same
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", p + i); // direct p + i because we will pass the address in the function scanf to update the garbage value to the input value
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d", *(p + i));
    // }

    //  ========================== structures ===============================
    /*
        structures can be defined globally or locally
        they are userdefined datatypes
    */
    // struct Date
    // {
    //     int d, m, y; // date month and year
    // } d1, d2, d3;    // idhar bhi define kr sakte hain.
    // struct Date today = {24, 11, 2026}; // struct keyword is necesary before defining a variable with sturctures.
    // printf("%d", today.d);
    // d1 = today; // directly assigning same values of today in d1

    //  ========================== union vs structure ===============================
    /*
        exact same syntax
        in structures, the size is of all the datatypes used. like {int, float, char}, size is int + float + char
        in union, the size is only of the max size datatype. like {int, float, char}, size is float or int (since both are 4) {any one thing will be stored.}
    */

    //  ========================== malloc function : malloc(total size) ===============================
    /*
         malloc has one parameter: the total size
         malloc gives void pointer. so we do typecasting to tell the compiler that return type of malloc function will be specific type
         by default the memory created has the garbage value
    */
    int *p1 = malloc(20); // runtime pr memory creation of size 20 bytes.
    int *p2 = (int *)malloc(40);

    // although in C typecasting is not required as generic pointers(void) are directly converted into the specific datatype

    //  ========================== calloc function : calloc(count, size) ===============================
    /*
        calloc has 2 parameters, the size of datatype and no of blocks to create
        by default the memory created has 0 not garbage values
    */
    int *p3 = calloc(5, sizeof(int));

    //  ========================== reaclloc function : realloc(reference, new_size) ===============================
    p3 = realloc(p3, 10 * sizeof(int));

    //  ========================== free function : free(reference) ===============================
    // free() marks the heap block as reusable by the allocator (if i do not free it, it leaks memory).
    // p3 still holds the old address until we set it to NULL, so we clear it to avoid a dangling pointer.
    free(p3);
    p3 = NULL; // clear pointer so we don't accidentally use freed memory

    //  ==========================  null pointer  ===============================
    // suppose the memory is not created due to any issue so the. pointer is null. so for safeside... we test it always

    if (p3 == NULL)
        return 0;
}
