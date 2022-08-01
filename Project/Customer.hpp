#pragma once
#include <iostream>
#include<string>
#include<fstream>
using namespace std;


class Customer
{
    protected:
    int id;
    string name;
    double phone;
    string email;
    string password;
    
    

    public:

    //Customer();

    void Get_Data()
    {
    cout << "\t\t\t\t*** E N T E R   D E T A I L S ***\n\n" << endl;
    cout << "\n\t\t\t Customer name: ";
    cin.ignore();
    cin.getline(name,49);
    cout << "\n\t\t\t Phone number: ";
    cin >> phone;
    cout << "\n\t\t\t Customer ID: ";
    cin >> id;
    cout << "\n\t\t\t Email Address: ";
    cin.ignore();
    cin.getline(email,99);
    cout << "\n\t\t\t Password: ";
    cin.ignore();
    cin.getline(password,99);
    cout << "\n\t\t\t No_of_Days: ";
    

    
    }
    void Display()
    {
    cout << "\n\t\t\t Name: " << name;
    cout << "\n\t\t\tPhone number: " << phone;
    cout << "\n\t\t\tCustomer ID: " << id;
    cout << "\n\t\t\tEmail Address: " << email;
    }
    void Add()
    {
    ofstream fout("record.txt",ios::out|ios::app);
    GetData();
    fout.write((char*)this, sizeof(*Customer));
    fout.close();
    }

   



    
    void Delete();
    void Search();
    void Login();
    void signup();

};



