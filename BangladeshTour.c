#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void traveller(){


}
void guide(){


}

void registration(){
    int press;
  while(1){
    printf("\n\n\t\t\t......BANGLADESH TOUR......\n\n\n");
    printf("\n\t 1. REGISTRATION AS A TRAVELLER \n");
    printf("\t 2. REGISTRATION AS A GUIDE\n ");
    printf("\t 3.Exit\n\n");
    printf("   press any key from 1 to 3..............\n");
  scanf("%d",&press);
        switch(press)
        {
            case 1:
                traveller();
                 break;
            case 2:
                guide();
                break;
             case 3:
                printf("\n\tExiting Program.");
               dashBoard();
        }
  }

}
void logIn(){
     printf("\n\n\t\t\t WELCOME SIR FOR BANGLADESH TOUR\n");
     printf("\t\t\tPLEASE ENTER YOUR NAME AND PASSWORD\n");


}
void dashBoard(){
    int press;
    while(1){
   printf("\n\n\t\t\t......BANGLADESH TOUR......\n\n\n");
   printf("\t 1.REGISTRATION\n");
   printf("\t 2.LOG IN\n");
   printf("   press any key from 1 or 2..............\n");
  scanf("%d",&press);
        switch(press)
        {
            case 1:
                registration();
                 break;
            case 2:
                logIn();
                break;

        }
    }

}

int main(){

 int press;
 while(1)
    {
  printf("\n\n\t\t\t TRAVEL IS AN INVESTMENT IN YOURSELF\n\n\n");
  printf("\t\t\t WELCOME TO BANGLADESH, THE LAND OF BEAUTY\n\n\n\n");

  printf("   press 1 to continue..............\n");
  scanf("%d",&press);
        switch(press)
        {
            case 1:
                dashBoard();
                break;
        }
    }



}

