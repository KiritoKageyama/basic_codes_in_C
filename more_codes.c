#include<stdio.h>
#include "math.h"
#include<conio.h>
#include<string.h>
int main()
{
    {
        // The equality program \\n
        int equle;
        int num;
        printf("enter the no. =","\n");
        scanf("%d",&equle);
        printf("enter the second no. =","\n");
        scanf("%d",&num);
        if(equle==num)
            printf("the no. are equle\n");
        else
            printf("the no. are not equle\n");
    }
    {
        // The even and odd program \\n
        int n;
        printf("enter the no. =","\n");
        scanf("%d",&n);
        if(n%2==0)
            printf("the no. is even\n");
        else
            printf("the no. is odd\n");
    }
    {
        // The positive and negative program \\n
        int num;
        printf("enter the no.=","\n");
        scanf("%d",&num);
        if(num>0)
            printf("the no. is positive\n");
        else if(num<0)
            printf("the no. is negative\n");
        else
            printf("the no. is zero");
    }
    {
        // The largest no. program \\n
        int num;
        printf("enter the no. = ","\n");
        scanf("%d",&num);
        if(num%4==0)
            printf("%d is a leap year\n",num);
        else
            printf("%d is not a leap year\n",num);
    }
    {
        // The voting program \\n
        int num;
        printf("enter the age = ","\n");
        scanf("%d",&num);
        if(num>=18)
            printf("you are eligible for voting\n");
        else
            printf("you are not eligible for voting\n");
    }
    {
        // The +ve,-ve program \\n
        int m;
        printf("enter the no.=","\n");
        scanf("%d",&m);
        if (m>=0)
            printf("n = 1","\n");
        else if (m==0)
            printf("n = 0","\n");
        else
            printf("n = -1","\n");
    }
    {
        // The heif=ght program \\n
        int a;
        printf("enter the height in Cm =","\n");
        scanf("%d",&a);
        if(a<=150)
            printf("the person is dwarf\n");
        else if(a>150&&a<=165)
            printf("the person is average height\n");
        else if(a>165&&a<=195)
            printf("the person is tall\n");
        else
            printf("the person is abnormal height\n");
    }
    {
        // The greatest no. program \\n
        int a,b,c;
        printf("enter the number 1 =\n,enter the number 2 =\n,enter the number 3 =\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&a>c)
            printf("the greatest no. is %d\n",a);
        else if(b>a&&b>c)
            printf("the greatest no. is %d\n",b);
        else
            printf("the greatest no. is %d\n",c);
    }
    {
        // The coordinate program \\n
        int a,b;
        printf("enter the x cordinate =\n");
        scanf("%d",&a);
        printf("enter the y cordinate =\n");
        scanf("%d",&b);
        if(a>0&&b>0)
            printf("the cordinate lies in the first quadrant\n");
        else if(a<0&&b>0)
            printf("the cordinate lies in the second quadrant\n");
        else if(a<0&&b<0)
            printf("the cordinate lies in the third quadrant\n");
        else if(a>0&&b<0)
            printf("the cordinate lies in the fourth quadrant\n");
        else if(a==0&&b==0)
            printf("the cordinate lies in the origin\n");
        else if(a==0&&b!=0)
            printf("the cordinate lies in the y axis\n");
        else
            printf("the cordinate lies in the x axis\n");
    }
    {
        // The marks program \\n
        int a,b,c;
        printf("enter the marks of subject maths =\n");
        scanf("%d",&a);
        printf("enter the marks of subject physics =\n");
        scanf("%d",&b);
        printf("enter the marks of subject chemistry =\n");
        scanf("%d",&c);
        if(a>=65&&b>=55&&c>=50)
        {
            if((a+b+c)>=180||(a+b)>=140)
                printf("the candidate is eligible for admission\n");
            else
                printf("the candidate is not eligible for admission\n");
        }
        else
            printf("the candidate is not eligible for admission\n");
    }
    {
        // The square program \\n
        double x;
        int root;
        printf("enter the no. =\n");
        scanf("%lf",&x);
        root=sqrt(x);
        if(root*root==x)
            printf("%.2lf perfect square =%d\n",x,root);
        else
            printf("%.2lf no. is not perfect square =%d\n");
    }
    {
        // The candidate program \\n
        int rollno,name,maths,physics,chemistry,total;
        float average;
        printf("enter the roll no. =\n");
        scanf("%d",&rollno);
        printf("enter the name =\n");
        scanf("%d",&name);
        printf("enter the marks of maths =\n");
        scanf("%d",&maths);
        printf("enter the marks of physics =\n");
        scanf("%d",&physics);
        printf("enter the marks of chemistry =\n");
        scanf("%d",&chemistry);
        total=maths+physics+chemistry;
        average=total/3;
        if(average>=40&&maths>=40&&physics>=40&&chemistry>=40)
            printf("the student is pass\n");
        else
            printf("the student is fail\n");
    }
    {
        {
            //the candidate program 2 \\n
            int rollno,maths,physics,chemistry,total;
            float average;
            char name[20];
            printf("enter the roll no. =","\n");
            scanf("%d",&rollno);
            printf("enter the name =","\n");
            scanf("%s", name);
            printf("enter the marks of maths =""\n");
            scanf("%d",&maths);
            printf("enter the marks of physics =""\n");
            scanf("%d",&physics);
            printf("enter the marks of chemistry =""\n");
            scanf("%d",&chemistry);
            total=maths+physics+chemistry;
            average=total/3;
            if(average>=40&&maths>=40&&physics>=40&&chemistry>=40)
                printf("the student is pass\n rollno =%d\n name= %s\n marks in maths =%d\n marks in physics =%d\n marks in chemistry =%d\n total=%d\n percentage=%f\n average=%f",rollno,name,maths,physics,chemistry,total,average);
            else
                printf("the student is fail\n rollno =%d\n name= %s\n marks in maths =%d\n marks in physics =%d\n marks in chemistry =%d\n total=%d\n percentage=%f\n average=%f",rollno,name,maths,physics,chemistry,total,average);
        }

    }
    {
        // The temperature program \\n
        int temperature;
        printf("enter the temperature in celsius =\n");
        scanf("%d",&temperature);
        if(temperature<0)
            printf("freezing weather\n");
        else if(temperature>=0&&temperature<=10)
            printf("very cold weather\n");
        else if(temperature>=10&&temperature<=20)
            printf("cold weather\n");
        else if(temperature>=20&&temperature<=30)
            printf("normal in temperature\n");
        else if(temperature>=30&&temperature<=40)
            printf("its hot\n");
        else
            printf("its very hot\n");
    }
    {
        // The triangle program \\n
        int a,b,c;
        printf("enter the first side of triangle =\n");
        scanf("%d",&a);
        printf("enter the second side of triangle =\n");
        scanf("%d",&b);
        printf("enter the third side of triangle =\n");
        scanf("%d",&c);
        if(a==b&&b==c)
            printf("the triangle is equilateral\n");
        else if(a==b||b==c||c==a)
            printf("the triangle is isosceles\n");
        else
            printf("the triangle is scalene\n");
    }
    {
        // The triangle program 2 \\n
        int a,b,c;
        printf("enter the first angle of triangle =\n");
        scanf("%d",&a);
        printf("enter the second angle of triangle =\n");
        scanf("%d",&b);
        printf("enter the third angle of triangle =\n");
        scanf("%d",&c);
        if(a+b+c==180)
            printf("the triangle is valid\n");
        else
            printf("the triangle is not valid\n");
    }
    {
        // The character program  \\n
        int a;
        printf("write the character =\n");
        scanf("%d",&a);
        if(a>=65&&a<=90)
            printf("the character is uppercase\n");
        else if(a>=97&&a<=122)
            printf("the character is lowercase\n");
        else if(a>=48&&a<=57)
            printf("the character is digit\n");
        else if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
            printf("the character is special symbol\n");
    }
    {
        // The character program 2(vowels) \\n
        {
            char alphabet;
            printf("Enter a character: ");
            scanf("%c", &alphabet);
            if(alphabet==97||alphabet==101||alphabet==105||alphabet==111||alphabet==117||alphabet==65||alphabet==69||alphabet==73||alphabet==79||alphabet==85)
            {
                printf("%c is a vowel.", alphabet);
            }
            else
            {
                printf("%c is a consonant.", alphabet);
            }
        }
    }
    {
        {
            // The Profit loss  program\\n
            int num;
            int number;
            int total;
            printf("enter the money given =","\n");
            scanf("%d",&num);
            printf("enter the money taken =","\n");
            scanf("%d",&number);
            total=num-number;
            if(num<number)
                printf("you have booked a loss of %d",total);
            else
                printf("you have booked a profit of %d",total);
        }
    }
    {
        {
            // The electricity bill program \\n
            int Idno;
            char name[40];
            int Units;
            int supercharge;
            int total;
            int charge;
            printf("Input the Idno. =");
            scanf("%d",&Idno);
            printf("Input your name =");
            scanf("%s",name);
            printf("Input the number of units =");
            scanf("%d",&Units);
            printf("The Idno of the payer = %d\nThe Name of the amount payer = %s\nNo. of Units Used = %d\n",Idno,name,Units);
            charge =2*Units;
            if(charge>=400)
            {
                int a;
                a=charge*15;
                supercharge=a/100;
                total=charge+supercharge;
                printf("the supercharge =%d\n",supercharge);
                printf("the amount to be paid =%d\n",total);
            }
            else
            {
                printf("the amount to be paid =%d\n",charge);
            }
        }

    }
    {
        // THE Daynumber program \\n
        int DayNumber;
        printf("Enter the Daynumber =");
        scanf("%d",&DayNumber);
        {
            if (DayNumber == 1)
                printf("The Day is Monday\n");
            else if (DayNumber == 2)
                printf("The Day is Tuesday\n");
            else if (DayNumber == 3)
                printf("The Day is Wednesday\n");
            else if (DayNumber == 4)
                printf("The Day is Thursday\n");
            else if (DayNumber == 5)
                printf("The Day is Friday\n");
            else if (DayNumber == 6)
                printf("The Day is Saturday\n");
            else if (DayNumber == 7)
                printf("The Day is Sunday\n");
            else
                printf("Are you an idiot\n");
        }
    }
    {


        {
            // The number program 2 \\n
            int no;
            char *firstno[] = {"zero", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen","seventeen", "eighteen", "nineteen"};
            char *secondno[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty"};
            char *thirdno[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            printf("enter a number:");
            scanf("%d", &no);
            if (no < 0 || no > 99)
                printf("enter number is not a two digit number\n");
            else if (no == 0)
                printf("the enter no is:%s\n", firstno[no]);
            else if (no >= 10 && no <= 19)
                printf("the enter no is:%s\n", firstno[no - 10 + 1]);
            else if (no >= 20 && no <= 90)
                if (no % 10 == 0)
                    printf("the enter no is:%s\n", secondno[no / 10 - 2]);
                else
                    printf("the enter no is:%s %s\n", secondno[no / 10 - 2], thirdno[no % 10 - 1]);
        }

    }
    {

        {
            // The monthnumber program  \\n
            int monthnum;
            printf("enter the month no. =","\n");
            scanf("%d",&monthnum);
            if(monthnum==1)
                printf("january");
            else if(monthnum==2)
                printf("february");
            else if(monthnum==3)
                printf("march");
            else if(monthnum==4)
                printf("april");
            else if(monthnum==5)
                printf("may");
            else if(monthnum==6)
                printf("june");
            else if(monthnum==7)
                printf("july");
            else if(monthnum==8)
                printf("august");
            else if(monthnum==9)
                printf("september");
            else if(monthnum==10)
                printf("october");
            else if(monthnum==11)
                printf("november");
            else if(monthnum==12)
                printf("december");
            else
                printf("invalid input");
        }
    }
    {
        // The shape calculator program  \\n
        int shape;
        printf("enter the shape NAME =","\n");
        while(1) {
            printf("Menu.\n1.squre\n2.rectangle\n3.circle\n4.triangle\n5.exit\n");
            scanf("%d", &shape);
            if (shape == 1) {
                int side;
                printf("enter the side =", "\n");
                scanf("%d", &side);
                printf("the area of squre is %d\n", side * side);
            } else if (shape == 2) {
                int length, breadth;
                printf("enter the length =", "\n");
                scanf("%d", &length);
                printf("enter the breadth =", "\n");
                scanf("%d", &breadth);
                printf("the area of rectangle is %d\n", length * breadth);
            } else if (shape == 3) {
                int radius;
                printf("enter the radius =", "\n");
                scanf("%d", &radius);
                printf("the area of circle is %f\n", 3.14 * radius * radius);
            } else if (shape == 4) {
                int base, height;
                printf("enter the base =", "\n");
                scanf("%d", &base);
                printf("enter the height =", "\n");
                scanf("%d", &height);
                printf("the area of triangle is %f\n", 0.5 * base * height);
            } else if (shape == 5) {
                break;
            } else {
                printf("invalid input\n");
            }
        }
    }
    {
        // The calculator program  \\n
        int calc;
        printf("enter the no. =","\n");
        while(1)
        {
            printf("the no. is %d",calc);
            scanf("%d",&calc);
            if(calc==1)
            {
                int num;
                printf("enter the no. =","\n");
                scanf("%d",&num);
                int i;
                printf("enter the second number =","\n");
                scanf("5d",&i);
                int add ;
                add = num + i;
                printf("the sum is %d",add);
            }
            else if(calc==2)
            {
                int num;
                printf("enter the no. =","\n");
                scanf("%d",&num);
                int i;
                printf("enter the second number =","\n");
                scanf("5d",&i);
                int sub ;
                sub = num - i;
                printf("the sub is %d",sub);
            }
            else if(calc==3)
            {
                int num;
                printf("enter the no. =","\n");
                scanf("%d",&num);
                int i;
                printf("enter the second number =","\n");
                scanf("5d",&i);
                int mul ;
                mul = num * i;
                printf("the mul is %d",mul);
            }
            else if(calc==4)
            {
                int num;
                printf("enter the no. =","\n");
                scanf("%d",&num);
                int i;
                printf("enter the second number =","\n");
                scanf("5d",&i);
                int div ;
                div = num / i;
                printf("the div is %d",div);
            }
            else if(calc==5)
            {
                int num;
                printf("enter the no. =","\n");
                scanf("%d",&num);
                int i;
                printf("enter the second number =","\n");
                scanf("5d",&i);
                int mod ;
                mod = num % i;
                printf("the mod is %d",mod);
            }
            else if(calc==6)
            {
                int num;
                printf("enter the no. =","\n");
                scanf("%d",&num);
                int i;
                printf("enter the second number =","\n");
                scanf("5d",&i);
                int pow ;
                pow = num ^ i;
                printf("the pow is %d",pow);
            }
            else if(calc==7)
            {
                int num;
                printf("enter the no. =","\n");
                scanf("%d",&num);
                int sq ;
                sq = num * num;
                printf("the sq is %d",sq);
            }
            else if(calc==8)
            {
                break;
            }
            else
            {
                printf("invalid input\n");
            }
        }
    }

}

