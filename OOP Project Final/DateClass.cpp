#include<iostream>
#include<string.h>
#include <fstream>
#include<stdio.h>

using namespace std;

class Date
{
	private:
	int date;
    int month;
    int year;
    
    public:
    	void Input()
    	{
    		cout << "Day: ";
			cin>> date;
			cout << endl;
			cout << "Month: ";
			cin >> month;
			cout << endl;
			cout << "Year: ";
			cin >> year;
			cout << endl;
				
		}
		
     	void DisplayDate()
     	{
     		cout << date << "/" << month << "/" << year << endl;
		}
		
        Date operator - (Date d)
        {
        	Date temp;
			temp.date = date - d.date;
			temp.month = month - d.month;
			temp.year = year - d.year;
			return temp;
		}

	
};

int main()
{
	Date d1,d2,d3;
	
	d1.Input();
	d2.Input();
	d3=d1-d2;
	d3.DisplayDate();
}

