/**
 * @file main.c
 * @author Megha Katigar
 * @brief 
 * @version 0.1
 * @date 2022-02-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "main.h"
int main()

{

	printf("\t\t=================================================\n");
	printf("\t\t              Train Ticket Reservation           \n");
    printf("\t\t=================================================\n\n\n");
    int option;
    printf("Are you a new user ?\n");
    printf("Press '1' to Register to create new account\nPress '2' to Login to the user account\n\n");
    scanf("%d",&option);

    getchar();           // catching newline.

    if(option == 1)
        {

            registration();
        }

    else if(option == 2)
        {

            login();
        }


do{
    if( val== true)
    {

    val=0;
	int menu_choice,choice_return;
	start:

	printf("\n=================================\n");
	printf("    TRAIN RESERVATION SYSTEM");
	printf("\n=================================");

	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n2>> View All Available Trains");
	printf("\n------------------------");
	printf("\n3>> Cancel Reservation");
	printf("\n------------------------");
	printf("\n4>> Exit");
	printf("\n------------------------");
	printf("\n\n-->");
	scanf("%d",&menu_choice);
	switch(menu_choice)
	{
		case 1:
			Reservation();
			break;
		case 2:
			viewdetails();
			printf("\n\nPress any key to go to Main Menu..");

			break;
		case 3:
			cancellation();

			break;
		case 4:
			return(0);
		default:
			printf("\nInvalid choice");
	}
	goto start;
	return(0);
}

else
    login();
}while((val==true)||(glob==true));
}
void viewdetails(void)
{
	system("cls");
	printf("----------------------------------------------------------------------------------------------");
	printf("\nTr.No\tName\t\t\t\tDestinations\t\t\tCharges\t\tTime\n");
	printf("----------------------------------------------------------------------------------------------");
	printf("\n15011\tHaripriya Express\t\tHubli to Tirupati\t\tRs.450\t\t9am");
	printf("\n15012\tJanshatabdi Express\t\tHubli To Bangalore\t\tRs.900\t\t12pm");
	printf("\n15013\tHubballi Jn Viyaywada\t\tHubli To vijaywada\t\tRs.800\t\t8am");
	printf("\n15014\tMiraj Hubballi Express\t\tHubli To Miraj\t\t\tRs.500\t\t11am");
	printf("\n15015\tRani Chennamma Express\t\tBangalore To Kolhapur\t\tRs.600\t\t7am");
	printf("\n15016\tIntercity Express\t\tDharwar To Bangalore\t\tRs.750\t\t9.30am");
    printf("\n15017\tGolgumbaz Express\t\tBangalore To Solapur\t\tRs.1000\t\t1pm");
    printf("\n15018\tYpr Mrj Spl\t\t\tBangalore To Miraj\t\tRs.1750\t\t4pm");
    printf("\n15019\tYeshvanrpur Biweekly Express\tVasco Da Gama To Bangalore\tRs.880\t\t3.35pm");
    printf("\n15020\tSwarna Jayanti\t\t\tMysore To Delhi\t\t\tRs.960\t\t4.15pm");

}

void Reservation(void)
{
	char confirm;
	int i=0;
	float charges;
	pd pass_details;


	printf("\nEnter Your Name:> ");
	fflush(stdin);
	scanf("%s",pass_details.name);
	printf("\nEnter Number of seats:> ");
	scanf("%d",&pass_details.num_of_seats);
	printf("\n\n>>Press Enter To View Available Trains<< ");

	viewdetails();
	printf("\n\nEnter train number:> ");
	start1:
	scanf("%d",&pass_details.train_num);
	T_No = pass_details.train_num;
	if(pass_details.train_num>=15011 && pass_details.train_num<=15020)
	{
		charges=total_amount(pass_details.train_num,pass_details.num_of_seats);
		printticket(pass_details.name,pass_details.num_of_seats,pass_details.train_num,charges);
	}
	else
	{
		printf("\nInvalid train Number! Enter again--> ");
		goto start1;
	}

	printf("\n\nConfirm Ticket (y/n):>");
	start:
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{
        Rev = true;
		printf("==================");
		printf("\n Reservation Done\n");

		printf("==================\n\n");
		printf("\nPress any key to go back to Main menu");
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
	}

}


float total_amount(int train_num,int num_of_seats)
{
		if (train_num==15011)
	{
		return(450.0*num_of_seats);
	}
	if (train_num==15012)
	{
		return(900*num_of_seats);
	}
	if (train_num==15013)
	{
		return(800.0*num_of_seats);
	}
	if (train_num==15014)
	{
		return(500.0*num_of_seats);
	}
	if (train_num==15015)
	{
		return(600.0*num_of_seats);
	}
	if (train_num==15016)
	{
		return(750.0*num_of_seats);
	}
	if (train_num==15017)
	{
		return(1000.0*num_of_seats);
	}
	if (train_num==15018)
	{
		return(1750.0*num_of_seats);
	}
	if (train_num==15019)
	{
		return(880.0*num_of_seats);
	}
	if (train_num==15020)
	{
		return(960.0*num_of_seats);
	}
}


void printticket(char name[],int num_of_seats,int train_num,float total_amount)
{

	printf("---------------------\n");
	printf("\tTICKET\n");
	printf("---------------------\n\n");
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nTrain Number:\t\t%d",train_num);
	specific_train(train_num);
	printf("\nCharges:\t\t%.2f", total_amount);
	printf("\n----HAPPY JOURNEY \\(^_^)//----");
}


void specific_train(int train_num)
{

	if (train_num==15011)
	{
		printf("\nTrain:\t\t\tHaripriya Express");
		printf("\nDestination:\t\tHubli to Tirupati");
		printf("\nDeparture:\t\t9am ");
	}
	if (train_num==15012)
	{
		printf("\nTrain:\t\t\tJanshatabdi Express");
		printf("\nDestination:\t\tHubli to Bangalore");
		printf("\nDeparture:\t\t12pm");
	}
	if (train_num==15013)
	{
		printf("\nTrain:\t\t\tHubballi Jn Vijaywada");
		printf("\nDestination:\t\tHubli to Vijaywada");
		printf("\nDeparture:\t\t8am");
	}
	if (train_num==15014)
	{
		printf("\nTrain:\t\t\tMiraj Hubballi Express");
		printf("\nDestination:\t\tHubli to Miraj");
		printf("\nDeparture:\t\t11am ");
	}
	if (train_num==15015)
	{
		printf("\nTrain:\t\t\tRani Chennamma Express");
		printf("\nDestination:\t\tBangalore to Kohlapur");
		printf("\nDeparture:\t\t7am");
	}
	if (train_num==15020)
	{
		printf("\ntrain:\t\t\tSwarna Jayanti");
		printf("\nDestination:\t\tMysore to Delhi");
		printf("\nDeparture:\t\t4:15pm ");
	}
	if (train_num==15016)
	{
		printf("\ntrain:\t\t\tIntercity Express");
		printf("\nDestination:\t\tDharwar to Bangalore");
		printf("\nDeparture:\t\t9:30pm ");
	}
	if (train_num==15017)
	{
		printf("\ntrain:\t\t\tGolgumbaz Express");
		printf("\n Destination:\t\tBangalore to solapur");
		printf("\nDeparture:\t\t1pm ");
	}
	if (train_num==15018)
	{
		printf("\ntrain:\t\t\tYpr Mrj Express");
		printf("\nDestination:\t\tBangalore to Miraj");
		printf("\nDeparture:\t\t4pm ");
	}
	if (train_num==15019)
	{
		printf("\ntrain:\t\t\tYeshvanrpur Biweekly Express");
		printf("\nDestination:\t\tVasco Da Gama to Bangalore");
		printf("\nDeparture:\t\t3.35pm ");
	}
}

void login (void)
{
    char user_name[30],pass_word[20];
    FILE *log;

    log = fopen("login_form.txt","r");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }

    struct login lg;

    printf("\n\t\t\t\t*********************LOGIN**************************\n");
    printf("\n\t\tPlease enter your login credentials below\n\n");
    printf("\t\tUsername:  ");
    scanf("%s", user_name);
    printf("\n\t\tPassword: ");
    scanf("%s",pass_word);

    while(fread(&lg,sizeof(lg),1,log))
        {
        if(strcmp(user_name,lg.username)==0 && strcmp(pass_word,lg.password)==0)

            {
                printf("\n*****Successful Login*********\n");
                val = true;
            }
        else
            {
                printf("\nIncorrect Username or Password\n");
                glob = true;
            }
        }

    fclose(log);

    return;
}

void cancellation(void)
{


	int train_no;
	pd pass_details;
	    printf("-----------------------\n");
		printf("Please enter the train number: \n");
        printf("-----------------------\n");
		fflush(stdin);
		scanf("%i",&train_no);
	if((Rev==true)&&(train_no==T_No))
    {


		printf("\n\nThe Seat Reservation is Cancelled");
		
		Rev=false;
    }
    else
        printf("\n\n**You have not reserved any seats to cancel**\n\n");
}
void registration(void)
{
    char firstname[15];
    FILE *log;

    log=fopen("login_form.txt","w");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }


    struct login lg;
    printf("\n\t\t************************************************\n");
    printf("\t\t Welcome to Train booking Reservation\n");
    printf("\t\t************************************************\n");
    printf("\nEnter First Name: ");
    scanf("%s",lg.fname);
    printf("\nEnter Surname: ");
    scanf("%s",lg.lname);
    printf("\n\n\nPlease enter your Username and password\n\n");
    printf("Note :Password should have atleast 8 character containing Upper case, lower case, numerical and Special character\n and should not exceed 30 character\n\n");
    printf("\n\tEnter Username: ");
    scanf("%s",lg.username);
    printf("\n\tEnter Password: ");
    scanf("%s",lg.password);
    fwrite(&lg,sizeof(lg),1,log);
    fclose(log);


    printf("\n\t\t\t-------------------Registration Successful!----------------------\n\n\n");

    login();
    printf("Press any key to continue...");
        getchar();

}




