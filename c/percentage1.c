// writing code for find percentage and grade
#include <stdio.h>
#include <math.h>
  int main()
  {
  float physics,chemistry,biology,maths,computer;
float per;
                  // input marks of five subjects from user
printf("enter physics marks:  ");  // physics
scanf("%f",&physics);

                          printf("enter chemistry marks:  ");    //chemistry
                          scanf("%f",&chemistry);

     printf("enter biology marks:  ");   // biology
    scanf("%f",&biology);
                          printf("enter maths marks:  ");   //maths
                          scanf("%f",&maths);

 printf("enter computer marks:  ");     //computer
 scanf("%f",&computer);


                           /* calculate percentage */
       per = (physics+chemistry+biology+maths+computer)/5.0;
       printf("prentage = %.2f\n",per);
                                          // to find grade
if(per >= 90)
{
    printf("Grade A");
}
                   else if(per >= 80)
                  {
    printf("Grade B");
                  }
         else if (per >= 70)
{
    printf("Grade c");
}
                     else if(per >= 60)
                    {
    printf("Grade D");
                     }
            else if(per >= 50)
{
    printf("Grade E");
}

 else 
{
    printf("fail");
}
return 0;
          }
