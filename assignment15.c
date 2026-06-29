#include<stdio.h>
//Q1
/*
int main(){
    int i,n;

    for(n=2;n<100;n++)
    {
        for(i=2;i<=n-1;i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if(i==n)
        {
                printf("%d\n",n);
        }
        
    }
    return 0;
}

//Q2
int main(){
    int i,n,a,b;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);

    for(n=a;n<b;n++)
    {
        for(i=2;i<=n-1;i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if(i==n)
        {
                printf("%d\n",n);
        }
        
    }
    return 0;
}
//Q3
int main(){
    int i,n;
    printf("Enter a Numbers:");
    scanf("%d",&n);

    for(n++; ;n++)
    {
        for(i=2;i<=n-1;i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if(i==n)
        {
                printf("%d\n",n);
                break;
        }
        
    }
    return 0;
}

//Q4
int main(){
    int a,b,H;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(H=a>b?b:a;H>=1;H--){
        if(a%H==0&&b%H==0){
            break;
        }
    }
    printf("HCF is %d;",H);
    return 0;
}

//Q5
int main(){
    int a,b,H;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(H=a>b?b:a;H>=1;H--){
        if(a%H==0&&b%H==0){
            break;
        }
    }
    if(H==1){
        printf("Co-prime number");
    }
    else{
        printf("Not Co-prime Number");
    }
    return 0;
}
*/