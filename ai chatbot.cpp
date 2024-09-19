#include <stdio.h>
#include<string.h>

int main()
{
   char str[500];
   int i=0;
   
   printf("chatbot is ready, type 'bye' for exit\n use '.' instead of white space");
   while(i!=1000)
   {
  
  printf("\nYou : ");
  scanf("%s",&str);
  
  if(strcmp(str,"hi")==0)  
   {
       printf("chatbot :hello ji");
       
   } 
   else if(strcmp(str,"how.are.you")==0)  
   {
       printf("chatbot :I'm fine, you tell");
       
   } 
    else if(strcmp(str,"who.are.you")==0)  
   {
       printf("chatbot :I'm your personal chatbot AI");
       
   } 
    else if(strcmp(str,"can.you.speak.in.hindi")==0)  
   {
printf("chatbot :ji haan, main hindi bhi bol sakti hu...");
       
   } 
    else if(strcmp(str,"tum.kya.kr.sakte.ho")==0)  
   {
       printf("chatbot :aapke liye sab kuch ");
       
   } 
       else if(strcmp(str,"where.do.you.live")==0)  
   {
       printf("chatbot :I lived in your phone, specially in your compliler");
       
   } 
       else if(strcmp(str,"")==0)  
   {
       printf("chatbot :aapke liye sab kuch ");
       
   } 
        else if(strcmp(str,"tell.me.a.joke")==0)  
   {
       printf("chatbot :?? ??????? ?????? ??:\n?? ??? ?? ?? ??? ?? 12 ??? ?? ??? ????? ?? ??? ???? ???\n????? ?????? ?? ?? ???? ??????? ?? ??? ???? ???");
       
   } 
      
    
    
    
    
    
    
    
    
    
    
    
    
    
    else if(strcmp(str,"bye")==0)  
   {
       printf(" okay");
       break;
   } 
   else
   {
       printf("chatbot :sorry i didn't understand ");
   }
    
    
    
    
    
    i++;
   }  
    return 0;
}
