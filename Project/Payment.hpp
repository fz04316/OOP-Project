#pragma once
#include <iostream>
#include<string>
using namespace std;


class Payment
{
    protected:
    int Total_charges;
    string payment_method;

    public:

    Payment();
    virtual int Bill_Generate()=0;


};