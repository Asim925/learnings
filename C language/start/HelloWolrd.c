#include <stdio.h>  // preprocessor directive
#include <string.h> // for string functions

// void printHello(const char religion) {
//     if(religion == 'i') printf("madni \n");
//     else printf("hello");
// }

// ------ exercise: sum ------ //

// int add(int n) {
//     // printf("the sun is: %d\n", (n*(n+1))/2);
//     if(n == 1) return 1;
//     return  n + add(n - 1);
// }

// ------ exercise: FABIONACCI sum ------ //
// int fabionacci(int n) {
//    if (n == 1) return 1;
//    if (n == 0) return 0;
//    int muneer  =  fabionacci(n-1) + fabionacci(n-2);
//    // printf("%d \n", muneer);
//    return muneer;
// }

int main()
{

   // ============================ format specifiers ============================ //
   // int age = 20;
   // printf("Age: %d\n", age); // format specifier for the integer.

   // float PI = 3.142789;
   // printf("PI: %f\n", PI); // format specifier for the float.

   // char star = '*';jj
   // printf("character: %c \n", star); // format specifier for the char.

   // ============================ output - input ============================ //
   // int value;
   // printf("value likh jaldi: ");
   // scanf("%d", &value); // scanf for input. "&" addresses that vairable (to store in falan variable)
   // printf("yele jo tune likha: %d \n", value);

   // ------ exercise: sum ------ //
   // int a,b;
   // printf("give the value of 'a': "); scanf("%d", &a);
   // printf("give the value of 'b': "); scanf("%d", &b);
   // printf("the sum is %d \n", a+b);

   // ------ exercise: area of reactangle  ------ //
   // float length, breadth;
   // printf("tell me whats length? : "); scanf("%f", &length);
   // printf("tell me whats breadth? : "); scanf("%f", &breadth);

   // printf("the area of the square is: %f \n", length*breadth);

   // ------ exercise: area of circle  ------ //
   // float radius;
   // printf("enter the value of the radius: "); scanf("%f", &radius);
   // printf("the area of the circle is: %f \n", 3.142*radius*radius );

   // ============================ type conversion ============================ //
   // int a = 1.9999; // this is wrong because its float and throws error
   // printf("%d",a);
   // a = (int) 1.9999; // this forces the float to be integer ...

   // ============================ artihmatic rules.. ============================ //
   // int haggu = 4 * 9 / 6 * 2; // it doesnt follow the BODMAS...  same priority set.. then it will calculate left to right.
   // // we have priority rules. " *, /, % " then we have " +, - "
   // printf("%d", haggu);

   // ============================  loops.. ============================ //

   // int sum = 0;
   // for(int i=1; i<=10; i++) {
   //     sum+=i;
   //     printf("%d \n", 10-i+1);
   // }
   // printf("%d", sum);

   // ------ exercise: take if no. are even else stop ------ //
   //   int n;
   //   do {
   //     printf("enter number");
   //     scanf("%d", &n);

   //   }
   //   while(n % 2 == 0);

   // ============================  funcrions and recursion.... ============================ //
   // printHello('i');

   //  printf("%d\n", add(4));

   //   fabionacci(4);

   // ============================  pointers (*) ============================ //

   // int age = 20;      // this var must be saved somewhere in the memory having "address"
   // int *point = &age; //(* is for pointing, & for targetting the var)

   // // now the pointter is also saved somewhere... to get the value stored in the address:

   // int gain_Age_Val = *point;
   // printf("age from pointer is %d and point is %p", gain_Age_Val, point); // for the pointer there is format specifier: %p

   // ----------------  POINTERS !! ------------------ //
   // int age = 50;
   // printf("%p\n", &age); // & provides the address, its same as the pointer.

   // int *ptr = &age;
   // printf("%p\n", ptr); // again same

   // printf("%p\n", &ptr); // it gives the address where the pointer is stored; (address of pointer)

   // printf("%d\n", *ptr); // it gives the value stored in the pointer; ye asal me ye hai:

   // printf("%d\n", *(&age));

   // ----------------  exercise ------------------ //

   // int *ptr;
   // int x;

   // ptr = &x;
   // *ptr = 0; // ye asal me x hi hai. !

   // printf("%d\n %d\n", x, *ptr);

   // ----------------  Pointer to pointer (**) ------------------ //

   // int x = 9;                            // var
   // int *pointerOne = &x;                 // pointing the var so *
   // int **pointing_Pointer = &pointerOne; // pointing the pointer so **
   // printf("%d \n %p \n %p \n", x, pointerOne, pointing_Pointer);

   // ------------- exercise: print i from the pointer to pointer ------------- //
   // int i = 10;
   // int *ptr = &i;
   // int **pptr = &ptr;
   // printf("%d\n", **pptr);

   // ------------- exercise: Swap ------------- //
   // int a = 10, b = 20, c;
   // c = a;
   // a = b;
   // b = c;
   // printf("%d \n, %d \n", a, b);

   // ============================  Array  ============================ //

   // int array[3] = {};

   // printf("enter physics marks");
   // scanf("%d", &array[0]);

   // printf("enter chemistry marks");
   // scanf("%d", &array[1]);

   // printf("enter english marks");
   // scanf("%d", &array[2]);

   // printf("%d", array[0]);

   // ----------------  exercise ------------------ //
   // int arr[5];
   // for (int i = 0; i < 5; i++)
   // {
   //    printf("enter the number to store in %dth place: ", i);
   //    scanf("%d", &arr[i]);
   //    printf("%d", arr[i]);
   // }

   // ----------------  exercise ------------------ //
   // int arr[6] = {1, 2, 3, 4, 5, 6};

   // int oddCount = 0;
   // for (int i = 0; i < 6; i++)
   // {
   //    if (arr[i] % 2 != 0)
   //       oddCount++;
   // }

   // printf("%d", oddCount);

   // ----------------  exercise ------------------ //
   // int arr[6] = {1, 2, 3, 4, 5, 6};
   // for (int i = 0; i < 3; i++)
   // {
   //    printf("%d %d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);

   //    int c;
   //    c = arr[i];
   //    arr[i] = arr[6 - 1 - i];
   //    arr[6 - 1 - i] = c;
   // }
   // printf("%d %d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);

   // ----------------  exercise ------------------ //
   // int n = 7;
   // int arr[n];

   // if (n >= 0)
   //    arr[0] = 0;
   // if (n >= 1)
   //    arr[1] = 1;

   // for (int i = 2; i < n; i++)
   // {
   //    arr[i] = arr[i - 1] + arr[i - 2];
   // }

   // for (int i = 0; i < n; i++)
   // {
   //    printf("%d \t", arr[i]);
   // }

   // ============================  String  ============================ //

   /*
      1. Automatically, at the end of the string there is null character : "\0"
      2. While taking string[] as input.. we dont use "&"   because "string === &string[0]"
      3. scanf can take the line; words with spaces. so we use fgets() and puts()
      4. syntax of fgets(string, size, stdin) --- puts(string)
   */

   // char string[4];
   // fgets(string, 4, stdin);
   // puts(string);

   /* pointer strings can be reinitialized but the array strings cant be */

   // char *changable = "madni sahab";

   // char unChangable[] = "madni sahab";

   // ----------------  exercise: print length of the string ------------------ //

   // char string[100];

   // printf("write the name: ");
   // fgets(string, 100, stdin);
   // int length = 0;

   // for (int i = 0; string[i] != '\0'; i++)
   //    length++;

   // printf("\n here is the length: %d", length - 1);

   // --------------- string.h library functions ------------------ //

   // 1. length of string : strlen(string)
   // printf("%lu", strlen("madniahab"));

   // 2. Replace String: strcopy(jis 'me' value dalwani hai, jis 'ki' value dalwani hai)
   // char str1[] = "str1";
   // char str2[] = "str2";
   // strcpy(str1, str2);
   // puts(str1);

   // 3. Concatenation: strcat(s1, s2)
   // ----> Issue is that the strings length must be greater to concat 2 strings... else throw an error
   // char s1[99] = "AB";
   // char s2[] = "XY";
   // strcat(s1, s2);
   // puts(s1);

   // ----------------  exercise: input string using %c ------------------ //

   // char string[99] = "";
   // printf("enter the string \n");

   // char ch;
   // for (int i = 0; ch != '\n'; i++)
   // {
   //    scanf("%c", &ch);
   //    string[i] = ch;
   // }

   // puts(string);

   // ----------------  exercise: salting ------------------ //

   // char pass[100];

   // printf("enter your pass: ");
   // scanf("%s", pass);

   // strcat(pass, "123");

   // puts(pass);

   // ----------------  exercise: slicing ------------------ //

   // char string[100] = "HelloWorld";

   // int start = 2;
   // int end = 4;

   // for (int i = start; i < end; i++)
   // {
   //    printf("%c", string[i]);
   // }
   // printf("\n");

   // ============================  Structures (objects)  ============================ //
   struct Student // we defined the blueprint here
   {
      char name[100];
      int age;
      float marks;
   };

   struct Student s1;
   s1.age = 18;
   s1.marks = 100;
   // s1.name = "Asim"; // this is throwing error because we cant change the array directly by equals. so:

   strcpy(s1.name, "Asim");

   printf("%s", s1);
   return 0;
}