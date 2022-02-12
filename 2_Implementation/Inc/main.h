
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef struct{
	char name[50];
	int train_num;
	int num_of_seats;
}pd;

struct login                           // before the first use of `l`.
{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
};



void Reservation(void);
void viewdetails(void);
void cancellation(void);
void printticket(char name[],int,int,float);
void specific_train(int);
float total_amount(int,int);
void login(void);
void registration (void);

bool val = false;
bool glob= false;
bool Rev= false;
int T_No=0;
