#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
FILE *fptr;
fptr=fopen("test.txt","r");

char ch;
fscanf(fptr,"%c",&ch);
printf("charater = %c\n",ch);
fscanf(fptr,"%c",&ch);
printf("charater = %c\n",ch);
fscanf(fptr,"%c",&ch);
printf("charater = %c\n",ch);
fscanf(fptr,"%c",&ch);
printf("charater = %c\n",ch);
fscanf(fptr,"%c",&ch);
printf("charater = %c\n",ch);

fclose(fptr);
  return 0;

}