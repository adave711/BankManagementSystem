#include<iostream>

#include<cstring>

#include<cstdlib>

#include<iomanip>

#include<windows.h>

//#include <ctime>

//#include <dos.h>

#include<dos.h>

#include<conio.h>

#include<cstdio>

//#define getch() _getch()


#define max 20

using namespace std;

struct employee

{

	char family_name[20];

	char given_name[20];

	long int account_number;

	float balance;

};

void backToMainMenu();
int num=0;

employee emp[max], tempemp[max], sortemp[max], sortemp1[max];

int main()

{

	system("cls");

	void build();

	void list();

	void insert();

	void deletes();

	void edit();

	void search();

	void sort();

	char option;

	void menu();

	void deposit();

	void withdraw();

	menu();

	while ((option = cin.get()) != '0')

	{

		switch (option)

		{

		case '1':

			build();

			break;

		case '2':

			list();

			break;

		case '3':

			insert();

			break;

		case '4':

			deletes();

			break;

		case '5':

			edit();

			break;

		case '6':

			search();

			break;

		case '7':

			sort();

			break;
		case '8':

			deposit();

			break;
		case '9':

			withdraw();

			break;

		}

		menu();

	}

	return 0;

}

void menu()

{

	system("cls");

	

	cout << "          ";

	cout << "\n\n\n\n\t\t-----------------------------";
	cout << "\n\t\t-----Banking System ------ ";
	cout << "\n\t\t-----------------------------\n";


	cout << endl;

	cout << "             ";

	cout << "\n\t\t Press  1 : Built The Bank User Account Table ";

	cout << "             ";

	cout << "\n\t\t Press  2 : List The User Account Table  ";

	cout << "             ";

	cout << "\n\t\t Press  3 : Insert New Client Details       ";

	cout << "             ";

	cout << "\n\t\t Press  4 : Delete A Client Account         ";

	cout << "             ";

	cout << "\n\t\t Press  5 : Edit An Account           ";

	cout << "             ";

	cout << "\n\t\t Press  6 : Search A Account          ";

	cout << "             ";

	cout << "\n\t\t Press  7 : Sort The User Accounts          ";

	cout << "             ";

	cout << "\n\t\t Press  8 : Deposit into a User Account         ";

	cout << "             ";

	cout << "\n\t\t Press  9 : Withdraw from a User Account          ";

	cout << "             ";

	cout << "\n\t\t Press  0 : Quit Program              ";

	cout << "             ";

	cout << "\n\n \t\t ** Select Your Option Please **  ";

}


void build()

{

	int no;
	system("cls");

	// highvideo();

	printf("\n Build The Table");

	cout << endl;

	//normvideo();

	cout << "Maximum number of entries  -->  20" << endl;

	cout << "How many do you want ?  --> " << endl;

	cin >> no;

	

	cout << "\n Enter The Following Items : " << endl;

	for (int i = 0; i <= no - 1; i++)

	{

		cout << "\n\n Family Name :";

		cin >> emp[num].family_name;

		cout << "\n Given Name :";

		cin >> emp[i].given_name;

		cout << "\n Account Number (Between 10000 and 10099) :";

		cin >> emp[i].account_number;

		cout << "\n Balance  ";

		cin >> emp[i].balance;


	}
	num += no;

	cout << " ** Going to main menu ** ";

	Sleep(500);

}


void  list()

{

	system("cls");

	// highvideo();

	cout << "\n\n       ********List The Table********";

	cout << endl;

	//normvideo();

	cout << "     Family Name     Given Name     Account Number     Balance    " << endl;

	cout << "    ----------------------------------------------------------    " << endl;

	for (int i = 0; i <= num - 1; i++)

	{

		cout << setw(13) << emp[i].family_name;

		cout << setw(6) << emp[i].given_name;

		cout << setw(15) << emp[i].account_number;

		cout << setw(10) << emp[i].balance;

		cout << endl;

	}

	cout << "\n Going to main menu";

	cout << "\n Wait for 5 Seconds";

	Sleep(8000);

}

void insert()

{

	system("cls");

	
	


	cout << "\n ** Insert New Record ** ";

	cout << endl;


	cout << "ln Enter The Following Items : " << endl;

	cout << "\n Family Name : ";

	cin >> emp[num].family_name;

	cout << "\n Given Name :  ";

	cin >> emp[num].given_name;

	cout << "\n Account Number :  ";

	cin >> emp[num].account_number;

	cout << "\n Balance : ";

	cin >> emp[num].balance;

	num += 1;
	cout << endl << endl;



	cout << "\n Going to Main Menu : ";

	//Sleep(500);


}



void deletes()

{

	system("cls");

	// highvideo();

	int code;

	int check;

	printf("\n\n ** Delete An Entry ** ");

	//normvideo();

	cout << endl;

	cout << "\n Enter An Account Number To Delete That Entry : ";

	cin >> code;

	int i;

	for (i = 0; i <= num - 1; i++)

	{

		if (emp[i].account_number == code)

		{

			check = i;

		}

	}

	for (i = 0; i <= num - 1; i++)

	{

		if (i == check)

		{

			continue;

		}

		else

		{

			if (i > check)

			{

				tempemp[i - 1] = emp[i];

			}

			else

			{

				tempemp[i] = emp[i];

			}

		}

	}

	num--;


	for (i = 0; i <= num - 1; i++)

	{

		emp[i] = tempemp[i];

	}

}


void edit()

{

	system("cls");

	int jobcode;

	// highvideo();

	printf(" \n\n ** Edit An Entry **  ");

	cout << endl;

	cout << endl;

	int i;

	void editmenu();

	void editfname(int);

	void editgname(int);

	void editanumber(int);

	void editbalance(int);

	char option;

	//normvideo();

	cout << "Enter An Account Number To Edit An Entry----  ";

	cin >> jobcode;

	editmenu();

	for (i = 0; i <= num - 1; i++)

	{

		if (emp[i].account_number == jobcode)

		{


			while ((option = cin.get()) != 'q')

			{

				switch (option)

				{

				case 'n':

					editfname(i);

					break;

				case 'c':

					editgname(i);

					break;

				case 'd':

					editanumber(i);

					break;

				case 'e':

					editbalance(i);

					break;

				}

				editmenu();

			}

		}

	}

}

void editmenu()

{

	system("cls");

	cout << "        What Do You Want To edit";

	cout << "          n--------->Family Name ";

	cout << "          c--------->Given Name ";

	cout << "          d--------->Account Number";

	cout << "          e--------->Balance ";

	cout << "              q----->QUIT                            ";

	cout << "   Options Please ---->>>  ";

}

void editfname(int i)

{

	cout << "Enter New Family Name----->  ";

	cin >> emp[i].family_name;

}

void editgname(int i)

{

	cout << "Enter New Given Name----->  ";

	cin >> emp[i].given_name;

}

void editanumber(int i)

{

	cout << "enter new account number----->  ";

	cin >> emp[i].account_number;

}

void editbalance(int i)

{

	cout << "Enter new balance";

	cin >> emp[i].balance;

}


void search()

{

	system("cls");

	// highvideo();

	printf("\n\nWelcome To Search Of Bank Account Database ");

	//normvideo();

	cout << endl;

	cout << endl;

	int jobcode;

	cout << "You Can Search Only By Account Number Of An Employee" << endl;

	cout << "Enter Account Number Of A User " << endl;

	cin >> jobcode;

	for (int i = 0; i <= num - 1; i++)

	{

		if (emp[i].account_number == jobcode)

		{


			cout <<   setw(7) <<  " Family Name " << setw(15)  << "  Given Name " << setw(20)  <<   " Account Number " << setw(15) << " Balance  " << endl;

			cout << "  --------------------------------------------------------------------------------------------------------------------------- " << endl;

			cout << setw(13) << emp[i].family_name;

			cout << setw(6) << emp[i].given_name;

			cout << setw(15) << emp[i].account_number;

			cout << setw(10) << emp[i].balance;

			cout << endl;

		}


	}

	cout << "going to main menu";

	//getch();
	//Sleep(5000);// it waits for 1 sec and then contiunes the program. 




}


void sort()

{

	system("cls");

	// highvideo();

	printf("Sort The Databse By Account Number");

	//normvideo();

	void sortmenu();

	void sortfname();

	void sortgname();

	void sortanumber();

	void sortbalance();

	char option;

	cout << endl;

	cout << endl;

	sortmenu();

	while ((option = cin.get()) != 'q')

	{

		switch (option)

		{

		case 'n':

			sortfname();

			break;

		case 'c':

			sortgname();

			break;

		case 'd':

			sortanumber();

			break;

		case 'e':

			sortbalance();

			break;

		}

		sortmenu();

	}

}



void sortmenu()

{

	system("cls");

	cout << "\n\n\n  Choose Option to sort By : ";

	cout << " \n n--------->Family Name ";

	cout << " \n c--------->Given Name ";

	cout << " \n d--------->Account Number ";

	cout << " \n e--------->Balance";

	cout << " \n q-----> QUIT ";

	cout << "  \n Options Please ---->>>  ";
}




void sortfname()

{

	//system("cls");

	int i, j;

	struct employee temp;
/*
	for (i = 0; i < num; i++)

	{

		sortemp1[i] = emp[i];

	}
	*/

	for (i = 0; i < num-1 ; ++i)

	{

		for (j = i+1; j < num ; ++j)

		{

			if (strcmp(emp[i].family_name, emp[j].family_name) > 0)

			{

				temp = emp[i];

				emp[i] = emp[j];

				emp[j] = temp;

			}

		}

	}


	for (i = 0; i < num ; i++)

	{


		cout << "     Family Name     Given Name     Account Number     Balance     "  << endl;

		cout << "     -----------------------------------------------------------------------  " << endl;

		for (i = 0; i < num; i++)

		{

			cout << setw(13) << emp[i].family_name;

			cout << setw(6) << emp[i].given_name;

			cout << setw(15) << emp[i].account_number;

			cout << setw(10) << emp[i].balance;

			cout << endl;
			

		}
		

		cout << "Press Any Key To Go Back";

		backToMainMenu();
		//Sleep(5000);// it waits for 5 sec and then contiunes the program. 

		//getch();
		

	}
}


void sortgname()

{

	//system("cls");

	int i, j;

	struct employee temp[max];

	for (i = 0; i <= num - 1; i++)

	{

		sortemp1[i] = emp[i];

	}

	for (i = 0; i <= num - 1; i++)

	{

		for (j = i; j <= num - 1; j++)

		{

			if (strcmp(sortemp1[i].given_name, sortemp1[j+1].given_name) <= 0)

			{

				temp[i] = sortemp1[i];

				sortemp1[i] = sortemp1[j+1];

				sortemp1[j+1] = temp[i];

			}

		}

	}


	for (i = 0; i <= num - 1; i++)

	{


		cout << "     Family Name     Given Name     Account Number     Balance     " << endl;

		cout << "     ------------------------------------------------------------------      " << endl;

		for (i = 0; i <= num - 1; i++)

		{

			cout << setw(13) << sortemp1[i].family_name;

			cout << setw(6) << sortemp1[i].given_name;

			cout << setw(15) << sortemp1[i].account_number;

			cout << setw(10) << sortemp1[i].balance;

			cout << endl;

		}

		cout << "Press Any Key To Go Back";

		//Sleep(5000);// it waits for 5 sec and then contiunes the program. 

		//getch();


	}
}

void sortanumber()

{

	system("cls");

	int i, j;

	struct employee temp[max];

	for (i = 0; i <= num - 1; i++)

	{

		sortemp1[i] = emp[i];

	}

	for (i = 0; i <= num - 1; i++)

	{

		for (j = 0; j <= num - 1; j++)

		{

			if (sortemp1[i].account_number < sortemp1[j].account_number)

			{

				temp[i] = sortemp1[i];

				sortemp1[i] = sortemp1[j];

				sortemp1[j] = temp[i];

			}

		}

	}


	for (i = 0; i <= num - 1; i++)

	{


		cout << "     Family Name     Given Name     Account Number     Balance    ";

		cout << "     ------------------------------------------------------------                                ";

		for (i = 0; i <= num - 1; i++)

		{

			cout << setw(13) << sortemp1[i].family_name;

			cout << setw(6) << sortemp1[i].given_name;

			cout << setw(15) << sortemp1[i].account_number;

			cout << setw(10) << sortemp1[i].balance;

			cout << endl;

		}

		cout << "Press Any Key To Go Back";

		//getch();
		//Sleep(5000);// it waits for 1 sec and then contiunes the program. 



	}
}


void sortbalance()

{

	system("cls");

	int i, j;

	struct employee temp[max];

	for (i = 0; i <= num - 1; i++)

	{

		sortemp1[i] = emp[i];

	}

	for (i = 0; i <= num - 1; i++)

	{

		for (j = 0; j <= num - 1; j++)

		{

			if (sortemp1[i].balance < sortemp1[j].balance)

			{

				temp[i] = sortemp1[i];

				sortemp1[i] = sortemp1[j];

				sortemp1[j] = temp[i];

			}

		}

	}


	for (i = 0; i <= num - 1; i++)

	{


		cout << "\n\n\n     Family Name     Given Name     Account Number     Balance   ";

		cout << "     ---------------------------------------------------------------------                                ";

		for (i = 0; i <= num - 1; i++)

		{

			cout << setw(13) << sortemp1[i].family_name;

			cout << setw(6) << sortemp1[i].given_name;

			cout << setw(15) << sortemp1[i].account_number;

			cout << setw(10) << sortemp1[i].balance;

			cout << endl;

		}

		cout << "Press Any Key To Go Back";

		//getch();
		Sleep(5000);// it waits for 1 sec and then contiunes the program. 



	}
}


void deposit()

{

	system("cls");

	// highvideo();

	printf("\n\nDeposit Money into Account");

	//normvideo();

	cout << endl;

	cout << endl;

	int jobcode;
	float deposit;

	cout << "\nEnter Account Number Of A User :";

	cin >> jobcode;

	cout << "\nEnter the amount to deposit :";
	cin >> deposit;

	for (int i = 0; i <= num - 1; i++)

	{

		if (emp[i].account_number == jobcode)

		{

			emp[i].balance = emp[i].balance + deposit;

		}


	}

	cout << "going to main menu";

	//getch();
	//Sleep(5000);// it waits for 1 sec and then contiunes the program. 




}



void withdraw()

{

	system("cls");

	// highvideo();

	printf("\n\nDeposit Money into Account");

	//normvideo();

	cout << endl;

	cout << endl;

	int jobcode;
	float withdraw;

	cout << "\nEnter Account Number Of A User :";

	cin >> jobcode;

	cout << "\nEnter the amount to deposit :";
	cin >> withdraw;

	for (int i = 0; i <= num - 1; i++)

	{

		if (emp[i].account_number == jobcode)

		{

			emp[i].balance = emp[i].balance - withdraw;

		}


	}

	cout << "going to main menu";

	//getch();
	//Sleep(5000);// it waits for 1 sec and then contiunes the program. 

	system("pause");


}


void backToMainMenu() {

	char choice;
	cout << " Want to back to main menu press( y ) or  ( n ) : "  ;
	cin >> choice;
	if (choice == 'y') {

		menu();
	
	}
	else
	{
		exit(0);
	}
}