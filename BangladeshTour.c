#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX_USERS 100
#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

struct User {
    char username[MAX_USERNAME_LENGTH];
    char username1[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
};

struct User users[MAX_USERS];
int numUsers = 0;


int logIn() {
    char username[MAX_USERNAME_LENGTH];
    char username1[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    int press;
    printf("\n\n\t\t\t\t\t\t...................\n");
    printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
    printf("\t\t\t\t\t\t:.................:\n\n\n\n");
    printf("\n\n\t\t\t\t WELCOME SIR FOR BANGLADESH TOUR\n\n");
    printf("\t\t\t\t PLEASE ENTER YOUR NAME AND PASSWORD\n\n\n\n");
    FILE *log;
    log=fopen("login.txt","r");


    printf("\t\t\t\t Enter First name: ");
    scanf("%s", username);
    printf("\t\t\t\t Enter Last name: ");
    scanf("%s", username1);
    printf("\t\t\t\t Enter password: ");
    scanf("%s", password);


    for (int i = 0; i < numUsers; i++) {
        if (strcmp(username, users[i].username) == 0 && strcmp(username1, users[i].username1) == 0 && strcmp(password, users[i].password) == 0) {
            printf("\n\n\t\t\t\t Log In successful.\n");
            fclose(log);
            system("cls");
            return 1;
        }
    }

    system("cls");
     printf("\n\n\t\t\t\t Invalid username or password. Please Try Again\n");
     fclose(log);
    logIn();
    return 0;
}



void traveller(){
   printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\t\t\t\t PLEASE ENTER YOUR RIGHT INFORMATION AS A TRAVELLER\n\n\n\n");
    long long int ID;
    char country;
    long long int mb;
    int press;
    FILE *file;
    if (numUsers == MAX_USERS) {
        printf("Maximum number of users reached.\n");
        return;
    }

    struct User newUser;
    file=fopen("traveller.txt","a");
      if(file==NULL)
      {
         printf("\n\n\t\t\t\tFile does not exist");
       }
     else{

    printf("\t\t\t\t First name: ");
    scanf("%s", newUser.username);
    printf("\t\t\t\t Last name: ");
    scanf("%s", newUser.username1);
    printf("\t\t\t\t Enter Country: ");
    scanf("%s", &country);
    printf("\t\t\t\t Enter Passport Number: ");
    scanf("%lld", &ID);
    printf("\t\t\t\t Enter mobile number: ");
    scanf("%lld", &mb);
    printf("\t\t\t\t Enter password: ");
    scanf("%s", newUser.password);

    users[numUsers] = newUser;
    numUsers++;
   }
    printf("\t\t\t\t press 1 for Log In.....\n");
    scanf("%d",&press);
    system("cls");

       switch(press)
        {
            case 1:
                 printf("\n\n\t\t\t\t Registration successful. Now Log In\n");
                 logIn();
                break;
            default:
                printf("\n\n\t\t\t\t Invalid choice. Please try again.\n");
                break;
        }


}
void guide(){
   printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\t\t\t\t PLEASE ENTER YOUR RIGHT INFORMATION AS A GUIDE\n\n\n\n");
    long long int ID;
    char district;
    long long int mb;
    int press;
    FILE *file;
    if (numUsers == MAX_USERS) {
        printf("Maximum number of users reached.\n");
        return;
    }

    struct User newUser;
    file=fopen("traveller.txt","a");
      if(file==NULL)
      {
         printf("File does not exist");
       }
     else{

    printf("\t\t\t\t First name: ");
    scanf("%s", newUser.username);
    printf("\t\t\t\t Last name: ");
    scanf("%s", newUser.username1);
    printf("\t\t\t\t Enter District: ");
    scanf("%s", &district);
    printf("\t\t\t\t Enter National ID \n\t\t\t\t Or Birth Certificate Number: ");
    scanf("%lld", &ID);
    printf("\t\t\t\t Enter mobile number: ");
    scanf("%lld", &mb);
    printf("\t\t\t\t Enter password: ");
    scanf("%s", newUser.password);

    users[numUsers] = newUser;
    numUsers++;
   }
   printf("\n\n\t\t\t\t Registration successful. Now Log In\n\n");
    printf("\t\t\t\t press 1 for Log In.....\n");
    scanf("%d",&press);
    system("cls");

       switch(press)
        {
            case 1:
                 logIn();
                break;
            default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
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
   printf("\t\t\t\t 3.Exit\n\n\n\n");
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
               dashBoard();
             default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
                break;
        }
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
            default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
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
            default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
                break;
        }
    }
}
