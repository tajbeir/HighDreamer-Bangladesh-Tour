#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX_USERS 100
#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20
#define MAX_ADDRESS_LENGTH 20
#define MAX_ID_LENGTH 20
#define MAX_MOBILE_LENGTH 20

struct User {
    char username[MAX_USERNAME_LENGTH];
    char username1[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    char id[MAX_ID_LENGTH];
    char mobile[MAX_MOBILE_LENGTH];
};
struct User users[MAX_USERS];
int numUsers = 0;


void display(){
    struct User newUser;
   FILE *file;
   file=fopen("toursts.txt","a");

   if (file  == NULL){
       printf("Error! opening file");


       exit(1);
   }

    fscanf(file,"\n NAME: %s ", &newUser.username);
    fscanf(file," %s\n", &newUser.username1);
    fscanf(file," COUNTRY : %s\n", &newUser.address);
    fscanf(file," PASSPORT  NUMBER: %s\n", &newUser.id);
    fscanf(file," MOBILE NUMBER: %s\n", &newUser.mobile);
    fscanf(file," PASSWORD: %s\n", &newUser.password);

    fprintf(file,"\n NAME: %s ", newUser.username);
    fprintf(file," %s\n", newUser.username1);
    fprintf(file," COUNTRY : %s\n", newUser.address);
    fprintf(file," PASSPORT  NUMBER: %s\n", newUser.id);
    fprintf(file," MOBILE NUMBER: %s\n", newUser.mobile);
    fprintf(file," PASSWORD: %s\n", newUser.password);


    printf("\n\t\t\t\t NAME: %s ", newUser.username);
    printf(" %s\n", newUser.username1);
    printf(" \t\t\t\tCOUNTRY : %s\n", newUser.address);
    printf(" \t\t\t\tPASSPORT  NUMBER: %s\n", newUser.id);
    printf(" \t\t\t\tMOBILE NUMBER: %s\n\n\n\n", newUser.mobile);
    printf(" \t\t\t\tPASSWORD: %s\n", newUser.password);
    fclose(file);

    int press;
     printf("\t\t\t\t press 1 for exit.....\n");
    scanf("%d",&press);
    system("cls");
        switch(press)
        {
            case 1:
                profile();
                 break;
            default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
                break;
        }

};


 void historical(){
     system("color 2f");
      int press;
    printf("\n\n\t\t\t\t\t\t...................\n");
    printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
    printf("\t\t\t\t\t\t:.................:\n\n\n\n");
    printf("\n\n\t\t\t\t WELCOME SIR FOR BANGLADESH TOUR\n");
    printf("\t\t\t\t ________________________________\n\n\n");
    printf("\t\t\t\t press any key from 1 to 3.....\n");
    scanf("%d",&press);
    system("cls");
        switch(press)
        {
            case 1:
                display();
                 break;
            case 2:
                information();
                break;
             case 3:
               information();
               break;
             default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
                break;
        }

 }
 void popular(){
     system("color 6f");
      int press;
    printf("\n\n\t\t\t\t\t\t...................\n");
    printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
    printf("\t\t\t\t\t\t:.................:\n\n\n\n");
    printf("\n\n\t\t\t\t WELCOME SIR FOR BANGLADESH TOUR\n");
    printf("\t\t\t\t ________________________________\n\n\n");
    printf("\t\t\t\t 3.Exit\n\n\n\n");
    printf("\t\t\t\t press any key from 1 to 3.....\n");
    scanf("%d",&press);
    system("cls");
        switch(press)
        {
            case 1:
                display();
                 break;
            case 2:
                information();
                break;
             case 3:
               information();
               break;
             default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
                break;
        }

 }
 void district(){
     system("color 5f");
      int press;
    printf("\n\n\t\t\t\t\t\t...................\n");
    printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
    printf("\t\t\t\t\t\t:.................:\n\n\n\n");
    printf("\n\n\t\t\t\t WELCOME SIR FOR BANGLADESH TOUR\n");
    printf("\t\t\t\t ________________________________\n\n\n");
    printf("\t\t\t\t 3.Exit\n\n\n\n");
    printf("\t\t\t\t press any key from 1 to 3.....\n");
    scanf("%d",&press);
    system("cls");
        switch(press)
        {
            case 1:
                display();
                 break;
            case 2:
                information();
                break;
             case 3:
               information();
               break;
             default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
                break;
        }

 }
 void sea(){
     system("color 9f");
      int press;
    printf("\n\n\t\t\t\t\t\t...................\n");
    printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
    printf("\t\t\t\t\t\t:.................:\n\n\n\n");
    printf("\n\n\t\t\t\t WELCOME SIR FOR BANGLADESH TOUR\n");
    printf("\t\t\t\t ________________________________\n\n\n");
     printf("\t\t\t\t 3.Exit\n\n\n\n");
    printf("\t\t\t\t press any key from 1 to 3.....\n");
    scanf("%d",&press);
    system("cls");
        switch(press)
        {
            case 1:
                display();
                 break;
            case 2:
                information();
                break;
             case 3:
               information();
               break;
             default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
                break;
        }

 }
 void hill(){
     system("color 4f");
      int press;
    printf("\n\n\t\t\t\t\t\t...................\n");
    printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
    printf("\t\t\t\t\t\t:.................:\n\n\n\n");
    printf("\n\n\t\t\t\t WELCOME SIR FOR BANGLADESH TOUR\n");
    printf("\t\t\t\t ________________________________\n\n\n");
     printf("\t\t\t\t 3.Exit\n\n\n\n");
    printf("\t\t\t\t press any key from 1 to 3.....\n");
    scanf("%d",&press);
    system("cls");
        switch(press)
        {
            case 1:
                display();
                 break;
            case 2:
                information();
                break;
             case 3:
               information();
               break;
             default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
                break;
        }

 }
 void forest(){
     system("color 2f");
      int press;
    printf("\n\n\t\t\t\t\t\t...................\n");
    printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
    printf("\t\t\t\t\t\t:.................:\n\n\n\n");
    printf("\n\n\t\t\t\t WELCOME SIR FOR BANGLADESH TOUR\n");
    printf("\t\t\t\t ________________________________\n\n\n");
     printf("\t\t\t\t 3.Exit\n\n\n\n");
    printf("\t\t\t\t press any key from 1 to 3.....\n");
    scanf("%d",&press);
    system("cls");
        switch(press)
        {
            case 1:
                display();
                 break;
            case 2:
                information();
                break;
             case 3:
               information();
               break;
             default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
                break;
        }

 }

 void information(){
     system("color 1f");
       int press;
    printf("\n\n\t\t\t\t\t\t...................\n");
    printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
    printf("\t\t\t\t\t\t:.................:\n\n\n\n");
    printf("\n\n\t\t\t\t WELCOME SIR FOR BANGLADESH TOUR\n");
    printf("\t\t\t\t ________________________________\n\n\n");
    printf("\t\t\t\t 1. HISTORICAL PLACE IN BANGLADESH\n\n");
    printf("\t\t\t\t 2. POPULAR TOURIST CENTER\n\n ");
    printf("\t\t\t\t 3. DIISTRICT WISE TOURIST CENTER\n\n ");
    printf("\t\t\t\t 4. SEA TOURIST CENTER\n\n ");
    printf("\t\t\t\t 5. HILL TOURIST CENTER\n\n ");
    printf("\t\t\t\t 6. FOREST TOURIST CENTER\n\n ");
    printf("\t\t\t\t 7. Exit\n\n\n\n");
    printf("\t\t\t\t press any key from 1 to 7.....\n");
    scanf("%d",&press);
    system("cls");
        switch(press)
        {
            case 1:
                historical();
                 break;
            case 2:
                popular();
                break;
            case 3:
               district();
               break;
            case 4:
                sea();
                 break;
            case 5:
                hill();
                break;
            case 6:
                forest();
             case 7:
               profile();
               break;
             default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
                break;
        }
  }
void profile(){
    int press;
    system("color 1f");
    printf("\n\n\t\t\t\t\t\t...................\n");
    printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
    printf("\t\t\t\t\t\t:.................:\n\n\n\n");
    printf("\n\n\t\t\t\t WELCOME SIR FOR BANGLADESH TOUR\n");
    printf("\t\t\t\t ________________________________\n\n\n");
    printf("\n\t\t\t\t 1. YOUR PROFILE \n\n");
    printf("\t\t\t\t 2. INFORMATION ABOUT TOURIST CENTER\n\n ");
    printf("\t\t\t\t 3.Exit\n\n\n\n");
    printf("\t\t\t\t press any key from 1 to 3.....\n");
    scanf("%d",&press);
    system("cls");
        switch(press)
        {
            case 1:
                display();
                 break;
            case 2:
                information();
                break;
             case 3:
               logIn();
               break;
             default:
                printf("\t\t\t\t Invalid choice. Please try again.\n");
                break;
        }
  }



int logIn() {
    system("color 6f");
    char username[MAX_USERNAME_LENGTH];
    char username1[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    int press;
    printf("\n\n\t\t\t\t\t\t...................\n");
    printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
    printf("\t\t\t\t\t\t:.................:\n\n\n\n");
    printf("\n\n\t\t\t\t WELCOME SIR FOR BANGLADESH TOUR\n");
    printf("\t\t\t\t ________________________________\n\n\n");
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

            fclose(log);
            system("cls");
            printf("\n\n\t\t\t\t Log In successful.\n");
            profile();
            return 1;
        }
    }

    system("cls");
    fclose(log);
     printf("\n\n\t\t\t\t Invalid username or password. Please Try Again.\n");

    logIn();
    return 0;
}



void traveller(){
    system("color 5f");
  printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\t\t\t\t PLEASE ENTER YOUR RIGHT INFORMATION AS A TRAVELLER\n\n\n\n");

    int press;
    FILE *file;
    if (numUsers == MAX_USERS) {
        printf("Maximum number of users reached.\n");
        return;
    }

    struct User newUser;
    file=fopen("toursts.txt","a");
      if(file==NULL)
      {
         printf("\n\n\t\t\t\tFile does not exist");
       }


    printf("\t\t\t\t First name: ");
    scanf("%s", newUser.username);
    printf("\t\t\t\t Last name: ");
    scanf("%s", newUser.username1);
    printf("\t\t\t\t Enter Country: ");
    scanf("%s", newUser.address);
    printf("\t\t\t\t Enter Passport Number: ");
    scanf("%s",  newUser.id);
    printf("\t\t\t\t Enter mobile number: ");
    scanf("%s",  newUser.mobile);
    printf("\t\t\t\t Enter password: ");
    scanf("%s", newUser.password);


    fprintf(file,"\n NAME: %s ", newUser.username);
    fprintf(file," %s\n", newUser.username1);
    fprintf(file," COUNTRY : %s\n", newUser.address);
    fprintf(file," PASSPORT  NUMBER: %s\n", newUser.id);
    fprintf(file," MOBILE NUMBER: %s\n", newUser.mobile);
    fprintf(file," PASSWORD: %s\n", newUser.password);

    users[numUsers] = newUser;
    numUsers++;
    fclose(file);

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
    system("color 5f");
   printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\t\t\t\t PLEASE ENTER YOUR RIGHT INFORMATION AS A GUIDE\n\n\n\n");

    int press;
    FILE *file;
    if (numUsers == MAX_USERS) {
        printf("Maximum number of users reached.\n");
        return;
    }

    struct User newUser;
    file=fopen("guide.txt","a");
      if(file==NULL)
      {
         printf("File does not exist");
       }


    printf("\t\t\t\t First name: ");
    scanf("%s", newUser.username);
    printf("\t\t\t\t Last name: ");
    scanf("%s", newUser.username1);
    printf("\t\t\t\t Enter District: ");
    scanf("%s", newUser.address);
    printf("\t\t\t\t Enter National ID \n\t\t\t\t Or Birth Certificate Number: ");
    scanf("%s",  newUser.id);
    printf("\t\t\t\t Enter mobile number: ");
    scanf("%s",  newUser.mobile);
    printf("\t\t\t\t Enter password: ");
    scanf("%s", newUser.password);



    fprintf(file,"\n NAME: %s ", newUser.username);
    fprintf(file," %s\n", newUser.username1);
    fprintf(file,"  DISTRICT: %s\n", newUser.address);
    fprintf(file," NID OR BIRTH CERTIFICATE NUMBER: %s\n", newUser.id);
    fprintf(file," MOBILE NUMBER: %s\n", newUser.mobile);

     users[numUsers] = newUser;
    numUsers++;
    fclose(file);


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
    system("color 4f");
  int press;
  while(1){
   printf("\n\n\t\t\t\t\t\t...................\n");
   printf("\t\t\t\t\t\t: BANGLADESH TOUR :\n");
   printf("\t\t\t\t\t\t:.................:\n\n\n\n");
   printf("\n\t\t\t\t 1. REGISTRATION AS A TRAVELLER \n\n");
   printf("\t\t\t\t 2. REGISTRATION AS A GUIDE\n\n ");
   printf("\t\t\t\t 3.EXIT\n\n\n\n");
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
    system("color 3f");
    int press;
    while(1){
   printf("\n\n\t\t\t\t\t\t.......................\n");
   printf("\t\t\t\t\t\t:   BANGLADESH TOUR   :\n");
   printf("\t\t\t\t\t\t:.....................:\n\n\n\n");
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
 system("color 2f");
 printf("\n\n");
    printf("\t\t    B B B          A         N      N       G G G     L                  A         D D D       E E E E E     S S S S S    H       H    \n");
    printf("\t\t    B     B       A A        N N    N     G           L                 A A        D     D     E            S             H       H    \n");
    printf("\t\t    B     B      A   A       N  N   N   G             L                A   A       D      D    E            S             H       H    \n");
    printf("\t\t    B B B       A     A      N   N  N   G    G G G    L               A     A      D      D    E E E E        S S S S     H H H H H    \n");
    printf("\t\t    B     B    A A A A A     N    N N   G    G   G    L              A A A A A     D      D    E                      S   H       H    \n");
    printf("\t\t    B     B   A         A    N     NN     G      G    L             A         A    D     D     E                      S   H       H    \n");
    printf("\t\t    B B B    A           A   N      N       G G G     L L L L L L  A           A   D D D       E E E E E    S S S S S     H       H    \n");



    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t  T T T T T T T     O O O      U         U    R R R R R  \n");
    printf("\t\t\t\t\t\t\t        T          O      O    U         U    R        R \n");
    printf("\t\t\t\t\t\t\t        T         O        O   U         U    R        R \n");
    printf("\t\t\t\t\t\t\t        T         O        O   U         U    R R R R R \n");
    printf("\t\t\t\t\t\t\t        T         O        O   U         U    R  R      \n");
    printf("\t\t\t\t\t\t\t        T          O      O     U       U     R    R    \n");
    printf("\t\t\t\t\t\t\t        T           O O O         U U U       R      R R  \n");

    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t WELCOME TO BANGLADESH, THE LAND OF BEAUTY\n");
    printf("\n\t\t\t\t\t\t***********************************************************************");

    printf("\n\n\n\n\t\t\t\t\t\t TRAVEL IS AN INVESTMENT IN YOURSELF\n\n\n");
    printf("\t\t\t\t\t\tPress Enter to proceed...!!");

    if(getch()==13)
        system("CLS");
    dashBoard();
    //system("CLS");
     //dashBoard();

}
