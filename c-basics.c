#include<stdio.h>
#include<string.h>
int main(){
    // PRINT STATEMENT
    printf("HELLO WORLD");
    printf("%s","HELLO WORLD");
    printf("%d",123);
    putchar('H');

    // POINTER STATEMENT
    int a = 10;
    int *p = &a;
    printf("\n a = %d\n", a);
    printf("\n p = %d (address of a)\n", p);
    printf("\n &a = %d\n", &a);
    printf("\n *p = %d (access a val which is 10)\n", *p);

    // SINGLE CHARACTER
    char c = 'c';
    putchar(c);
    // printf(c); // throws error - printf expects char *
    printf("\n c = %c\n",c);

    // STRING
    char s[10] = "haritha";
    printf("\ns = %s\n", s);
    char s1[] = "String initializaiton without defining length";
    printf("\ns1 = %s\n", s1);
    char s2[] = {'w','i','t','h','c','h','a','r','\0'};
    printf("\ns2 = %s\n", s2);

    // STRING OPERATIONS
    printf("\nlength of s = %d\n", strlen(s));
    printf("\nlength of s2 = %d\n", strlen(s2));
    printf("\nsizeof(includes \\0 character) s=%d\n", sizeof(s));
    char substring[10];
    strncpy(substring, s + 0, 4);
    printf("\nstrncpy substring = %s\n", substring);
    strcat(s, s2);
    printf("\nstrcat s = %s\n", s);

    // INPUT
    int input_i,input_j;
    printf("Enter number: ");
    scanf("%d", &input_i);
    printf("Enter number j : ");
    scanf("%d", &input_j);
    printf("\ninputs i = %d\tc = %d\n", input_i, input_j);
    char input_C;
    printf("Enter character: ");
    scanf("%c", &input_C); // enter key pressed for previous scanf will be taken as input for character
    printf("\ninputs (gets new line) c = %c\n", input_C); // prints new line
    printf("Enter character: ");
    scanf(" %c", &input_C);
    printf("\ninputs c = %c\n", input_C);
    char input_s[10];
    getchar(); // Hack to handle new line character
    printf("\nEnter string gets: ");
    gets(input_s); //Checks for new line
    printf("\ninputs s = %s\n", input_s);
    printf("\nEnter string fgets: ");
    fgets(input_s, 5, stdin); //Check for EOF or max len in second param
    printf("\nfgetc inputs s = %s\n", input_s);

    //ARRAYS
    int array[] = {1,2,3,4,5,6};
    printf("\n ARRAY \n");
    printf("\n size of array int(4 bytes) : %d\n", sizeof(array));
    for(int k=0; k<(sizeof(array)/ sizeof(array[0])) ; k++){
        printf("%d\t", array[k]);
    }
    /* Basically, “array” is a “pointer to the first element of array” but “&array” is a “pointer to whole array of 5 int”. 
    Since “array” is pointer to int, addition of 1 resulted in an address with increment of 4 (assuming int size in your machine is 4 bytes). 
    Since “&array” is pointer to array of 5 ints, addition of 1 resulted in an address with increment of 4 x 5 = 20 = 0x14.*/
    /*Here the pointer arithmetic does its part. We don’t need to explicitly convert each of the locations to character pointers.

    &arr ==> Pointer to an array of 6 elements. [See this for difference between &arr and arr]

    (&arr + 1) ==> Address of 6 integers ahead as pointer type is pointer to array of 6 integers.

    *(&arr + 1) ==> Same address as (&arr + 1), but type of pointer is "int *".

    *(&arr + 1) - arr ==> Since *(&arr + 1) points to the address 6 integers ahead of arr, the difference between two is 6.*/
    printf("\narray : %d\n", array); //return address of start of the array same as 0th element
    printf("\n&array : %d\n", &array); //return address of start of the array same as 0th element
    printf("\n*(&array) : %d\n", *(&array)); //return address of start of the array same as 0th element
    printf("\n&array[0]: %d\n", &array[0]); // returns zero element address
    printf("\n*(&array[0]): %d\n", *(&array[0])); // returns zero element address 
    printf("\n&array[1] : %d\n", &array[1]); // returns first element address
    printf("\n*(&array[1]): %d\n", *(&array[1])); // returns first element address
    printf("\n*array : %d\n", *array); // returns 1
    printf("\n&array + 1 : %d\n", &array + 1); // return address of end of the array 
    printf("\n&array + 2 : %d\n", &array + 2); // return address of end of the array 
    printf("\n*(&array + 1) : %d\n", *(&array + 1)); // return address of end of the array
    printf("\n*(&array[5]) : %d\n", *(&array[5])); // return 6
    printf("\n(&array[5]) : %d\n", (&array[5])); // return address of 5th element
    printf("\n(&array[6]) : %d\n", (&array[6])); // return address of end of the array i.e., arr[length]
    printf("\n(&array + 1) : %d\n", (&array + 1)); // return address of end of the array i.e., arr[length]
    printf("\n(*(&array + 1) - array) length : %d\n", (*(&array + 1) - array)); // returns length
    printf("\n(*(&array +2) - array) length : %d\n", (*(&array +2) - array)); // double of length
    printf("\n((&array + 1) - &array) : %d\n", ((&array + 1) - &array)); // returns 1
    printf("\n(*(&array + 1) - *(&array)) : %d\n", (*(&array + 1) - *(&array))); // returns length
    printf("\n((array + 1) - array) : %d\n", ((array + 1) - array)); // returns 1
    printf("\n((array + 2) - array) : %d\n", ((array + 2) - array)); // returns 2
    printf("\narray+1: %d\n", array +1);
    printf("\n*array: %d\n", *array);

    int *t = *(&array + 1); // TYPECAST INT *[6] TO INT *
    int *f = array; // INT *
    int length_of_array = t - f; // INTEGER POINTERS DIFFERNCE SO GIVES THE LENGTH
    printf("\n t : %d\n", t);
    printf("\n f : %d\n", f);
    printf("\n *t : %d\n", *t);
    printf("\n *f : %d\n", *f);
    printf("\n simple length p-f : %d\n", length_of_array);

    //ARRAY LENGTH VS CAPACITY
    int capacity_Arr[50];
    int length_of = 0;
    for(int i=0;i < 5; i++){
        capacity_Arr[i] = i*1;
        length_of++;
    }
    printf("capacity of array : %d",*(&capacity_Arr + 1 ) - capacity_Arr); //50
    printf("length of arrya : %d", length_of); // 5

    return 0;
}