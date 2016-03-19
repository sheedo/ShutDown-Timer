//Author-Rasheed Andrews

#include<iostream>
#include<ctime>
using namespace std;

void ShutDown();
void Restart();
void LogOff();
void Sleep();

int main(){


	int option=0;
	

	while (option < 1 || option>4){
		cout << "\t\t********* Designed by Rasheed Andrews********" << endl << endl << endl;
		cout << "\t\t\t\tSelect an Option\n" << endl;
		cout << "\t\t\t\tEnter 1 to ShutDown\n" << endl;
		cout << "\t\t\t\tEnter 2 to Restart\n" << endl;
		cout << "\t\t\t\tEnter 3 to LogOff\n" << endl;
		cout << "\t\t\t\tEnter 4 to Sleep" << endl;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t  **Version 2.0**";
		cin >> option;
		system("cls");
		switch (option){

		case 1:ShutDown();
			break;
		case 2:Restart();
			break;
		case 3:LogOff();
			break;
		case 4:Sleep();
			break;
		default: cout << "Invalid Option";
			getchar();
			getchar();
			system("cls");
			
			break;
		}
	}
}

void ShutDown(){

	int option=0;
	std::clock_t start;
	double duration = 0.0;
	int time = 3600;

	while (option < 1 || option>2){

		cout << "Do you want to enter Time in Hours or Minutes?" << endl << endl;
		cout << "Enter 1 for Hours, or 2 for Minutes?" << endl << endl;

		cin >> option;

		system("cls");

		switch (option){
			//Hours
		case 1:

			cout << "Enter Hours :\t";
			cin >> time;

			time = time * 3600;

			start = std::clock();//Starts Clock

			while (duration < time){


				duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

				system("cls");

				cout << "\n\n\n\t\t\t\t*********************" << endl;
				cout << "\n\n\n\t\t\t\t\t*" << duration << "*" << endl;
				cout << "\n\n\n\t\t\t\t*********************" << endl;
			}

			system(" shutdown.exe -s -f ");

			break;


		case 2:

			cout << "Enter Minutes :\t";
			cin >> time;

			time = time * 60;

			start = std::clock();//Starts Clock

			while (duration < time){

				duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

				system("cls");

				cout << "\n\n\n\t\t\t\t*********************" << endl;
				cout << "\n\n\n\t\t\t\t\t*" << duration << "*" << endl;
				cout << "\n\n\n\t\t\t\t*********************" << endl;

			}

			system(" shutdown.exe -s -f ");

			break;

		default: cout << "Invalid Option";
			getchar();
			getchar();
			system("cls");

			break;
		}
	}

}
void Restart(){

	int option=0;
	std::clock_t start;
	double duration = 0.0;
	int time = 3600;

	while (option < 1 || option>2){

		cout << "Do you want to enter Time in Hours or Minutes?" << endl << endl;
		cout << "Enter 1 for Hours, or 2 for Minutes?" << endl << endl;

		cin >> option;

		system("cls");

		switch (option){
			//Hours
		case 1:

			cout << "Enter Hours :\t";
			cin >> time;

			time = time * 3600;

			start = std::clock();//Starts Clock

			while (duration < time){


				duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

				system("cls");

				cout << "\n\n\n\t\t\t\t*********************" << endl;
				cout << "\n\n\n\t\t\t\t\t*" << duration << "*" << endl;
				cout << "\n\n\n\t\t\t\t*********************" << endl;
			}

			system(" shutdown.exe -r -f ");

			break;


		case 2:

			cout << "Enter Minutes :\t";
			cin >> time;

			time = time * 60;

			start = std::clock();//Starts Clock

			while (duration < time){

				duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

				system("cls");

				cout << "\n\n\n\t\t\t\t*********************" << endl;
				cout << "\n\n\n\t\t\t\t\t*" << duration << "*" << endl;
				cout << "\n\n\n\t\t\t\t*********************" << endl;

			}

			system(" shutdown.exe -r -f ");

			break;

		default: cout << "Invalid Option";
			getchar();
			getchar();
			system("cls");

			break;

		}
	}
}

void LogOff(){

	int option=0;
	std::clock_t start;
	double duration = 0.0;
	int time = 3600;

	while (option < 1 || option>2){

	cout << "Do you want to enter Time in Hours or Minutes?" << endl << endl;
	cout << "Enter 1 for Hours, or 2 for Minutes?" << endl << endl;

	cin >> option;

	system("cls");

	switch (option){
		//Hours
	case 1:

		cout << "Enter Hours :\t";
		cin >> time;

		time = time * 3600;

		start = std::clock();//Starts Clock

		while (duration < time){


			duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

			system("cls");

			cout << "\n\n\n\t\t\t\t*********************" << endl;
			cout << "\n\n\n\t\t\t\t\t*" << duration << "*" << endl;
			cout << "\n\n\n\t\t\t\t*********************" << endl;
		}

		system(" shutdown.exe -l -f ");

		break;


	case 2:

		cout << "Enter Minutes :\t";
		cin >> time;

		time = time * 60;

		start = std::clock();//Starts Clock

		while (duration < time){

			duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

			system("cls");

			cout << "\n\n\n\t\t\t\t*********************" << endl;
			cout << "\n\n\n\t\t\t\t\t*" << duration << "*" << endl;
			cout << "\n\n\n\t\t\t\t*********************" << endl;

		}

		system(" shutdown.exe -l -f ");

		break;

	default: cout << "Invalid Option";
		getchar();
		getchar();
		system("cls");

		break;
	}
	}
}



void Sleep(){

	int option = 0;
	std::clock_t start;
	double duration = 0.0;
	int time = 3600;

	while (option < 1 || option>2){

		cout << "Do you want to enter Time in Hours or Minutes?" << endl << endl;
		cout << "Enter 1 for Hours, or 2 for Minutes?" << endl << endl;

		cin >> option;

		system("cls");

		switch (option){
			//Hours
		case 1:

			cout << "Enter Hours :\t";
			cin >> time;

			time = time * 3600;

			start = std::clock();//Starts Clock

			while (duration < time){


				duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

				system("cls");

				cout << "\n\n\n\t\t\t\t*********************" << endl;
				cout << "\n\n\n\t\t\t\t\t*" << duration << "*" << endl;
				cout << "\n\n\n\t\t\t\t*********************" << endl;
			}

			system("rundll32.exe powrprof.dll, SetSuspendState 0, 1, 0");

			break;


		case 2:

			cout << "Enter Minutes :\t";
			cin >> time;

			time = time * 60;

			start = std::clock();//Starts Clock

			while (duration < time){

				duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

				system("cls");

				cout << "\n\n\n\t\t\t\t*********************" << endl;
				cout << "\n\n\n\t\t\t\t\t*" << duration << "*" << endl;
				cout << "\n\n\n\t\t\t\t*********************" << endl;

			}

			system("rundll32.exe powrprof.dll, SetSuspendState 0, 1, 0");

			break;

		default: cout << "Invalid Option";
			getchar();
			getchar();
			system("cls");

			break;
		}
	}
}





	

