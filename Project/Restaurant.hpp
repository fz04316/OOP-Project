#pragma once
#include <iostream>
#include<string>
#include<fstream>
using namespace std;


class Restaurant
{
    private:
    int item_id;
    string item_name;
    int price;

    public:

    Restaurant();
    //void add_menu();
    void show_menu(){
        fstream fout;
        fout.open("Menu.txt",ios::in)
        if(!fout){
            cout<<"Error!";
        }
        char ch;
        while (!fout.eof())
        {
            fout>>ch;
            cout<<ch;
        }
        fout.close();

    }

    void place_order()
    {
        int dishes;
        cout<<"Enter the number of the dishes you want"<<endl;
        cin>>dishes;
        for(int i=0; i<dishes;i++)
        {
            cout<<"Enter item name:";
            cin<<item_name;
        }
    }
    void cancel_order();

    int Generate_bill()
    {

    }



};