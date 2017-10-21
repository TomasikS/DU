#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

void find(int pole[N]);
 
int main () {
int pole[N];



int parne=0;
int dvacifry=0;
int tricifry=0;
int styricifry=0;

srand(time (NULL));


 

for (int o=0;o<N;o++)
pole[o]=rand()%9999+20;



for (int o=0;o<N;o++)
if (pole[o]%2==0) parne++;



printf("\n Vypis pola");

for (int o=0;o<N;o++)

printf("\n  %d", pole[o]);





printf("\n  pocet parnych cisel %d", parne);
printf("\n  pocet neparnych cisel %d", N-parne);


for (int o=0;o<N;o++)
if ((pole [o] > 9) && (pole[o]<=99)) dvacifry++;


for (int o=0;o<N;o++)
if ((pole [o] > 99) && (pole[o]<=999))tricifry++;


for (int o=0;o<N;o++)
if ((pole [o] > 999) && (pole[o]<=9999) )styricifry++;



printf("\n  pocet dvojcifernych cisel%d", dvacifry);
printf("\n   pocet trojcifernych %d", tricifry);
printf("\n  pocet stvorcifernych cisel%d", styricifry);
 
 
 
 
find(pole);

int sedem=0;

int c1, c2,c3,c4;


for (int o=0;o<=N;o++)
if (pole [o] %7==0) sedem++;
printf("\n  pocet cisel delitelnych 7 %d" ,sedem);
 
 
 pole[1]=11; 
 for (int o=0;o<N;o++){
 
if ((pole [o] > 10) && (pole[o]<=99)){
 
 c1=pole[o]%10;
 
   c2=(pole[o]%100) /10;
  


 
if (c1==c2 )printf("\n dvojciferny palindrom %d", pole[o]);

  } 
  
  
   pole[1]=121; 
  
 if ((pole [o] > 99) && (pole[o]<=999))  {
 
 c1=pole[o]%10;
 
   c3=(pole[o]%1000) /100;
  
 
  if (c1==c3 )printf("\n trojciferny palindrom %d", pole[o]);
  
     }
  
  
   
     pole[1]=1221; 
  
 
 
  if ((pole [o] > 999) && (pole[o]<=9999)){
 
 c1=pole[o]%10;
 c2=(pole[o]%100) /10;
   c3=(pole[o]%1000) /100;
   c4=(pole[o]%10000) /1000;
 

 
 
  if ((c1==c4 ) && (c2==c3))printf("\n stvorciferny palindrom %d", pole[o]);
 
 
}
 }
 
    printf("\n Pole od konca");
 
 for (int t=N-1;t>=0;t--)
 
   printf("\n %d",pole[t]);

}



void find(int a[N])

{int min,max,i,j;
min=max=a[0];
 
         for(i=0;i<N;i++) {
            for(j=i+1;j<N;j++) {
                 if(min > a[j]) {
                    min = a[j];
                 }
                  if(max < a[j]) {
                      max = a[j];
                   }
            }
        }
    printf("\nMaximum %d Minimum %d",max,min);

 

 
 

}


