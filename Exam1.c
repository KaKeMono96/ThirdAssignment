#include<stdio.h>
int multi(int a,int b);
int divi(int x,int y);
int pos(int xx,int yy);

int main(){

    int id=0;
    int age=0;
    int test=0;
    int money=0;
    int number=0;
    int number1=0;
    int number2=0;

    printf("###Welcome to our lottery Game###\n");
    printf("Please enter your id:");
    scanf("%d",&id);
    if(id==333){
        printf("You can play game\n");
           printf("Please enter age:");
        scanf("%d",&age);
    }else{
        printf("You cannot play game\n");

    }
    while(age>17){
        printf("Enter your money");
        scanf("%d",&money);
        printf("Enter your lottery Number");
        scanf("%d",&number);
    switch(number){
        case 111:
            printf("number is %d\n",number);
            money=money*5;
            printf("Get your money%d\n",money);
        break;

        case 234:
            printf("number is %d\n",number);
            money=money*10;
            printf("Get your money%d\n",money);
        break;

        case 321:
            printf("number is %d\n",number);
            money=money*15;
            printf("Get your money%d\n",money);
        break;
    default:
        printf("Try again\n");
    }
    printf("Press 1 to play again!");
    scanf("%d",&test);
    if(test!=1)
        printf("Do you wanna some calculation\n");
        printf("Please enter a number:");
    scanf("%d",&number1);
    printf("Please enter second number:");
    scanf("%d",&number2);
    {
    printf("   Into *result=%d\n",multi(number1,number2));
    printf("  Division / result=%d\n",divi(number1,number2));
    printf(" positive + value=%d\n",pos(number1,number2));
    }
   // break;
    }
return 0;
}
int multi(int a,int b){

    return a*b;

}
int divi(int x,int y){
    return x/y;

}
int pos(int xx,int yy){
    return xx+yy;

}

