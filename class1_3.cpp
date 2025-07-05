#include<iostream>
using namespace std;
class TBP
{
  private:
          const float itprice=1200;
          float tprice;
          string gender;
          void cal_totprice()
          {
            tprice=itprice;

            if(gender=="female")
            {
                
                if(age<=12){
                tprice-=tprice*0.05;
                
                }
                else if(age>12){
                    tprice-=tprice*0.03;
                    
                }
            }
            else if(gender=="male")
            {
                tprice+=tprice*0.18;
                
            }
          }

  public:
          string name;
          int age;
          string pno;
          
          void setcdetails(string i_name,string i_gender,int i_age,string i_pno)
          {
            name=i_name;
            gender=i_gender;
            age=i_age;
            pno=i_pno;
            cal_totprice();
          }
          
         
          void getdetails()
          {
            cout<<"\n\nName of customer : "<<name<<endl;
            cout<<"Gender of customer : "<<gender<<endl;
            cout<<"Age of "<<name<<" : "<<age<<endl;
            cout<<"Phone number of "<<name<<" : "<<pno<<endl;
            cout<<"Age of "<<name<<" : "<<age<<endl;
            cout<<"Ticket Price : "<<tprice<<endl;
          }
};
int main()
{
    TBP T1,T2,T3;
    T1.setcdetails("B","male",18,"99456789128");
   
    T1.getdetails();
    T2.setcdetails("G","female",18,"99456789128");
    
    T2.getdetails();
    T3.setcdetails("g","female",12,"99456789128");
   
    T3.getdetails();
}