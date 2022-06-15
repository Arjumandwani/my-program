/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {printf("a is greatest of all numbers");
    }
    else if(b>a&&b>c)
    {printf("b is greatest of three numbers");
    }
    else 
    {printf("c is greatest of three numbers");
    }

    return 0;
}
