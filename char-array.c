#include <stdio.h>
#include <assert.h>
#include <string.h>

#define _macro_cat(a,b) a##b
#define macro_cat(a,b) _macro_cat(a,b)
#define RUN_FUNC() macro_cat(code, CODENB)()

void code1()
{
    /*  CODE 1  */
    printf("CODE 1:\n");
    char c1 = 'A';
    int i1 = 65;
    assert(c1 == (int)c1);
    printf("as int, c1 = %d, i1 = %d\n", (int)c1, i1);
    assert(i1 == (char)i1);
    printf("as char, c1 = %c, i1 = %c\n", c1, (char)i1);
    int diff = c1 - i1;
    printf("the difference is %d\n", diff);
}

void code2()
{
    /*  CODE 2  */
    printf("CODE 2:\n");
    char c1 = 'A' * 'A';
    int i1 = 'A' * 'A';
    printf("c1 = %c\n", c1);
    printf("i1 = %d\n", i1);
}

void code3()
{
    /*  CODE 3  */
    /* Try to input "a 97", "97 97", "a a" respectively.*/
    printf("CODE 3:\n");
    char c1;
    int i1;
    scanf("%c %d", &c1, &i1);
    printf("%c %d\n", c1, i1);
}

void code4()
{
    /*  CODE 4  */
    printf("CODE 4:\n");
    char str[500] = "string";
    int len = strlen(str);
    printf("str = %s, len = %d\n", str, len);
    strcpy(str, "I am changed");
    printf("str = %s\n", str);
    char str2[500] = "I ma changed";
    printf("compare result of str and str2 = %d\n", strcmp(str, str2));
    printf("difference between 'a' and 'm' = %d\n", 'a' - 'm');
    strcat(str, str2);
    printf("str = %s\n", str);
}

int main(int argv, char** args)
{
		RUN_FUNC();
    return 0;
}
