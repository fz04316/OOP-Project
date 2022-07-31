#pragma ONCE
#include"Payment.hpp"
#include <iostream>
#include<string>
using namespace std;

class Cash : public Payment
{


public:
Cash();
int Bill_Generate();


}; 