#pragma once
#include <iostream>
#include<string>
using namespace std;


class Room
{
    protected:
    int Room_No;
    string Room_type;
    int Room_Rent;

    public:

    Room();
    virtual void Book_Room()=0;
    virtual void Room_Charges()=0;
    void Rooms();


};