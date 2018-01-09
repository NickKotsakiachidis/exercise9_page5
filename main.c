//
//  main.c
//  Exercise9_Page5
//
//  Created by Nikos Kotsakiachidis on 09/01/2018.
//  Copyright © 2018 Kotsas. All rights reserved.
//

#include <stdio.h>
//Να γραφεί συνάρτηση που θα δέχεται ένα πίνακα ακεραίων Α
//και το μέγεθος του k και θα επιστρέφει ένα νέο πίνακα
//με μέγεθος 3 που θα περιέχει τους 3 μεγαλύτερους αριθμούς
//του Α.
int main()
{
    int n;
    printf("Give me the size of the array\n");
    scanf("%d",&n);
    int A[n],B[3];
    int *pa = NULL;
    int * max(int A[],int n);
    
    for (int i=0;i<n;i++)
        
    {
        scanf("%d",&A[i]);
    }
    pa = max(A,n);
    
    for ( int i = 0; i < 3; i++ )
    {
        B[i]=*(pa+i);
        printf("%d\n", *(pa+i));
    }
}

int * max(int A[],int n)
{
    static int C[3];
   // int *pa=NULL;
    for (int i=0;i<(n-1);i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (A[j]<A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    C[0]=A[0];
    C[1]=A[1];
    C[2]=A[2];
    //pa=&C[0];
    //printf("%d",*pa);
    return C;
}
