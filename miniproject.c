#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct Vehicle {
    char type[10];
};
int nor = 0, noc = 0, nob = 0, amount = 0, count = 0;
struct Vehicle vehicles[100];
void login(), bus(), cycle(), car(), clear1(), clear2(), clear3(), clear4(), showdata(), clrscr();
int Menu();
int main() {
login();
	while (1) {
        system("cls");
        switch (Menu()) {
            case 1:
                car();
                break;
            case 2:
                cycle();
                break;
            case 3:
                bus();
                break;
            case 4:
                showdata();
                break;
            case 5:
                clear1();
                break;
            case 6:
                clear2();
                break;
            case 7:
                clear3();
                break;
            case 8:
                clear4();
                break;
            case 9:
                exit(0);
            default:
                printf("\nInvalid number");
        }
        getch();
    }
		return 0;
}
void login() {
    char username[15];
    char password[10];
    printf("\t\t\t\t\t\xdb\xdb\xdb\xdb  Login Yourself  \xdb\xdb\xdb\xdb\n");
    printf("Enter your username:");
    scanf("%s", &username);
    printf("Enter your password:");
    scanf("%s", &password);
    if (strcmp(username, "user") == 0) {
        if (strcmp(password, "pass") == 0) {
            printf("\n\t\xdb\xdb Welcome! Login successful.. \xdb\xdb\n");
            printf("\n \t\t\t\t\tPress any key to continue....");
        } else {
            printf("\n Wrong password\n");
        }
    }
    getch();
}
int Menu() {
    int ch;
    printf("\t\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb                                 \t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb    ==============================\t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb\tPARKING MANAGEMENT SYSTEM\t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb    ==============================\t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb                                 \t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb\t    AXIX MALL PARKING           \xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb                                 \t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb  Contact us => 9661485891,7488841134\t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\xdb\xdb  Vehicle Parking  \xdb\xdb\n");
	printf("1.Enter car: \n");
	printf("2.Enter Cycle: \n");
	printf("3.Enter Bus: \n");
	printf("4.Show Status: \n");
	printf("5.delete Cars \n");
	printf("6.Delete Cycles: \n");
	printf("7.Delete Bus\n");
	printf("8.Delete Data: \n");
	printf("9.Exit:\n");
	printf("\xdb Enter your choice:");
	scanf("%d",&ch);
    return (ch);
}
void clear1() {
	printf("\n\t\xdb Car deleted successfully...");
    nor -=1;
	count -= 1;}
void clear2() {
	printf("\n\t\xdb Cycle deleted successfully...");
	 printf("\n\t\t\t\tpress any key to continue...");
    noc -= 1;
	count -= 1;}
void clear3() {
	printf("\n\t\xdb Bus deleted successfully...");
	 printf("\n\t\t\t\tpress any key to continue...");
    nob -= 1;
	count -= 1;}
void clear4() {
	printf("\n\t\xdb Data deleted successfully...");
	printf("\n\t\t\t\tpress any key to continue...");
	nor = 0;
    noc = 0;
    nob = 0;
    amount = 0;
    count = 0;
}
void showdata() {
	system("cls");
	printf("\t\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb                                 \t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb    ==============================\t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb\tPARKING MANAGEMENT SYSTEM\t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb    ==============================\t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb                                 \t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb\t    AXIX MALL PARKING           \xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb                                 \t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb  Contact us => 9661485891,7488841134\t\xdb\xdb\n");
	printf("\t\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\n\n\t\t\t\t\t\t\xdb\xdb Parked Vehicles  \xdb\xdb\n");
    printf("\n\t\t\t\t\t\tnumber of car: %d", nor);
    printf("\n\t\t\t\t\t\tnumber of cycle: %d", noc);
    printf("\n\t\t\t\t\t\tnumber of bus: %d", nob);
    printf("\n\t\t\t\t\t\tTotal no. of vehicles: %d", count);
    printf("\n\t\t\t\t\t\tTotal amount: %d", amount);
    printf("\n\n\n\t\t\t\t\t\t------ THANK YOU ------ ");
}
void car() {
    printf("\n\t\xdb car entred successful...\n");
    printf("\n\t\t\t\tpress any key to continue...");
    strcpy(vehicles[count].type, "Car");
    nor++;
    amount += 50;
    count++;
}
void cycle() {
    printf("\n\t\xdb Cycle entred successful...\n");
     printf("\n\t\t\t\tpress any key to continue...");
    strcpy(vehicles[count].type, "Cycle");
    noc++;
    amount += 20;
    count++;
}
void bus() {
    printf("\n\t\xdb Bus entred successful...\n");
     printf("\n\t\t\t\tpress any key to continue...");
    strcpy(vehicles[count].type, "Bus");
    nob++;
    amount += 100;
    count++;
}

