

/*Check if Vertical Zig-Zag or Not
The program must accept an integer matrix with size NxN as input. The program must print"Yes" if the given matrix is vertically zig-zag. Else
the program must print "No" as the output.
Note: The matrix must be filled with first N*N natural numbers starting from 1 in vertical zig-zag fashion.
Boundary Condition(s):
1 <= N <= 50
0 <= Matrix Elements <= 999
Input Format:
The first line contains the value of N.
The next N lines contain N integers separated by space(s).
Output Format:
The first line contains either "Yes" or "No".
Example Input/Output 1:
Input:
5
1 10 11 20 21
2 9 12 19 22
3 8 13 18 23
4 7 14 17 24
5 6 15 16 25
Output:
Yes
Example Input/Output 2:
Input:
3
1 2 3
4 5 6
7 8 9
Output:
No*/

#include<stdio.h>
#include <stdlib.h>
int main()
{   
    int a[1000][1000],n,b[1000][1000],x=1,c=0,i,j;
scanf("%d",&n); 
for(j=0;j<n;j++)   
{   
    for(i=0;i<n;i++)  
    {      
        scanf("%d",&a[i][j]);  
        } 
        }  
        for(j=0;j<n;j++) 
        {    
            for(i=0;i<n;i++)   
            {      
                if(j%2==0) 
                {      
                    b[i][j]=x; 
                    x++;   
                    }       
                   if(j%2==1) 
                    {       
                        x--; 
                        b[i][j]=x;  
                        }   
                        }   
                        x=x+n;
                        }  
                        for(i=0;i<n;i++)  
                        {   
                            for(j=0;j<n;j++) 
                            {    
                                if(a[j][i]!=b[i][j]) 
                                { 
                                    c=1; 
                                    break;   
                                    }   
                                    }  
                                    }   
                                    if(c==1) 
                                    printf("No"); 
                                    else  
                                    printf("Yes");    return 0;
}bd
