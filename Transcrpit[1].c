#include <stdio.h>
#include <stdlib.h>

int main()
{

 printf("WELCOME TO MY TRANSCRIPT PROGRAM\n");
 printf("Insert a score for both C.A and Examination for each course\n");

 int a,b,c,d,e,f,g,h;
 int i,j,k,l,m,n,o,p;

 printf("CPE312:\t Input C.A score:");
 scanf("%d",&a);
 printf("input examination score :");
scanf("%d",&b);

printf("CPE322:\t Input C.A score:");
 scanf("%d",&c);
 printf("input examination score :");
scanf("%d",&d);

printf("CPE302:\t Input C.A score:");
 scanf("%d",&e);
 printf("input examination score :");
scanf("%d",&f);

printf("CPE342:\t Input C.A score:");
 scanf("%d",&g);
 printf("input examination score :");
scanf("%d",&h);

printf("CPE352:\t Input C.A score:");
 scanf("%d",&i);
 printf("input examination score :");
scanf("%d",&j);

printf("CPE362:\t Input C.A score:");
 scanf("%d",&k);
 printf("input examination score :");
scanf("%d",&l);

printf("CPE372:\t Input C.A score:");
 scanf("%d",&m);
 printf("input examination score :");
scanf("%d",&n);

printf("CPE382:\t Input C.A score:");
 scanf("%d",&o);
 printf("input examination score :");
scanf("%d",&p);


puts("YOUR RESULTS ARE BEING CALCULATED");

a=a+b;
if (a>=70)
{
    printf("your grade for 312 is A\t\t\t\t");
}
  else if (a>=60)
  {
      printf("your grade  for 312 is B\t\t\t\t");

  }
else if (a>=50)
{
    printf("your grade for 312 is C\t\t\t\t");

}
    else if (a<49)
      {
        printf("Failed\t\t\t\t");
      }

      c=c+d;
if (c>=70)
{
    printf("your grade for 322 is A\n\n");
}
  else if (c>=60)
  {
      printf("your grade  for 322 is B\n\n");

  }
else if (c>=50)
{
    printf("your grade for 322 is C\n\n");

}
    else if (c<49)
      {
        printf("Failed\n\n");
      }
      e=e+f;
if (e>=70)
{
    printf("your grade for 302 is A\t\t\t\t");
}
  else if (e>=60)
  {
      printf("your grade  for 302 is B\t\t\t\t");

  }
else if (e>=50)
{
    printf("your grade for 302 is C\t\t\t\t");

}
    else if (e<49)
      {
        printf("Failed\t\t\t\t");
      }
      g=g+h;
if (g>=70)
{
    printf("your grade for 342 is A\n\n");
}
  else if (g>=60)
  {
      printf("your grade  for 342 is B\n\n");

  }
else if (g>=50)
{
    printf("your grade for 342 is C\n\n");

}
    else if (g<49)
      {
        printf("Failed\n\n");
      }
    i=i+j;
if (i>=70)
{
    printf("your grade for 352 is A\t\t\t\t");
}
  else if (i>=60)
  {
      printf("your grade  for 352 is B\t\t\t\t");

  }
else if (i>=50)
{
    printf("your grade for 352 is C\t\t\t\t");

}
    else if (i<49)
      {
        printf("Failed\t\t\t\t");
      }
      k=k+l;
if (k>=70)
{
    printf("your grade for 362 is A\n\n");
}
  else if (k>=60)
  {
      printf("your grade  for 362 is B\n\n");

  }
else if (k>=50)
{
    printf("your grade for 362 is C\n\n");

}
    else if (k<49)
      {
        printf("Failed\n\n");
      }
        m=m+n;
if (m>=70)
{
    printf("your grade for 372 is A\t\t\t\t");
}
  else if (m>=60)
  {
      printf("your grade  for 372 is B\t\t\t\t");

  }
else if (m>=50)
{
    printf("your grade for 372 is C\t\t\t\t");

}
    else if (m<49)
      {
        printf("Failed\t\t\t\t");
      }
  o=o+p;
if (o>=70)
{
    printf("your grade for 382 is A");
}
  else if (o>=60)
  {
      printf("your grade  for 382 is B");

  }
else if (o>=50)
{
    printf("your grade for 382 is C");

}
    else if (o<49)
      {
        printf("Failed");
      }
    return(0);


}
