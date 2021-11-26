#include<iostream>
#include<string>
using namespace std;

void showCarDetails(){
    string CarBrand[5] = {"Mercedes","Tata","Audi","Ford","Maruti"};
    string CarNo[5] = {"DL1A1111","DL1A2222","DL1A3333","DL1A4444","DL1A5555"};
    int CarPrice[5] = {200,100,250,150,100};
    int CarDistance[5] = {100,123,101,152,89};
    
    cout<<"Available Cars\n****************\n";
    cout<<"Car Brand : ";
    for(int i=0;i<5;i++)
        cout<<CarBrand[i]<<" ";
    cout<<endl;
    cout<<"Car No : ";
    for(int i=0;i<5;i++)
        cout<<CarNo[i]<<" ";
    cout<<endl;
    cout<<"Car Price : ";
    for(int i=0;i<5;i++)
        cout<<CarPrice[i]<<" ";
    cout<<endl;
    cout<<"Car Distance : ";
    for(int i=0;i<5;i++)
        cout<<CarDistance[i]<<" ";
    cout<<endl;

}

int main(){
    cout<<"---------------------- Welcome To Car Rental System ------------------------\n";

    showCarDetails();
    return 0;
}