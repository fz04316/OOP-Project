#pragma ONCE
#include"Payment.hpp"
#include <iostream>
#include<string>
using namespace std;

class Card : public Payment
{

private:
string card_no;
int pin_no;

public:
Card();
int Bill_Generate();


}; 