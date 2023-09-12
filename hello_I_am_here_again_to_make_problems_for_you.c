#include<stdio.h>
#include<math.h>
int main() {
    {
        {
            int num;
            printf("enter the no. =", "\n");
            scanf("%d", &num);

            for (int i = 1; i <= num; i++)
                printf("%d\n", i);
            {
                int a;
                int c = 0;
                printf("enter the no. = ", "\n");
                scanf("%d", &a);
                for (int b = 1; b <= a; b++) {
                    c = c + b;
                    printf("%d\n", c);
                }
            }
        }
    }

    {
        int d;
        int g = 0;
        printf("enter the no. = ", "\n");
        scanf("%d", &d);
        for (int f = 1; f <= d; f++)
            printf("%d\n", f);
        printf("the sum of the no. is = ", "\n");
        for (int h = 1; h <= d; h++) {
            g = g + h;
            printf("%d\n", g);
        }
    }
    {
        int e;
        int j = 0;
        float avg;
        printf("please enter the no.", "\n");
        for (int k = 1; k <= 10; k++) {
            printf("number %d = ", k);
            scanf("%d", &e);
            j = j + e;
        }
        avg = (float) j / 10.0;

        printf("\nThe Sum of 10 Numbers     = %d", j);
        printf("\nThe Average of 10 Numbers = %.2f\n", avg);
    }
    {
        int l;
        printf("enter the no. = ", "\n");
        scanf("%d", &l);
        {
            int m = l * l * l;
            printf("the cube of the no. is =%d\n", m);
        }

    }
    {
        int o;
        printf("enter the no. = ", "\n");
        scanf("%d", &o);
        for (int p = 1; p <= 10; p++) {
            int q = o * p;
            printf("%d X %d = %d\n", o, p, q);
        }
    }
    {
        int r;
        printf("enter the no. = ", "\n");
        scanf("%d", &r);
        for (int s = 1; s <= r; s++) {
            for (int t = 1; t <= 10; t++) {
                int u = s * t;
                printf("%d X %d = %d\n", s, t, u);
            }
        }
    }

    {
        int v;
        int y = 0;
        printf("enter the no. = ", "\n");
        scanf("%d", &v);
        for (int w = 1; w <= v; w++)
            if (w % 2 != 0) {
                printf("odd no. = %d\n", w);
                y = y + w;
            }
        printf("the sum of the odd = %d\n", y);
    }

    {
        int z, aa, bb;
        printf("enter no. of rows =");
        scanf("%d", &bb);
        for (aa = 1; aa <= bb; aa++) {
            for (z = 1; z <= aa; z++) {
                printf("*", z);
                printf(" ");
            }
            printf("\n");
        }
    }

    {
        int z, aa, bb;
        printf("enter no. of rows =");
        scanf("%d", &bb);
        for (aa = 1; aa <= bb; aa++) {
            for (z = 1; z <= aa; z++) {
                printf("%d", z);
                printf(" ");
            }
            printf("\n");
        }
    }
    {
        int cc, dd, ee;
        printf("enter no. of rows =");
        scanf("%d", &ee);
        for (dd = 1; dd <= ee; dd++) {
            for (cc = 1; cc <= dd; cc++) {
                printf("%d", dd);
                printf("  ");
            }

            printf("\n");
        }
    }

    {
        int z, aa, bb, k = 1;
        printf("enter no. of rows =");
        scanf("%d", &bb);
        for (aa = 1; aa <= bb; aa++) {
            for (z = 1; z <= aa; z++) {
                printf("%d", k++);
                printf(" ");
            }
            printf("\n");
        }
    }
    {
        int i, space, rows, k = 0;
        printf("Enter the number of rows:");
        scanf("%d", &rows);
        for (i = 1; i <= rows; ++i, k = 0) {
            for (space = 1; space <= rows - i; ++space) {
                printf("  ");
            }
            while (k != 2 * i - 1) {
                printf(" *");
                ++k;
            }
            printf("\n");
        }
    }
    {
        int i, space, rows, k;
        printf("Enter the number of rows:");
        scanf("%d", &rows);
        for (i = 1; i <= rows; i++) {
            for (space = 1; space <= rows - i; space++) {
                printf(" ");
            }
            for (k = 1; k <= i; k++) {
                printf("%d ", k);
            }
            printf("\n");
        }
    }
    {
        int rrr;
        int fact = 1;
        printf("enter the no. = ", "\n");
        scanf("%d",&rrr);
        if (rrr == 0)
            printf("%d is gives an error", rrr);
        for (int i = 1; i <= rrr; i++) {
            fact = fact * i;
        }
        printf("%d\n", fact,"\n");
    }
    {
        int v;
        int y = 0;
        printf("enter the no. = ", "\n");
        scanf("%d", &v);
        for (int w = 1; w <= v; w++)
            if (w % 2 == 0)
            {
                printf("even no. = %d\n", w);
                y = y + w;
            }
        printf("the sum of the even no. = %d\n", y);
    }
    {
        {
            int i, space, rows, k;
            printf("Enter the number of rows:");
            scanf("%d", &rows);
            for (i = 1; i <= rows; i++) {
                for (space = 1; space <= rows - i; space++) {
                    printf(" ");
                }
                for (k = 1; k <= i; k++) {
                    printf("%d ", i);
                }
                printf("\n");
            }
        }
    }
    {
        {
            float x,sum,t,d;
            int i,n;
            printf("Input the Value of x :");
            scanf("%f",&x);
            printf("Input the number of terms : ");
            scanf("%d",&n);
            sum =1; t = 1;
            for (i=1;i<n;i++)
            {
                d = (2*i)*(2*i-1);
                t = -t*x*x/d;
                sum =sum+ t;
            }
            printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",sum,n,x);
        }

    }
    {
        {
            int i;
            int s=0;
            printf("enter the no. = ","\n");
            scanf("%d",&i);
            float sum = 0.0;
            for(int n=1;n<=i;n++)
            {
                s = s + 1;
                sum = sum + (1.0/s);
            }
            printf("%f\n",sum);
        }
    }
    {
        {
            int i, space, rows, k = 0;
            printf("Enter the number of rows:");
            scanf("%d", &rows);
            for (i = 1; i <= rows; ++i, k = 0) {
                for (space = 1; space <= rows - i; ++space) {
                    printf("  ");
                }
                while (k != 2 * i - 1) {
                    printf("* ");
                    ++k;
                }
                printf("\n");
            }
        }
    }
    {
        {
            int num;
            int i;
            int b;
            printf("enter the no. of terms =", "\n");
            scanf("%d", &num);
            for (i = 0; i <= num; i++) {
                b = 9 * pow(10, i) + b;
                printf(" %d\n", b);
            }

        }

    }
    {
        int num,p,q;
        int i;
        printf("enter the no. =","\n");
        scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
            if(i%2==0)
            { p=1;q=0;}
            else
            { p=0;q=1;}
            for(int c=1;c<=i;c++)
            {
                if(c%2==0)
                    printf("%d",p);
                else
                    printf("%d",q);
            }
            printf("\n");
        }
    }
    {
        float x,sum,t,d,r,o;
        int i,n;
        printf("Input the Value of x :");
        scanf("%f",&x);
        printf("Input the number of terms : ");
        scanf("%d",&n);
        sum =x; t =1;r=x;
        for (i=1;i<n;i++)
        {
            t = t*(-1);
            d = i*2+1;
            o = t*pow(r,d);
            sum =sum + o;
        }
        printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",sum,n,x);
    }
}
int hellow()
{
    printf( "end of practice file 1");
}
