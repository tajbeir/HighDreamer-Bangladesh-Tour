#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>





void traveller(){
   int press;
   printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\t\t\t\t PLEASE ENTER YOUR RIGHT INFORMATION AS A TRAVELLER\n\n\n\n");
   printf("\t\t\t\t press 1 for exit.....\n");
   scanf("%d",&press);
   system("cls");

       switch(press)
        {
            case 1:
                registration();
                break;
        }


}
void guide(){
   int press;
   printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\t\t\t\t PLEASE ENTER YOUR RIGHT INFORMATION AS A GUIDE\n\n\n\n");
   printf("\t\t\t\t press 1 for exit.....\n");
   scanf("%d",&press);
   system("cls");

       switch(press)
        {
            case 1:
                registration();
                break;
        }

}

void update(){
   int press;
   printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\t\t\t\t Update Registration \n\n\n\n");
   printf("\t\t\t\t press 1 for exit.....\n");
   scanf("%d",&press);
   system("cls");

       switch(press)
        {
            case 1:
                registration();
                break;
        }


}

void dlt(){
   int press;
   printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\t\t\t\t Delete Registration \n\n\n\n");
   printf("\t\t\t\t press 1 for exit.....\n");
   scanf("%d",&press);
   system("cls");

       switch(press)
        {
            case 1:
                registration();
                break;
        }


}

void read(){
   int press;
   printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\t\t\t\t Read Registration \n\n\n\n");
   printf("\t\t\t\t press 1 for exit.....\n");
   scanf("%d",&press);
   system("cls");

       switch(press)
        {
            case 1:
                registration();
                break;
        }


}

void registration(){
  int press;
  while(1){
   printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\n\t\t\t\t 1. REGISTRATION AS A TRAVELLER \n\n");
   printf("\t\t\t\t 2. REGISTRATION AS A GUIDE\n\n ");
   printf("\t\t\t\t 3. Update registration \n\n ");
    printf("\t\t\t\t 4. Delete registration \n\n ");
    printf("\t\t\t\t 5. Read registration \n\n ");
   printf("\t\t\t\t 6.Exit\n\n\n\n");
   printf("\t\t\t\t press any key from 1 to 3.....\n");
   scanf("%d",&press);
   system("cls");
        switch(press)
        {
            case 1:
                traveller();
                 break;
            case 2:
                guide();
                break;
            case 3:
                update();
                break;
            case 4:
                dlt();
                break;
            case 5:
                read();
             case 6:
               dashBoard();
        }
  }

}
void logIn(){
    int press;
    printf("\n\n\t\t\t\t\t\t...................\n");
    printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
    printf("\t\t\t\t\t\t:.................:\n\n\n\n");
    printf("\n\n\t\t\t\t WELCOME SIR FOR BANGLADESH TOUR\n\n");
    printf("\t\t\t\t PLEASE ENTER YOUR NAME AND PASSWORD\n\n\n\n");
    printf("\t\t\t\t press 1 for exit.....\n");
    scanf("%d",&press);
    system("cls");

       switch(press)
        {
            case 1:
                dashBoard();
                break;
        }


}
void dashBoard(){
    int press;
    while(1){
   printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\t\t\t\t 1.REGISTRATION\n\n");
   printf("\t\t\t\t 2.LOG IN\n\n\n\n");
   printf("\t\t\t\t press any key from 1 or 2.....\n");
   scanf("%d",&press);
   system("cls");
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
   printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\n\n\t\t\t\t TRAVEL IS AN INVESTMENT IN YOURSELF\n\n\n");
   printf("\t\t\t\t WELCOME TO BANGLADESH, THE LAND OF BEAUTY\n\n\n\n\n");
   printf("\t\t\t\t press 1 to continue.....\n");
   scanf("%d",&press);
   system("cls");

       switch(press)
        {
            case 1:
                dashBoard();
                break;
        }
    }
}
