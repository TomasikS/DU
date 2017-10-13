#include <stdio.h>
#include <math.h>
void  maximum(int num1, int num2, int num3) ;
int main(){  
int a,b,c;
int max;

printf(" \n  zadaj den " );
scanf("%d", &a);

printf(" \n  zadaj mesiac" );
scanf("%d", &b);


switch (b){
case 1:if (a <=20) printf ("vodnar");
else printf("kozorozec");
break;

case 2: if((a>20) && (a<=29 )) printf ("blizenci");
if (a<=20) printf ("ryby");
break;

case 3:if (a<=20) printf ("ryby");
if ((a>20) && (a<=31)) printf ("baran");
break;
case 4:if (a<=20) printf ("baran");
if  ((a>20) &&  (a<=30)) printf ("byk");
break;
case 5:if (a<=20) printf ("byk");
if  ((a>20) &&  (a<=31)) printf ("blizenci");
break;

case 6:if (a<=20) printf ("blizenci");
if  ((a>20) &&  (a<=31)) printf ("rak");
break;
case 7:if (a<=20) printf ("rak");
if  ((a>23) &&  (a<=31)) printf ("lev");
break;
case 8:if (a<=22) printf ("lev");
if  ((a>23) &&  (a<=30)) printf ("panna");
break;
case 9:if (a<=22) printf ("panna");
if  ((a>23) &&  (a<=31)) printf ("vahy");
break;
case 10:if (a<=23) printf ("vahy");
if  ((a>23) &&  (a<=30)) printf ("skorpion");
break;

 if (a<=23) printf ("skorpion");
if  ((a>23) &&  (a<=31)) printf ("strelec");
break;

case 11:if (a<=23) printf ("strelec");
if  ((a>23) &&  (a<=30)) printf ("kozorozec");
break;

case 12:if (a<=22) printf ("kozorozec");
if  ((a>23) &&  (a<=31)) printf ("vodnar");
break;


}
}
