#pragma ONCE
#include <iostream>
#include<string>
using namespace std;
#include<fstream>



class Room 
{
    protected:
    int Room_No;
    string Room_type;
    int Room_Rent;
    int No_of_days;

    public:

   
    void Book_Room()
    {
    cout<<"\n ----------------------";
    cout<<"\n\n Room no: ";
    cout<<"\n Total no. of Rooms - 50";
    cout<<"\n NonAC Rooms from 1 - 30, Per day rent is Rs 10,000 which can be alloted for 30 days maximum";
    cout<<"\n AC Rooms from 31 - 45, Per day rent is Rs 15,000 which can be alloted for 15 days maximum";
    cout<<"\n Deluxe Rooms from 46 - 50,Per day rent is Rs 20,000 which can be alloted for 7 days maximum";
    cout <<"\n Enter The Number of days you want to stay in :- "<<endl;
    cin >> No_of_days;
    if(No_of_days>7 && No_of_days<15)
    {
        cout<<"Sorry you cannot avail Deluxe Room"<<endl;

    }

    else if(No_of_days>15 && No_of_days<30)
    {
         cout<<"Sorry you cannot avail Deluxe and AC Room"<<endl;
    }

      cout <<"\n Enter The Room no. you want to stay in :- "<<endl;
    cin>>Room_No;
    }
    //virtual void Room_Charges()=0;

    int checkRoom(int r)
    {
        int flag=0;
		ifstream fin("record.txt",ios::in);
		while(!fin.eof())
		{
			//fin.read((char*)this,sizeof(*this));
			if(Room_No==r)
			{
				flag=1;
				break;
			}
		}
		fin.close();
		return(flag);

    }


};

class NonAC : public Room
{
public:
void Book_Room(){
Room::Book_Room();
int var ;
var= Room::checkRoom(Room_No);
if(var)
{
    cout<<"Sorry Room is already booked"<<endl;
}
ofstream fout("record.txt",ios::out|ios::);
//GetData();
fout.write((char*)this, sizeof(*this));
fout.close();
// if(Room_No>=1 && Room_No<=30)
// {
//     Room_type= "NonAC";
// }


}




};

int main()
{
    NonAC p;
    p.Book_Room();

}