#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
   char*sentence = "jack jacken nijack wojack";
   printf("%s\n",sentence);
   char word[20];
   scanf("%s",word);
   int sentence_num = strlen(sentence);
   int word_num = strlen(word);
   bool iswordstart = false;
   char temp;
   int total = 0;
   for(int i = 0;i<sentence_num;++i){
       temp = sentence[i];
       if((temp>='A' && temp<='Z') || (temp>='a' &&temp<= 'z')){
           if(iswordstart == false){
               iswordstart = true;
               int j = 0;
               for (; j < word_num; ++j) {
                   if(word[j]!=sentence[i+j]){
                       break;
                   }
               }
               if(j == word_num){
                   if(i+j == sentence_num){
                       total++;
                   }else{
                       if(sentence[i+j]<'A' || (sentence[i+j]>'Z' && sentence[i+j]<'a') || sentence[i+j]>'z'){
                           total++;
                       }
                   }
               }
           }

       }else{
           iswordstart = false;
       }
   }
   printf("单词出现个数:%d",total);
    return 0;
}

