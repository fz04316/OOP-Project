#pragma once
#include <iostream>
#include<string>
using namespace std;


class Resort
{
    protected:
    int admin;
    string password;


    public:

    Resort();

    void admin_login();
    void add_admin();
    void delete_admin();
    void admin();
    void add_customer();
    void total_bill();

};