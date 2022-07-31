#pragma once
#include <iostream>
#include<string>
using namespace std;


class Customer
{
    private:
    int id;
    string name;
    double phone;
    string email;
    string password;
    

    public:

    Customer();

    void Get_Data();
    void Display();
    void Delete();
    void Search();
    void Login();
    void signup();

};