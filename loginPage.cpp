#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void adminLogin(){
    
}
void SignIn(){
    string username,password;
    cout<<"Enter your Username : ";
    getline(cin,username);
    cout<<"Enter your Password : ";
    getline(cin,password);

    
}

void account(){

}
void userLogin(){
    // Sign --> Username --> Password --> Check it --> sucessful then procced
    // OR 
    // Create an account --> First Name --> Last Name --> Username --> Password --> Confirm password --> Next/Done --> Save to the user login file.
    cout<<"Press 1 : For Sign In";
    cout<<"Press 2 : To Create an Account";
    int ch;
    cin>>ch;
    switch (ch)
    {
    case 1:
        SignIn();
        break;
    case 2:
        account();
        break;
    default:
        cout<<"Invalid Selection !!"<<endl;
        cout<<"Please Enter as suggested."<<endl;
        break;
    }
}

int main(){
    cout<<"-------------- Log in/ Sign Up ----------------\n";
    cout<<"Press Enter to continue";
    cin.ignore();
    cout<<"Press 1 : If you are Admin"<<endl;
    cout<<"Press 2 : If you are User/Customer"<<endl;
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        adminLogin();
        break;
    case 2:
        userLogin();
        break;
    default:
        cout<<"Invalid Selection !!"<<endl;
        cout<<"Please Enter as suggested."<<endl;
        break;
    }
    return 0;
}