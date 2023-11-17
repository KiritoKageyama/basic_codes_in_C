#include<stdio.h>
int main() {
    {
        int a[9];
        for (int i = 0; i <= 9; i++) {
            printf("element %d = ", (i + 1));
            scanf("%d", &a[i]);
            printf("\n");
        }
        for (int i = 0; i <= 9; i++) {
            printf("element %d = %d\n", i, a[i]);
        }
    }
    {
        int i;
        printf("enter the no of elements");
        scanf("%d", &i);
        int a[i];
        for (int j = 0; j <= i; j++) {
            printf("element %d = ", j);
            scanf("%d", &a[j]);
            printf("\n");
        }
        for (int j = i; j >= 0; j--) {
            printf("element %d = %d\n", j, a[j]);
        }
    }
    {
        int i;
        int d = 0;
        printf("enter the no of elements");
        scanf("%d", &i);
        int a[i];
        for (int j = 0; j <= i; j++) {
            printf("element %d = ", j);
            scanf("%d", &a[j]);
            printf("\n");
        }
        for (int j = 0; j <= i; j++) {
            d = d + a[j];
        }
        printf(" add = %d\n", d);
    }
    {
        {
            int i;
            printf("enter the no. of elements = ");
            scanf("%d", &i);
            printf("\n");
            int a[i];
            for (int j = 0; j <= i; j++) {
                printf(" %d element = ", j);
                scanf("%d", &a[j]);
                printf("\n");
            }
            printf("\n\n");
            int b[i];
            for (int j = 0; j <= i; j++) {
                printf("%d element of first array are = %d", j, a[j]);
                printf("\n");
            }
            printf("\n\n");
            for (int j = 0; j <= i; j++) {
                b[j] = a[j];
                printf("%d element of second array are = %d", j, b[j]);
                printf("\n");
            }
        }
    }
    {
        int i, ctr = 0;
        printf("enter the no. of elements = ");
        scanf("%d", &i);
        printf("\n");
        int a[i];
        for (int j = 0; j <= i; j++) {
            printf(" %d element = ", j);
            scanf("%d", &a[j]);
            printf("\n");
        }
        for (int j = 0; j <= i; j++) {
            if (a[j] == a[j + 1]) {
                ctr++;
            }
        }
        printf("Total number of duplicate elements found in the array: %d\n", ctr);
    }
    {
        {
            int i, j, k, ctr = 0;
            printf("enter the no. of elements = ");
            scanf("%d", &i);
            int a[i];
            printf("\n");
            for (j = 0; j <= i; j++) {
                printf("%d element = ", j);
                scanf("%d", &a[j]);
                printf("\n");
            }
            for (j = 0; j < i; j++) {
                for (j = 0, k = i; j < k + 1; j++) {
                    if (j != k) {
                        if (a[j] == a[k]) {
                            ctr++;
                        }
                    }
                }
                if (ctr == 0) {
                    printf("%d ", a[j]);
                }
            }
            printf("\n\n");
        }
    }
    {
        {
            int i, d;
            printf("Enter the number of elements of first array = ");
            scanf("%d", &i);
            int a[i], b[i], c[i];
            printf("\n");
            for (int j = 0; j < i; j++) {
                printf(" %d element = ", j);
                scanf("%d", &a[j]);
                printf("\n");
                c[j] = a[j];
            }
            printf("Enter the number of elements of second array = ");
            scanf("%d", &d);
            for (int j = 0; j < d; j++) {
                printf(" %d element = ", j);
                scanf("%d", &b[j]);
                printf("\n");
                c[j + i] = b[j];
            }

            int temp;
            for (int j = 0; j < i + d; j++) {
                for (int k = 0; k <= i + d - j - 1; k++) {
                    if (c[k] > c[k + 1]) {
                        temp = c[k];
                        c[k] = c[k + 1];
                        c[k + 1] = temp;
                    }
                }
            }

            printf("Sorted combined array:\n");
            for (int j = 0; j < i + d; j++) {
                printf("%d element = %d\n", j, c[j]);
            }
        }
    }
    {

        int i,d,k,j;
        printf("enter the no. of elements for first array = ");
        scanf("%d",&i);
        printf("\n");
        int a[i],b[i],c[i];
        for (j=0;j<i;j++)
        {
            printf(" %d element = ",j);
            scanf("%d",&a[j]);
            printf("\n");
            c[j]=a[j];
        }
        printf("enter the no. of elements for second array = ");
        scanf("%d",&d);
        for (j=0;j<d;j++)
        {
            printf(" %d element = ",j);
            scanf("%d",&b[j]);
            printf("\n");
            c[j+i]=b[j];
        }
        int temp;
        for (j=0;j<d+i;j++)
        {
            for (k=0;k<=i+d-j-1;k++)
            {
                if (c[k] < c[k+1])
                {
                    temp=c[k];
                    c[k]=c[k+1];
                    c[k+1]=temp;
                }
            }
        }
        printf("the elements of arrays in decreasing order are \n");
        for (j=0 ; j < i+d; j++)
        {
            printf("%d element = %d\n",j,c[j]);
        }
    }
    {

        int i,j,k,l=1;
        printf("enter the no of elements in first array = ");
        scanf("%d",&i);
        int a[i];
        for (j=0;j<i;j++)
        {
            printf(" %d element = ",j);
            scanf("%d",&a[j]);
            printf("\n");
        }
        for (j=0;j<i;j++)
        {
            if (a[j] != -1)
            {
                for (k = j + 1; k < i; k++)
                {
                    if (a[j] == a[k])
                    {
                        l++;
                        a[k] = -1;
                    }
                }
                printf("%d  occurs %d times \n",a[j],l);
            }
        }
    }
    {
        int i,j,k,l;
        printf("enter the no of elements in first array = ");
        scanf("%d",&i);
        int a[i];
        for (j=1;j<=i;j++)
        {
            printf(" %d element = ",j);
            scanf("%d",&a[j]);
            printf("\n");
        }
        k=a[1];
        l=a[1];
        for(j=1;j<=i;j++)
        {
            if(a[j]<k)
            {
                k=a[j];
            }
            if(a[j]>l)
            {
                l=a[j];
            }
        }
        printf("the largest no. is = %d\n",l);
        printf("the smallest no. is = %d\n",k);
    }
    {

    }
}
