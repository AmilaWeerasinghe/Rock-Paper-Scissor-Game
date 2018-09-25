#include <stdio.h>
int main(){
char x;
char y;
scanf("%c %c",&x,&y);
if((x=='R'||x=='S'||x=='C'||x=='L'||x=='P')&& (y=='R'||y=='S'||y=='C'||y=='L'||y=='P')){
  if((x=='C'&&y=='P')||(x=='P'&&y=='R')||(x=='R'&&y=='L')||(x=='L'&&y=='S')||(x=='S'&&y=='C')||(x=='C'&&y=='L')||(x=='L'&&y=='P')||(x=='P'&&y=='S')||(x=='S'&&y=='R')||(x=='R'&&y=='C')){
   printf("Player 1 wins\n");}
                              
   else if ((x=='P'&&y=='C')||(x=='R'&&y=='P')||(x=='L'&&y=='R')||(x=='S'&&y=='L')||(x=='C'&&y=='S')||(x=='L'&&y=='C')||(x=='P'&&y=='L')||(x=='S'&&y=='P')||(x=='R'&&y=='S')||(x=='C'&&y=='R')) {
   printf("Player 2 wins\n");
} 
                               
   else if ((x=='P'&&y=='P')||(y=='R'&&y=='R')||(x=='C'&&y=='C')||(x=='L'&&y=='L')||(x=='S'&&y=='S')){
   printf("Tie\n");
}
 }                                                                    
                       
else{
printf("Wrong input\n");}

    

return 0;
}
