//Assignment-1
//Q1
/*
#include<stdio.h>
int main()
{
    printf("Hello");
    return 0;
}
    */
   //Q2
/*
#include<stdio.h>
int main()
{
    printf("Hello \nStudents");
    return 0;
}
*/
//Q3 
/*
#include<stdio.h>
int main()
{
    printf("\'MySirG\'\n");
    printf("\"MySirG\"");
    return 0;
}
*/
//Q4 & Q5
/*
#include<stdio.h>
int main()
{
    printf("\\n \n");
    printf("\\r");
    return 0;
}    
*/

//Q6
/*
#include<stdio.h>
int main()
{
    printf("\'Teacher\'s Day\'\n");
    printf("\"Teacher\'s Day\"");
    return 0;
}
*/
//Q7
/*
#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Sum of %d and %d is %d",a,b,c);
    return 0;
}
    */
//Q8
/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a*a;
    printf("Square of %d is %d\n",a,b);
    return 0;
}
    */
//Q9
/*
#include<stdio.h>
int main()
{
    int l,b,a;
    printf("Enter lenght and breadth:\n");
    scanf("%d %d",&l,&b);
    a=l*b;
    printf("Area is %d",a);
    return 0;
}*/
//Q10
/*
#include<stdio.h>
int main()
{
    float r,a;
    printf("Enter radius:\n");
    scanf("%f",&r);
    a=(22.0/7)*r*r;
    printf("Area is %f",a);
    return 0;
}
    */
//Assignment-2
//Q1
/*
#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter three numbers:\n");
    scanf("%f%f%f", &a,&b,&c);
    d=a+b+c;
    e=d/3;
    printf("Average of %f ,%f & %f is %f",a,b,c,e);
    return 0;
}
*/
//Q2
/*
#include<stdio.h>
int main()
{
    float r,c;
    printf("Enter Radius of circle:");
    scanf("%f",&r);
    c=2*(22.0/7)*r;
    printf("Circumference is %f",c);
    return 0;
}
*/
//Q3
/*
#include<stdio.h>
int main()
{
    float p,r,t,s,a;
    printf("Enter principle Amount:\n");
    scanf("%f",&p);
    printf("Enter rate of interest:\n");
    scanf("%f",&r);
    printf("Enter time period:\n");
    scanf("%f",&t);
    s=(p*r*t)/100;
    a=p+s;
    printf("Simple interest is %f and total amount after interest is %f",s,a);
    return 0;

}
*/
//Q4
/*
#include<stdio.h>
int main ()
{
    int l,b,h,v;
    printf("Enter value of lenght, breadth and height:\n");
    scanf("%d%d%d",&l,&b,&h);
    v=l*h*h;
    printf("Volume of cuboid is %d cm^3",v);
    return 0;
}
*/
//Q5
/*
#include<stdio.h>
int main()
{
    float c,s,p,profit,a;
    printf("Cost prize of banana per dozen:");
    scanf("%f",&c);
    printf("Selling price of banana per dozen:");
    scanf("%f",&s);
    profit=s-c;
    a=profit/12.0;
    p=a*25.0;
    printf("Profit or loss per dosen is %f and profit or loss for 25 bananan is %f ",profit,p);
    return 0;

}
*/
//Assignment-3
//Q1
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    printf("%d",ch);
    return 0;
}

//Q2

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a number:\n");
    scanf("%d",&ch);
    printf("%c",ch);
    return 0;
}

//Q3
#include<stdio.h>
int main()
{
    char c,ch,cha;
    printf("Enter three character:\n");
    scanf("%c  %c %c",&c,&ch,&cha);
    printf("%c %d\n%c %d\n%c %d",c,c,ch,ch,cha,cha);
    return 0;
}

//Q4 
#include<stdio.h>
int main()
{
    int x;
    printf("Enter A number:");
    scanf("%d",&x);
    printf("%d",x%10);
    return 0;
}
    
#include<stdio.h>
int main()
{
    int x;
    printf("Enter A number:");
    scanf("%d",&x);
    printf("%d",x/10);
    return 0;
}
    */
//Assignment-4
//Q1
/*
#include<stdio.h>
int main()
{
    printf("%d",sizeof('A'));
    return 0;
}
    
//Q2
#include<stdio.h>
int main()
{
    printf("%d",sizeof(34.5));
    return 0;
}
    
//Q3
#include<stdio.h>
int main()
{
    char ch='A';
    printf("%c",ch);
    ch++;
    printf("\n%c",ch);
    return 0;
}
    */
//Q4
/*
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers before swapping:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping:a=%d and b=%d",a,b);
    return 0;
}

//Q5
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Number without last digit: %d\n",a/10);
    return 0;

}

//Assignment - 4
//Q1
#include<stdio.h>
int main(){
    printf("%d",sizeof('A'));
    return 0;
}

//Q2
#include<stdio.h>
int main(){
    printf("%d",sizeof(34.5));
    return 0;
}
   
//Q3
#include<stdio.h>
int main (){
    char ch='A';
    printf("%c",ch);
    ch++;
    printf("\n%c",ch);
    return 0;
}
    
//Q4
#include<stdio.h>
int main (){
    int a,b,c;
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping : a=%d b=%d",a,b);
    return 0;

}

//Q5
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d and b=%d",a,b);
    return 0;
}

//Q6
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");//A or b not = 0
    scanf("%d %d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swapping a=%d b=%d",a,b);
    return 0;
}

//Q7
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After Swapping a =%d b=%d",a,b);
    return 0;
}

//Q8
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    a=(a+b)-(b=a);
    printf("After swapping a=%d b=%d",a,b);
    return 0;
}*/