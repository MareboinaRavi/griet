#include<stdio.h>
#include<conio.h>
void main()
{
    char name[20];
    int score=0,ans;
    printf("Enter your name:");
    scanf("%s",name);
    printf("*******************************\n");
    printf("Hi %s, welcome to quiz\n",name);
    printf("*******************************\n");
    printf("\nQ1. Capital of Madhya Pradesh:");
    printf("\n1. Chennai   2. Bhopal  3. Hyderabad  4. Mumbai");
    printf("\nEnter your choice:");
    scanf("%d",&ans);
    if(ans==2)
        score+=20;
    printf("\nQ2. Capital of Kerala:");
    printf("\n1. Trivendrum   2. Bhopal  3. Hyderabad  4. Mumbai");
    printf("\nEnter your choice:");
    scanf("%d",&ans);
    if(ans==1)
        score+=20;
    printf("\nQ3. Capital of Punjab:");
    printf("\n1. Chennai   2. Bhopal  3. Chandigarh  4. Mumbai");
    printf("\nEnter your choice:");
    scanf("%d",&ans);
    if(ans==3)
        score+=20;
    printf("\nQ4. Capital of Goa:");
    printf("\n1. Chennai   2. Panaji  3. Hyderabad  4. Mumbai");
    printf("\nEnter your choice:");
    scanf("%d",&ans);
    if(ans==2)
        score+=20;
    printf("\nQ5. Capital of Meghalaya:");
    printf("\n1. Shillong   2. Bhopal  3. Hyderabad  4. Mumbai");
    printf("\nEnter your choice:");
    scanf("%d",&ans);
    if(ans==1)
        score+=20;
    if(score>=60)
        printf("\nCongratulations %s, you got %d",name,score);
    else
        printf("\nSorry %s, you got only %d. Try again",name,score);
}
