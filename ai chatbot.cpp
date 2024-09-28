#include<stdio.h>
#include<string.h>

int main()
{
   char str[500];
   int i = 0;
   
   printf("chatbot is ready, type 'bye' for exit\n");
   
   while(i != 1000)
   {
      printf("\nYou : ");
      fgets(str, 500, stdin); 
      str[strcspn(str, "\n")] = '\0';
      if (strlen(str) == 0)
      {
         continue;  
      }

      if(strcmp(str, "hi") == 0)  
      {
         printf("chatbot : hello ji");
      } 
      else if(strcmp(str, "how are you?") == 0)  
      {
         printf("chatbot : I'm fine, you tell");
      } 
      else if(strcmp(str, "who are you?") == 0)  
      {
         printf("chatbot : I'm your personal chatbot AI");
      } 
      else if(strcmp(str, "can you speak in hindi?") == 0)  
      {
         printf("chatbot : ji haan, main hindi bhi bol sakti hu...");
      } 
      else if(strcmp(str, "What can you do?") == 0)  
      {
         printf("chatbot :For you, Everything");
      } 
      else if(strcmp(str, "where do you live?") == 0)  
      {
         printf("chatbot : I live in your phone, specially in your compiler");
      } 
      else if(strcmp(str, "tell me a joke?") == 0)  
      {
         printf("chatbot : Here's a joke for you:\nThere was a time when after 12 AM there was reign of ghosts\nBut now the phones have snatched their jobs, ha ha ha ha");
      } 
      else if(strcmp(str, "bye") == 0)  
      {
         printf("chatbot : okay, goodbye!");
         break;
      } 
      else
      {
         printf("chatbot : sorry I didn't understand");
      }
      i++;
   }  
   
   return 0;
}
