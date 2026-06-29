#include<stdio.h>
//Q1
/*
int main(){
    int i,f,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(f=1,i=1;i<=n;i++){
        f=f*i;    
    }
    printf("Factorial:%d",f);
    return 0;
}

//Q2
int main(){
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n){
        n=n/10;
        count++;
    }
    printf("Count :%d",count);
    return 0;
}
    
//Q3
int main(){
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++){
        if(n%i==0)
        break;
    }
    if(i==n){
        printf("Prime number");

    }
    else {
        printf("Not Prime Number");
    }
    return 0;
}

//Q4
int main(){
    int a,b,L;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L++){
        if (L%a==0&&L%b==0)
        break;
    }
printf("LCM is %d",L);
return 0;
}
*/
//Q5
int main(){
     int num,y=0;
     printf("Enter a number:");
     scanf("%d",&num);
     while(num!=0){
        y=y*10+num%10;
        num=num/10;
     }
     printf("%d",y);
     return 0;
}