#include<stdio.h>
#include<stdlib.h>
int main()
{


  while(1)
  {

    char Display[1000]={};
    char input[1000]={};
    int s=0;
    char c=0;
    int count=0;
    int k=0;
    int p=0;
    printf("****************************Welcome****************************\n");
    printf("******1.Do A CAESAR Cipher encryption with a KEY***************\n");
    printf("******2.Do A CAESAR Cipher decryption with a KEY***************\n");
    printf("******3.Do A CAESAR Cipher encryption without a given KEY******\n");
    printf("******4.Exit the program***************************************\n");
    printf("******Chose the number of what you want to do******************\n");
    scanf("%d",&s);



    while(s==1)
    {

        fflush(stdin);
        printf("please enter the plaintext:");
        c=getchar();


        while(1)
        {

            if(c>=65&&c<=90)
                {input[count]=c;}
            if(c>=97&&c<=122)    //Convert lowercase letter to uppercase letter
                {
                    c=c-32;
                    input[count]=c;
                }

            count++;
            c=getchar();
            if(c == '\n') break;
        }



        printf("please enter the key:");
        scanf("%d",&k);

        for(int i=0;i<count;i++)
        {
            if(input[i]>=65&&input[i]<=90)
                {
                    Display[i]=((input[i] - 'A') + k ) % 26 + 'A';
                }

        printf("%c",Display[i]);
        }
        printf("\n");

    break;
    }


    while(s==2)
    {

        fflush(stdin);
        printf("please enter the ciphertext:");
        c=getchar();


        while(1)
        {

            if(c>=65&&c<=90)
                {input[count]=c;}
            if(c>=97&&c<=122)    //Convert lowercase letter to uppercase letter
                {
                    c=c-32;
                    input[count]=c;
                }

            count++;
            c=getchar();
            if(c == '\n') break;
        }



        printf("please enter the key:");
        scanf("%d",&k);

        for(int i=0;i<count;i++)
        {
            if(input[i]>=65&&input[i]<=90)
                {
                    p=((input[i] - 'A') -k ) ;
                    if(p<0) p+=26;
                    Display[i]='A'+p;

                }

        printf("%c",Display[i]);
        }
        printf("\n");

    break;
    }

    while(s==3)
    {

        fflush(stdin);
        printf("please enter the plaintext:");
        c=getchar();


        while(1)
        {

            if(c>=65&&c<=90)
                {input[count]=c;}
            if(c>=97&&c<=122)
                {
                    c=c-32;
                    input[count]=c;
                }

            count++;
            c=getchar();
            if(c == '\n') break;
        }



        for(k=0;k<26;k++)
        {
            printf("when the key is %d, ",k);
            printf("the ciphertext is ");
            for(int i=0;i<count;i++)
           {     if(input[i]>=65&&input[i]<=90)
                    {Display[i]=((input[i] - 'A') + k ) % 26 + 'A';}
            printf("%c",Display[i]);
           }

           printf("\n");

        }


        break;

    }




    if(s==4)
            {
                exit(0);
            }


    }

  }
