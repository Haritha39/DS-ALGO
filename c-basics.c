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

    return 0;
}