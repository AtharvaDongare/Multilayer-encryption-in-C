#include<stdio.h>
#include<string.h>
char Cypher(int K, char *a,char *b)         //Declaration of the encoding function
{
    int i=0;    //Defining the function
    while(a[i]!='\0')
    {
        b[i]=a[i]+K;    //Incrementing the ASCII value of the entered element by the predefined KEY value
        i++;
    }
    printf("The Cypher generated for the entered input is \n");
}
char Decypher(int K,char *a,char *b)     //Declaration of the de-coding function
{
    int i=0;     //Defining the function
    while(a[i]!='\0')
    {
        b[i]=a[i]-K;    //Decreasing the ASCII value of the entered element by the predefined KEY value
        i++;
    }
    printf("The decoded string is \n");
}
int main ()
{   int j,temp,K;
    char a[50],b[50];
    char x[20],y[]={'p','a','s','s','w','o','r','d','\0'};  //Defining the password
    printf("Enter the password\n");
    scanf("%s",x);      // Taking the input for the password
    if(!strcmp(x,y))     // Comparing the two strings for password verification
    {
        printf("Enter the Key for the code \n");
        scanf("%d",&K);
        printf("Enter the function to be carried out:\n 1-Cypher the entered text\n 2-De-Cypher the text\n");
        scanf("%d",&j);
        printf("Enter the elements for the 'string \n");
        scanf("%s",&a);
        switch(j)      //Switch for selecting the function to be carried out
        {
            case 1:
            {   Cypher(K,a,b);   //Calling the first function
                printf("%s\n",b);
                break;
            }
            case 2:
            {
                Decypher(K,a,b);   //Calling the second function
                printf("%s\n",b);
                break;
            }
            default:    //Default case for the switch statement
            printf("Please enter a valid input\n");
        }
    }
    else 
    printf("The entered password is incorrect\n");
}