#pragma once
#include <iostream>
#include<string>
using namespace std;


class Restaurant
{
    private:
    int item_id;
    string item_name;
    int price;

    public:

    Restaurant();
    void add_menu();
    void show_menu();
    void search_menu();
    void delete_menu();
    void place_order();
    void cancel_order();
    int Generate_bill();



};