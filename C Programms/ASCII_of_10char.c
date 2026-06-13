#include <stdio.h>
#include <windows.h>

int main()
{
    char c;
    int i;
    
  
    for(i = 0; i < 10; i++)
    {  
        //sleep(6000);
        printf("Enter character: ");
        //sleep(50);
       // scanf_s(" %c",&c,1);
       c = _getch();
        
        printf("\nASCII value of %c is %d\n",c,c);
        Sleep(1000);
    }
    return 0;
}