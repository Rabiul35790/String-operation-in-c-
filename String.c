/*Solve different kinds of string problem in switch case statement without using string library function*/

#include<stdio.h>
int main()
{
    int choice;
    char text[100];
    char reverse[100];
    char com1[100];
    char com2[100];
    printf("Press 1 for separate vowel and consonent from a string.\n");
    printf("Press 2 for reverse a string.\n");
    printf("Press 3 for know the length of a string.\n");
    printf("Press 4 for compare any two string to know they are equal or not.\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
        int i;
        printf("Enter any string:\n");
        scanf("%s",&text);
        printf("\n");
        printf("Vowel character are:");
        for (i=0;text[i]!='\0';i++)
        {
            if(text[i]=='A'||text[i]=='a'||text[i]=='E'||text[i]=='e'||text[i]=='I'||
               text[i]=='i'||text[i]=='O'||text[i]=='o'||text[i]=='U'||text[i]=='u')
            printf("%c",text[i]);
        }
        printf("\n");
        printf("Consonent characters are:");
        for (i=0;text[i]!='\0';i++)
        {
            if(!(text[i]=='A'||text[i]=='a'||text[i]=='E'||text[i]=='e'||text[i]=='I'||
                 text[i]=='i'||text[i]=='O'||text[i]=='o'||text[i]=='U'||text[i]=='u'))
            printf("%c",text[i]);
        }
        printf("\n");
        break;
        }
    case 2:
        {
        int i, strIndex, revIndex, len;
        printf("Enter any string:\n");
        scanf("%s",&text);
        i = 0;
        while(text[i] != '\0')
        i++;
        len = i;
        revIndex = 0;
        strIndex = len - 1;
        while(strIndex >= 0)
        {
        reverse[revIndex] = text[strIndex];
        strIndex--;
        revIndex++;
        }
        reverse[revIndex] = '\0';
        printf("Reverse string = %s", reverse);
        break;
        }
    case 3:
        {
        int i;
        printf("Enter any string:\n");
        scanf("%s",&text);
        for (i = 0; text[i] != '\0'; ++i);
        printf("Length of the string: %d", i);
        break;
        }
    case 4:
        {
        int i=0, c=0;
        printf("Enter 1st string:\n");
        scanf("%s",&com1);
        printf("Enter 2nd String:\n");
        scanf("%s",&com2);
        while((com1[i]!='\0') || (com2[i]!='\0'))
        {
        if(com1[i]!=com2[i])
        c++;
        i++;
        }

        if(c==0)
           printf("\nString are equal\n");
        else
           printf("\nString are not equal\n");
        break;
        }
    default:
        {
        printf("Invalid choice\n");
        }
    }
    return 0;
}

