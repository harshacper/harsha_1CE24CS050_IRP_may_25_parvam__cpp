
#include <iostream>
using namespace std;
class Car{
    
    public :
    int wheels=0; // e.g 4
    int seats; // e.g 5 or 6
    int doors; // e.g 4 or 5
    string engineType; // v8
    string modelNo;
    float fuelCap;
    
    Car(){
        seats=4;
    }
    Car(int swheels,float sfuelCap){
        wheels=swheels;
        fuelCap = sfuelCap;
    }
    Car(int swheels,float sfuelCap,int sseats,int sdoors,string sengineType,string smodelNo){
        wheels=swheels;
        fuelCap = sfuelCap;
        seats =sseats;
        doors = sdoors;
        engineType=sengineType;
        modelNo = smodelNo;
    }

    void setCarDetails(int swheels,float sfuelCap,int sseats,int sdoors,string sengineType,string smodelNo){
        wheels=swheels;
        fuelCap = sfuelCap;
        seats =sseats;
        doors = sdoors;
        engineType=sengineType;
        modelNo = smodelNo;
    }
    void getCarDetails(){
        cout<<" ---------- Start Car Details -----------"<<endl;
        cout<<" No of Wheels = "<<wheels<<endl;
        cout<<" Fuel Capacity = "<<fuelCap<<endl;
        cout<<" No of Seats = "<<seats<<endl;
        cout<<" No of Doors = "<<doors<<endl;
        cout<<" No of Engine Type = "<<engineType<<endl;
        cout<<" No of Model No = "<<modelNo<<endl;
        cout<<" ---------- End Car Details -----------"<<endl;
    }
    void getFuelCost(float fprice){
        cout<<" Fuel cost  = "<<(fuelCap*fprice)<<endl;
    }
    
    void setSeats(int sseats){
        seats =sseats;
    }
    int getSeats(){
        return seats;
    }
};

int main(){
    Car c1,c2;
    Car c3(4,18,5,4,"A7","C4U289");
    Car c4(4,8);
    
    cout<<"\n---------- before set  get the Specific seat number -----------"<<endl;
    cout<<"the no of seats present in  = "<<c3.getSeats()<<endl;
    
    c3.setSeats(6);
    c1.setCarDetails(4,18,5,4,"A8","C4U234");
    c2.setCarDetails(4,12,5,4,"A9","A4I234");
    cout<<"\n---------- C1 Car Details -----------"<<endl;
    c1.getCarDetails();
    cout<<"\n---------- C2 Car Details -----------"<<endl;
    c2.getCarDetails();
    cout<<"\n---------- C3 Car Details -----------"<<endl;
    c3.getCarDetails();
    c1.getFuelCost(84);
    c2.getFuelCost(100);
    
    cout<<"\n---------- after set get the Specific seat number -----------"<<endl;
    cout<<"the no of seats present in  = "<<c3.getSeats()*4<<endl;
}


