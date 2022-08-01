#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include"Gym.h"
#include"Restaurant.h"
#include"Date.h"
#include"Time.h"
using namespace std;

class Resort: public Gym, public RoomManagement, public Restaurant
{
public:

// void Login();
// void SignUp();

//******************************************** A D M I N   U S E   F U N C T I O N S ********************************************//
void AdminUse()
{
int x,r;
long long c;
system("cls");
    system("Color E2");
cout <<"\t\t\t\t\t\t *** Admin Management Page ***" << endl;
cout << "Which Feature you wish to manage? Please select" << endl;
cout << "<1> Restaurant\n<2> Gym\n<3> Room Management\n<4> Customer Data\n<0> Exit" << endl;
cin >> x;
switch(x)
{
case 1:
{
system("cls");
system("Color E2");
Restaurant::AdminRestaurant();
break;
}

case 2:
{
system("cls");
system("Color E2");  
Gym::Admingym();
break;
}

case 3:
{
		system("cls");
Customer::Add();
 RoomManagement::AdminRoom();
  break;

}

case 4:
{
system("cls");
    system("Color E2");
Customer::Admin_Customer();
break;
}

case 0:
{
cout << "Thankyou" << endl;
break;
}

default:
{
cout<<"\n\n\t\t\tWrong choice.....!!!";
cout<<"\n\t\t\tPress any key to   continue....!!";
getch();
}
}
}


//******************************************** C U S T O M E R   B A S E D    F U N C T I O N S ********************************************//
void CustomerBookingPage()
{
int x;
   system("cls");
            system("Color E2");
cout <<"\t\t\t\t\t\t *** Customer Service Page ***" << endl;
cout << "<1> Edit customer details\n<2> Already a Member?"<< endl;
cin >> x;
switch(x)
{
case 1:
{
	system("cls");
NewMember();
break;
}

case 2:
{
	system("cls");
DisplayMember();
 Member();
break;
}
}
}

void NewMember()
{
	Customer::CustomerRoomManagement();
	Member();

}

void DisplayMember()
{
	long long cn;
	cout<<"Enter your CNIC: ";
	cin>>cn;
Customer::search(cn);
cout<<"\n\nWELCOME! "<<"\n\n";
//room display func
//gym display func
}

void Member()
{
            system("Color E2");
int x;
cout << "Which Facility do you wish to access? Please Select" << endl;
cout << "<1> Restaurant\n<2> Gym\n<0> Exit" << endl;
cin >> x;
switch(x)
{
case 1:
{
		system("cls");
Restaurant::CustomerOrder();
break;
}

case 2:
{
		system("cls");
 Gym::Customergym();
break;
}

case 0:
{
cout << "Thankyou" << endl;
break;
}

default:
{
cout<<"\n\n\t\t\tWrong choice.....!!!";
cout<<"\n\t\t\tPress any key to   continue....!!";
getch();
}
}
}



//Guest Summary Report
void GuestReport()
{

}

////Deleting Member
// void DeleteMember()
// {
//
// Customer::deleteRecord();
// }
//
////UpdateMember
// void UpdateMember()
// {
// Customer::updateRecord();
// Gym::update_trainer();
// }



};

int main()
{

Resort r;
int x,y;
system("cls");
    system("Color E2");
cout<<"\n\t\t\t********************************************************";
cout<<"\n\t\t\t* R E S O R T   M A N A G E M E N T   P R O J E C T *";
cout<<"\n\t\t\t********************************************************";
   
cout << "\nPlease Select" << endl;
cout << "<1> Admin  \n<2> Customer Service" << endl;
cin >> x;
switch(x)
{
case 1:
{
	system("cls");
r.AdminUse();
break;
}

case 2:
{
	system("cls");
r.CustomerBookingPage();
break;
}

default:
{
cout<<"\n\n\t\t\tWrong choice.....!!!";
cout<<"\n\t\t\tPress any key to   continue....!!";
getch();
}
}
}




