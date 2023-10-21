#include <stdio.h>
#include <conio.h>

// FUNCTION PROTOTYPE
int test1(int, int, int);
int test2(int *, int *, int *);

// FUNCTION CALLING
void main()
{

    int n1, n2, n3;
    printf("Enter any three numbers respectively:");
    scanf("%d %d %d", &n1, &n2, &n3);

    /*Call by value method*/
    int result = test1(n1, n2, n3);
    printf("The largest number among all is %d\n", result);

    /*Call by reference method*/
    int result2 = test2(&n1, &n2, &n3);
    printf("THE LARGEST NUMBER AMONG ALL IS %d\n", result2);
}

// FUNCTION DEFINITION

int test1(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 > n3)
    {
        return n1;
    } /*THIS PART OF FUNCTION IS OF "CALL BY VALUE METHOD"*/

    else if (n2 > n3 && n2 > n1)
    {
        return n2;
    }

    else
    {
        return n3;
    }
}

// FUNCTION DEFINITION

int test2(int *n1, int *n2, int *n3)
{
    if (*n1 > *n2 && *n1 > *n3)
    {
        return *n1;
    } /*THIS PART OF FUNCTION IS OF "CALL BY REFERENCE METHOD"*/

    else if (*n2 > *n3 && *n2 > *n1)
    {
        return *n2;
    }

    else
    {
        return *n3;
    }
}
