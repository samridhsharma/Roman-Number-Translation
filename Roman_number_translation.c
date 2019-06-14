/******************************************************************************

                    ROMAN NUMBER TRANSLATION 

*******************************************************************************/

#include <stdio.h>

int main()
{
   
   char rom[30];
   int a[30], l, i,sum=0;
   printf("Enter the roman number\n");
   scanf("%s", &rom);
   l =strlen(rom);
   
   for(i = 0; i < l; i++)
   {
      switch (rom[i])
      {
     case 'I':  
            sum+=1;
         
            break;
     case 'V':  
            if(rom[i-1]=='I' ){
                sum+=3;
               
            
            }
            else{
                sum+=5;
            
                
            
            }break;
     case 'X':  
            if(rom[i-1]=='I'){
                sum+=8;
            
                
            
            }
            else{
                sum+=10;
            
                
            
            }break;
     case 'L':
            if(rom[i-1]=='X' ){
                sum+=30;
            
                
            
            }
            else{
                sum+=50;
            
              
            
            }break;
     case 'C':
            if(rom[i-1]=='X' ){
                sum+=80;
            
                
            
            }
            else{
                sum+=100;
            
                
            
            }break;
     case 'D': 
            if(rom[i-1]=='C' ){
                sum+=300;
            
               
            
            }
            else{
                sum+=500;
            
                
            
            }
            break;
     case 'M':
            if(rom[i-1]=='C' ){
                sum+=800;
            
                
            
            }
            else{
                sum+=1000;
            
                
            
            }
            break;
     default :  printf("Invalid choice");
            break;
      }
   }
   
   printf("\n%d",sum);
}

