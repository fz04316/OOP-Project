

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
    int quantity;

    public:

    
    //void add_menu();
    void show_menu(){
        fstream fout;
        fout.open("Menu.txt",ios::in);
        if(!fout){
            cout<<"Error!";
        }
        string ch;
        while (getline(fout,ch))
        {
            cout<<ch<<endl;
        }
        fout.close();

    }

    void place_order()
    {
        int dishes;
        cout<<"Enter the number of the dishes you want"<<endl;
        cin>>dishes;
        fstream fout;
        fout.open("Records.txt",ios::out);
        for(int i=0; i<dishes;i++)
        {
            cout<<"Enter item name:"<<endl;
            cin.ignore();
            getline (cin, item_name);
            cout<<"Enter item id:"<<endl;
            cin>>item_id;
            cout<<"Enter Quantity:"<<endl;
            cin>>quantity;
            
            switch (item_id)
            {
            case 1:
                price=150;
                break;
            case 2:
                price=300;
                break;
            case 3:
                price=400;
                break;
            case 4:
                price=800;
                break;
            case 5:
                price=850;
                break;
            case 6:
                price=500;
                break;
            case 7:
                price=550;
                break;
            case 8:
                price=1200;
                break;
            case 9:
                price=500;
                break;
            case 10:
                price=1000;
                break;
            default:
                cout<<"This item is not available"<<endl;
                break;
            }
            fout<< item_name<<" ";
            fout<< quantity<<" ";
            fout<< price<<endl;
        }
        cout<<"Your order is placed"<<endl;
    }
    void cancel_order()
    {

  string line,Dish_name;
  cout << "Please Enter the name of dish you want to delete: ";
  cin >> Dish_name;
  ifstream fin;
  ofstream fout;
  fin.open("Records.txt",ios::in);
  fout.open("temp.txt",ios::out);
  while (getline(fin, line))
  {
    if (line != Dish_name)
      fout << line << endl;
  }
  cout << "The record with the name " << Dish_name << " has been deleted if it exsisted" << endl;
  fin.close();
  fout.close();
  remove("Records.txt");
  
    }

    int Generate_bill()
     {
        fstream fout;
        fout.open("Records.txt",ios::in);
        if(!fout){
            cout<<"Error!";
        }
        string ch;
        int priceDish;
        int quan;
        int temp;
        int sum=0;
        while (fout >> ch)
        {
            fout >> priceDish >> quan;
            temp=priceDish*quan;
            sum=temp+sum;
            
            
        }
        
            cout<<"Your total bill is: "<<sum<<endl;
        
        fout.close();

    return sum;

     }



};
int main(){
    Restaurant r;
    r.show_menu();
    r.place_order();
    r.Generate_bill();
    r.cancel_order();
    r.Generate_bill();
}