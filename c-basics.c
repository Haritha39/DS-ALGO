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
    int input_i;
    char input_c;
    printf("Enter number: ");
    scanf("%d", &input_i);
    printf("Enter character: ");
    scanf("%c", &input_c);
    printf("\ninputs i = %d\tc = %c\n", input_i, input_c);

    return 0;
}