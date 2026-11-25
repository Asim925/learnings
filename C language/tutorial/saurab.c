#include <stdio.h>
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
    int arr[5];
    int *p = arr; // "arr" and '&arr[0]' both are same
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", p + i); // direct p + i because we will pass the address in the function scanf to update the garbage value to the input value
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", *(p + i));
    }
}
