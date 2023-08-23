#include<stdio.h>
#include<string.h>
int main()
{   //all patterns

    //pattern-1
    printf("right angle triangle:");
    for (int i = 0; i <6; i++)
    {
        for (int j =0; j <i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //pattern-2
    printf("\nIn numbers\n");
    for (int i = 0; i <6; i++)
    {
        for (int j = 0; j<i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    //pattern-3
    printf("\ninverted right angle triangle\n");
    for (int i = 0; i <6; i++)
    {
        for (int j =6; j>i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    //pattern-4
     printf("\nsquare\n");
    for (int i = 0; i <4; i++)
    {
        for (int j =0; j<6; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //pattern-5
    printf("\nmirror image:");
    for (int i = 0; i <6; i++)
    {
        for (int j =0; j <i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i <6; i++)
    {
        for (int j =6; j>i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    //pattern-6
    printf("\nright triangle\n");
    int a=5;
    for(int i = 1; i <=a; i++)
    {
        for (int s = 0;s<a-i; s++)
        {
            printf(" ");   
        }
        for (int j = 0;j <i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    //pattern-7
    printf("\nmirror img  triangle\n \n");
    int b=5;
    int c=1;
    for(int i =1; i<=b; i++)
    {
        for (int j=0;j<=b-i; j++)
        {
            printf("*");
        }
        printf("\n");
        for (int k =0;k<i;k++)
        {
            printf(" ");
        }
    }

    //pattern-8
    printf("\nright triangle\n");
    int A=5;
    for(int i = 1; i <=A; i++)
    {
        for (int s = 0;s<A-i; s++)
        {
            printf(" ");   
        }
        for (int j = 0;j <i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    int B=5;
    int C=1;
    for(int i =1; i<=B; i++)
    {
        for (int j=0;j<=B-i; j++)
        {
            printf("*");
        }
        printf("\n");
        for (int k =0;k<i;k++)
        {
            printf(" ");
        }
    }
    printf("\n");

    //pattern-9
    int n=65;
    for(int i = 0; i<5; i++)
    {
        for (int s=0;s<=i; s++)
        {   char a=(char)n;
            printf("%c",a);   
        }
        n++;
        printf("\n");
    }
    printf("\n");

    //pattern-10
    int num=65;
    for(int i = 0; i<=4; i++)
    {
        for (int s=0;s<=i; s++)
        {   char a=(char)(num+s);
            printf("%c",a);   
        }
        n++;
        printf("\n");
    }

    printf("\n");

    //pattern-11
    for(int i=0;i<6;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n");


    //pattern-12
    for(int i=5;i>0;i--){
        for(int j=i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    //pattern-13
    for(int i=5;i>=0;i--){
        for(int j=i;j>0;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n");
    


    //pattern-14
	int rows = 5;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < 2 * (rows - i) - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("* ");
		}
		printf("\n");
	}
    printf("\n");

    //pattern-15
    int nums=5;
    for (int i = 0; i <nums; i++) {
        for (int j = 0; j <nums - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < nums; k++) {
            printf("* ");
        }
        printf("\n");
    }

    //pattern-16
    printf("\n");
    int row = 5;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (row - i) - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
	
    //pattern-17
	int e = 5;
	for (int i = 0; i < e; i++) {
		for (int j = 0; j < 2 * (e - i) - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("* ");
		}
		printf("\n");
	}
       int m = 5;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (m - i) - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    //pattern-18
    int roo= 5;
    int nom= 97;
    for (int i = 0; i <roo; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ",(char)nom++);
        }
        
        printf("\n");
    }
    printf("\n");


    //pattern-19
    int R = 5;
    int N = 1;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", N++);
        }
        printf("\n");
    }
    printf("\n");

    //pattern-20
    int ro= 5;
    int no= 65;
    for (int i = 0; i <ro; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ",(char)no++);
        }
        
        printf("\n");
    }
    printf("\n");









    return 0;
}


