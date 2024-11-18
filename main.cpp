#include <iostream>
#include <fstream>
#include<cstdlib>//for function exite
#include <bits/stdc++.h>
using namespace std;


class Customer
{

 public:   int ID;
  public:  string Name;
  protected:  int TelNum;

  protected:  string Address;



  protected: float money;

  protected: float days;
  protected:int DeletId;

  int num;








  public :string FoodItemForMorning;

  public :string FoodItemForLunch;

  public :string FoodItemForDinner;

  public:Customer()
  {
     ID=0;
    Name=" ";

     TelNum=0;

     Address=" ";



    money=0;

     days=0;

      DeletId=0;





  }




  public:Customer(int ID,string Name,int TelNum,string Address,int days)
  {
      this->ID=ID;

      this->Name=Name;

      this->TelNum=TelNum;

      this->Address=Address;



      this->days=days;




  }




  void Guestinfo()
  {
      cout<<"the name of customer is" <<" "<<Name<<" "<<"and the ID is"<<ID<<" "<<"and telephone number is"<<" "<<" "<<TelNum;

      cout<<"the Address is"<<" "<<" "<<Address<<" "<<endl;


  }





  void Checkin()
  {





          ofstream addfile;
  addfile.open("server.txt",std::ios_base::app);

  addfile<<"ID ="<<ID<<" "<<"and the name is"<<" "<<Name<<" "<<"and the address is"<<" "<<Address<<" "<<"and num of days"<<days<<endl;

   addfile.close();

   cout<<"number of adys is"<<days<<" "<<endl;
   cout<<"the reservation is compelete"<<endl;

      }






  void paysBill()
  {
      Checkout(money);
  }

  void Checkout(int money)
  {
      if(money==days*1000)
      {
          DeletId=ID;
          ID=0;


          days=0;

          Name="No Name";

          Address="No Address";


            ofstream addfile;
  addfile.open("server.txt",std::ios_base::app);


  addfile<<"The Person Of Id "<<" "<<DeletId<<" "<<"Become-->"<<" "<<"ID ="<<ID<<"and the name is"<<Name<<" "<<"and the address is"<<" "<<Address<<" "<<"and num of days"<<days<<endl;
   addfile.close();

   cout<<"the checkout is compelete"<<endl;
   cout<<"thank you"<<endl;
      }

      else if(money<days*1000)
      {
          cout<<"we need from Id"<<"-->"<<ID<<"=="<<(days*1000)-money<<" "<<"EG"<<endl;
      }
      else
      {
          cout<<"the rest of your money for Id "<<"-->"<<ID<<"=="<<money-(days*1000)<<" "<<"EG"<<endl;
      }

  }


  string OrderFoodMonrning(string FoodItemForMorning)
  {
    return this->FoodItemForMorning=FoodItemForMorning;


  }


  string OrderFoodLunch(string FoodItemForLunch)
  {
      return this->FoodItemForLunch=FoodItemForLunch;
  }


  string OrderFoodDinner(string FoodItemForDinner)
  {
      return this->FoodItemForDinner=FoodItemForDinner;
  }







};






class Bill : Customer
{
    public  : int BillNo=money;

    public :string CustomerName=Name;

    public:Bill()
    {

    }

    public:Bill(int BillNo,string CustomerName)
    {
        this->BillNo=BillNo;

        this->CustomerName=CustomerName;
    }


    public:int GenerateBill()
    {
        return BillNo;
    }






};



class Receptionist : Customer
{

    protected:string feedback =" ";
    //public :int Id;

    //public :string name;

   // public :int tell;


   // public:string address;
   public:int R;

        protected:int value=0;

  //public :int numofroom=60;

   protected: int RoomNo[5][10]={{1,2,3,4,5,6,7,8,9,10},{11,12,13,14,15,16,17,18,19,20},{21,22,23,24,25,26,27,28,29,30},{31,32,33,34,35,36,37,38,39,40},{41,42,43,44,45,46,47,48,49,50}};
    protected:int  i;
    protected:string f;
    protected:char h;

    protected:int Room;



    public:Receptionist()
    {

           Room=0;

        cout<<"The Price Day In The Hotel =1000(EG)"<<endl;



    }

    public:Receptionist(Customer objectn,int i)
    {





       if(i==objectn.ID)
        {
            cout<<"the data is correct and has been recording"<<endl;


            cout<<"Hello "<<objectn.Name<<endl;

            cout<<"Enjoy With Services Of Hotel"<<endl;

        }

        else
        {

            cout<<"the data of the recording is wrong"<<endl;

            exit(0);


        }
    }




    public:void BookRoomAndGett(int R,Customer objectt)
    {


 ofstream addfile;

  addfile.open("Room.txt",std::ios_base::app);


  addfile<<"The Room of "<<" "<<R<<" "<<"Is Booking To Number Of ID=="<<objectt.ID<<endl;
   addfile.close();

   cout<<"The Booking Room Is Number "<<" "<<R<<endl;





    }



    //void BookRoom()
    //{
        //cout<<this->CheckRoomAvailibilty()<<endl;

     //   cout<<"the room is booking"<<endl;
   // }


    int  GenerateBill()
    {
        return this->money;
    }

    void AcceptCustomerFeedback(string feedback)
    {
        this->feedback=feedback;
    }

    void showfeedback()
    {
        cout<<"the feedback of customer is"<<feedback<<endl;
    }






};










class Rooms : Customer
{


    public:Rooms()
    {





    }




    void Guestinfo()
  {
      cout<<"the name of customer is" <<Name<<" "<<"and the ID is"<<ID<<" "<<"and telephone number is"<<TelNum;

      cout<<"the Address is"<<Address<<endl;






  }


  void UpdateRoom(Receptionist obje)
  {

     cout<<obje.R;

  }




};







class owner : Customer
{
    protected:int Id;

    protected:string nam;

    protected:int phoneno;

    protected:string comp;

    public:owner()
    {
        Id=0;

        nam=" ";

        phoneno=0;

        comp=" ";
    }

    public:owner(int Id,string nam,int phoneno)
    {
        this->Id=Id;

        this->nam=nam;

        this->phoneno=phoneno;


    }

 public: string Complains(string comp)
    {
        return this->comp=comp;
    }



    public:void ViewComplains()
    {
        cout<<"the complains is"<<this->Complains(comp)<<endl;
    }


    public:void Guestinf()
    {
        this->Guestinfo();
    }


   // void RoomInfo(Rooms objectk)
    //{
     //  cout<<"the number of room is"<<" "<<objectk.GetRoom<<endl;

       // cout<<"the location of the room is"<<" "<<objectk.location<<endl;

      // cout<<"the guest onformation is"<<" "<<objectk.Guestinfo()<<endl;



   // }


    void bill(Bill objectb)
    {
        cout<<"the BillNo is"<<" "<<objectb.BillNo<<endl;

        cout<<"the Customer name"<<" "<<objectb.CustomerName<<endl;

        cout<<"the Bills is"<<" "<<objectb.GenerateBill();
    }

void Fooditems(Customer objectc)
    {
        cout<<"the food item of Morining is"<<" "<<objectc.FoodItemForMorning<<endl;


        cout<<"the food item for Lunch is"<<" "<<objectc.FoodItemForLunch<<endl;


        cout<<"the food item for Dinner is"<<" "<<objectc.FoodItemForDinner<<endl;
    }







};







class FoodItem :Customer
{
    FoodItem()
    {

    }

    FoodItem(int ID,string Name)
    {
        this->ID=ID;

        this->Name=Name;
    }


    void UpdateFoodItem()
    {
        this->FoodItemForMorning=" ";


        this->FoodItemForLunch=" ";


        this->FoodItemForDinner=" ";
    }





};

class Manager :Customer
{
    protected:string nam;

    protected:int id;

    protected:int telephone;

    protected:string Inventory;

    protected:string complaint;


    public:Manager()
    {
        nam=" ";

        id=0;

        telephone=0;

        Inventory=" ";

    }

    public:Manager(string nam,int id ,int telephone)
    {
        this->id=id;

        this->nam=nam;

        this->telephone=telephone;
    }

    public:string PurchaseInventory(string Inventory)
    {
        return this->Inventory=Inventory;
    }

    string Entercomplaints(string complaint)
    {
       return this->complaint=complaint;
    }


    void RecordComplaints(int identity)
    {
                  ofstream addfile;
  addfile.open("compalaints.txt",std::ios_base::app);

  addfile<<"the complaints of Customer Of Id"<<" "<<identity<<" "<<this->complaint<<endl;

   addfile.close();
    }





};







class Innventory : Manager
{
    protected:string Type;

    protected:string Status;


    public:Innventory()
    {
        Type=" ";

        Status=" ";
    }

    Innventory(string Type,string Status)
    {
        this->Type=Type;

        this->Status=Status;
    }


    void UpdateInventory()
    {
        this->Inventory=" ";
    }



};












int main()
{

int aa;

cout<<"enter ID of customer ";

cin>>aa;

string ss;

cout<<"enter the name of customer ";

cin>>ss;


int rr;

cout<<"enter the number of telephone ";

cin>>rr;


string mm;

cout<<"enter the address ";

cin>>mm;

int zz;

cout<<"enter the number of days ";

cin>>zz;





Customer Ashraf(aa,ss,rr,mm,zz);
Ashraf.Checkin();

string fetar;

cout<<"the food of morning ";

cin>>fetar;

Ashraf.OrderFoodMonrning(fetar);


string ghada;

cout<<"enter the launch ";

cin>>ghada;


Ashraf.OrderFoodLunch(ghada);


string dinn;

cout<<"enter the food of dinner ";

cin>>dinn;



Ashraf.OrderFoodDinner(dinn);

Ashraf.Guestinfo();














Receptionist s(Ashraf,22);
s.BookRoomAndGett(757,Ashraf);

Rooms l;
l.UpdateRoom(s);




s.AcceptCustomerFeedback("the serving is excellent");

s.showfeedback();







string haps;

cout<<"enter the complains";

cin>>haps;

owner v;
v.Complains(haps);
v.ViewComplains();
v.Fooditems(Ashraf);



Manager e("Asharf",22,0101);
e.Entercomplaints("the employ treat with me a bad formal");

e.RecordComplaints(22);


Ashraf.Checkout(192);

Receptionist j;

//j.CheckRoomAvailibilty();

//k.GetRoom(s);


//Ashraf.Checkout(8000);

//Customer m(23,"Ahmed",9,"Aswan",4);
//m.Checkin();
//m.Checkout(4000);

//Receptionist w(m,23);


//Customer j(24,"Hamza",1001,"Alex",10);
//j.Checkin();

//Receptionist p(j,24);


}


































