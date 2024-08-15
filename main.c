#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("                 Welcome to Bob's eyes password System ^__^");
    int password;
    int fakeInput;

    printf("\n\nPlease type your passwod..");
    scanf("%d", &password);

    if (password <= 2005 && password >= 2005)
    {
        printf("\n                 The password is correct :) ");
        printf("\n                 Hello dear accquaintance :) ");

    }
    else
    {
        printf("\n                 The password is WRONG -- ");
        printf("\n                 You still have two attempts");

        printf("\nTry again..");
        scanf("%d", &password);


       if (password <= 2005 && password >= 2005)
       {
        printf("\n                 The password is correct :) ");
        printf("\n                 Hello dear accquaintance :) ");

       }
       else
       {
            printf("\n                 The password is WRONG -- ");
            printf("\n                 You still have one attempt");

            printf("Try again..");
            scanf("%d", &password);


           if (password <= 2005 && password >= 2005)
             {
               printf("\n                 The password is correct :) ");
               printf("\n                 Hello dear accquaintance :) ");

             }
            else
            {
              printf("\n                 The password is WRONG -- ");
              printf("\n                The password is WRONG -- ");
            }
       }
    }
scanf("%d", &fakeInput);
return 0;
}
