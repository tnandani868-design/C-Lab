#include<stdio.h>

int main()
{
    char letter;

    printf("Enter character");
    scanf("%c",&letter);

    switch(letter)
    {
        case 'a':
             
         case 'e':
             
         case 'i':
           
          case 'o':
             
         case 'u':
             
               printf("\n %c is vowel",letter);                          
               break;

        default:
              if(letter >='a' && letter <='z')
              {
                printf("\n %c is a consonant",letter);
              }
              else
              {
                printf("\n %c is neither consonat nor vowel", letter);
              }

    }
    return 0;

}

/*case'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':

  if(letter>='A' && letter <='Z')
  || if(letter >='a' && letter <='z')
    */ 