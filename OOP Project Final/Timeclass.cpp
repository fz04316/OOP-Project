#include<iostream>
#include <ctime>


using namespace std;




class Date
{
public:
int year;
int Month;
int Day;
int hr;
int min;
int sec;
public:


 
int get_year()
{
time_t now = time(0);
tm *ltm = localtime(&now);
 
year=int(1900 + ltm->tm_year);
return year;
}
   
   int get_hrs()
   {
   // work();
   time_t now = time(0);
    tm *ltm = localtime(&now);
    hr=int(1 + ltm->tm_hour);
    return hr;
}

int get_mins()
{
//work();

time_t now = time(0);
tm *ltm = localtime(&now);
min=int(1 + ltm->tm_min);
return min;
}

int get_sec()
{
// work();
time_t now = time(0);
tm *ltm = localtime(&now);
sec=int(1 + ltm->tm_sec );
return sec;
}
};

int main()
{
	Date d1;
	cout<<d1.get_hrs()<<":"<<d1.get_mins()<<":"<<d1.get_sec();
}

