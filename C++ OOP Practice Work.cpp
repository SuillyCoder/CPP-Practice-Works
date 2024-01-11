#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>         
#include<bits/stdc++.h>      
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

//================================================ CLASS SPACE FOR PRACTICE EXERCISE 1 ============================================================
	
class person{
	private: 
		string address;
	public: 
		string name;
		int age;
		string phoneNumber;
    void setAddress(const string& newAddress) {
        address = newAddress;
        }
    string getAddress() const {
        return address;
        }
	void printInfo(){
		cout<<"\nPerson Information: \n";
		cout<<"Name: "<<name<<" \n";
		cout<<"Age: "<<age<<" \n";
		cout<<"Phone Number: "<<phoneNumber<<" \n";
		cout<<"Address: "<<getAddress()<<" \n\n";
		
	}
};

//================================================ CLASS SPACE FOR PRACTICE EXERCISE 2 ============================================================

class calculator{
	public: 
		double numberOne, numberTwo;
		
		double addition(double x, double y){
			return x + y;
		}
		double subtraction(double x, double y){
			return x - y;
		}
		double multiplication(double x, double y){
			return x * y;
		}
		double division(double x, double y){
			return x / y;
		}
			
};

//================================================ CLASS SPACE FOR PRACTICE EXERCISE 3 ============================================================
	
class restaurantMenu{
	public: 
		string menuList[100] = {"Chicken Ala-King", "Caesar Salad", "Belgian Waffles"};
		int priceList[100] = {210, 120, 180};
		int arrayIndex = 2;
		int arraySize = 3;
		
	void printMenu(){
		cout<<" \nCurrent Menu: \n";
		for (int x = 0; x < arrayIndex + 1; x++){
			cout<<"Menu Item "<<x+1<<": "<<menuList[x]<<".................PHP "<<priceList[x]<<".00\n";
		}
		cout<"\n";
	}
	void addMenuItem(string addedDish, int addedPrice){
		arrayIndex++;
		arraySize++;
		menuList[arrayIndex] = addedDish;
		priceList[arrayIndex] = addedPrice;
	}
	int findMenuItem (string findDish){
		int didYouFindIt;
		for (int f = 0; f < arrayIndex + 1; f++){
			didYouFindIt = 0;
			if (menuList[f] == findDish){
				cout<<"\nDish Found! \nMenu Item "<<f+1<<": "<<menuList[f]<<".................PHP "<<priceList[f]<<".00";
				didYouFindIt = 1;
				break;
			}
			else{
				continue;
			}
		}
		if (didYouFindIt == 0){
			cout<<"\nDish Not Found!";
		}
		
	}
	 void removeMenuItem (int indexRemover){
	 	cout<<"\nSuccessfully removed Menu Item "<<indexRemover + 1;
    	cout<<"\n"<<menuList[indexRemover]<<":  PHP "<<priceList[indexRemover]<<".00\n";;
    	
		for (int r = indexRemover; r < arraySize - 1; r++) {
        menuList[r] = menuList[r + 1];
    	priceList[r] = priceList[r + 1];
    }
    	arraySize--;
    	arrayIndex--;
	} 
	
};

int main(){
//===============================================================================================================================================
	cout<<"OOP PRACTICE EXERCISE 1: PERSONAL INFORMATION: \n\n";
	
	int putMore = 1;

	while (putMore !=0){
		
    string pAddress;
	person individualIdentity;
	
	cout<<"Enter your name: "; getline (cin, individualIdentity.name); 
	cout<<"Enter your age: "; cin>> individualIdentity.age; 
	cin.ignore();
	cout<<"Enter your phone number: "; getline (cin, individualIdentity.phoneNumber); 
	cout << "Enter your address: "; getline(cin, pAddress); individualIdentity.setAddress(pAddress);
	individualIdentity.printInfo();
	
	cout<<"Would you like to add another identity entry? \nPress press[0] to quit and any other number to continue: ";
	cin>>putMore;
	cout<<"\n";
	cin.ignore();
		}
	
	system("CLS");
	cout<<"\nPLEASE WAIT...\n\n";
	sleep(3);
	system("CLS");
	cout<<"\n============== IDENTITY DATABASE SAVED ================\n\n";
	cout<<"Press [0] to continue: ";
	int continueOne;
	cin>>continueOne;
	if (continueOne == 0){
		system("CLS");
	} 
//===============================================================================================================================================

	cout<<"OOP PRACTICE EXERCISE 2: SIMPLE CALCULATOR: \n\n";
	
	calculator myCalculator;
	string quitValue;

while(quitValue != "0"){
	
	string operation;
	cout<<"Enter your first number: "; cin>> myCalculator.numberOne;
	cout<<"Enter your second number: "; cin>> myCalculator.numberTwo;
	cin.ignore();
	cout<<"Input operation to be performed: ";getline(cin, operation);
	
	while(operation!= "ADDITION" || operation!= "SUBTRACTION" || operation!= "MULTIPLICATION" ){
	
	transform(operation.begin(), operation.end(), operation.begin(), ::toupper); 
	
    if (operation == "ADDITION"){
    	cout<<"\nThe sum of the two numbers is: "<< setprecision(4) <<  myCalculator.addition(myCalculator.numberOne, myCalculator.numberTwo);
    	break;
	}
    else if (operation == "SUBTRACTION"){
    	cout<<"\nThe difference of the two numbers is: "<< setprecision(4) <<  myCalculator.subtraction(myCalculator.numberOne, myCalculator.numberTwo);
    	break;
	}
	else if (operation == "MULTIPLICATION"){
    	cout<<"\nThe product of the two numbers is: "<< setprecision(4) <<  myCalculator.multiplication(myCalculator.numberOne, myCalculator.numberTwo);
    	break;
	}
	else if(operation == "DIVISION"){
		while (myCalculator.numberTwo == 0){
			cout<<"INVALID: Division by O not possible.\n";
			cout<<"Please try again.\n\n";
			cout<<"Enter your first number: "; cin>> myCalculator.numberOne;
			cout<<"Enter your second number: "; cin>> myCalculator.numberTwo;
		}
		cout<<"\nThe quotient of the two numbers is: "<< setprecision(4) <<  myCalculator.division(myCalculator.numberOne, myCalculator.numberTwo);
		break;
	}
	else{
		cout<<"\nPlease input a valid operation: ";getline(cin, operation);
	}
	
	}
	cout<<"\n\nWould you like to run the application again?\n";
	cout<<"Press [0] to quit and any other key to continue: ";
	getline(cin, quitValue);
	cout<<"\n";
}
system("CLS");
	
cout<<"\n============== THANK YOU FOR USING THE PROGRAM! ================\n\n";
	cout<<"Press [0] to continue: ";
	int continueTwo;
	cin>>continueTwo;
	if (continueTwo == 0){
		system("CLS");
	}
//===============================================================================================================================================

	cout<<"OOP PRACTICE EXERCISE 3: RESTAURANT MENU LIST \n\n";
	
	restaurantMenu SuillyEats;
	
	int restoAction;
	string addTheItem;
	int addThePrice;
	string findTheItem;
	int removeTheItem;
	
	cout<<"Hi! Welcome to SuillyEats! What would you like to do??\n\n";
	cout<<"Display the Menu (Press [1])\n";
	cout<<"Add Dish to Menu (Press [2])\n";
	cout<<"Remove Dish from Menu (Press [3])\n";
	cout<<"Find Menu Item (Press [4])\n\n";
	cout<<"Enter action: "; cin>>restoAction;

while(restoAction != 1 && restoAction != 2 && restoAction != 3 && restoAction != 4){
	cout<<"\nPlease Input a Valid Action Number: ";
	cout<<"\nDisplay the Menu (Press [1])\n";
	cout<<"Add Dish to Menu (Press [2])\n";
	cout<<"Remove Dish from Menu (Press [3])\n";
	cout<<"Find Menu Item (Press [4])\n\n";
	cout<<"Enter action: "; cin>>restoAction;
}

while(restoAction != 0){
	
	if (restoAction == 1){
		SuillyEats.printMenu();
	}
	else if(restoAction == 2){
		cin.ignore();
		cout<<"\nEnter a new item on the menu: ";
		getline(cin, addTheItem);
		cout<<"Enter its price: ";
		cin>> addThePrice;
		SuillyEats.addMenuItem(addTheItem, addThePrice);
		cout<<"\nSuccessfully Added: "<<addTheItem;
		cout<<"\nCosting: PHP "<<addThePrice<<".00";
	}
	else if (restoAction == 3){
		cout<<"\nWhat menu item number do you wish to delete??\nMenu Item No: ";
		cin>>removeTheItem;
		int indexedItem = removeTheItem - 1;
		SuillyEats.removeMenuItem(indexedItem);
	}
	else if(restoAction == 4){
		cout<<"\nWhat dish would you like to find??\n";
		cin.ignore();
		cout<<"Enter dish name: ";
		getline(cin, findTheItem);
		SuillyEats.findMenuItem(findTheItem);
	}
	cout<<"\n\nWhat else would you like to do??\n\n";
	cout<<"Display the Menu (Press [1])\n";
	cout<<"Add Dish to Menu (Press [2])\n";
	cout<<"Remove Dish from Menu (Press [3])\n";
	cout<<"Find Menu Item (Press [4])\n";
	cout<<"Quit Program (Press [0])\n\n";
	cout<<"Enter action: "; cin>>restoAction;
}
system("CLS");
cout<<"\n============================= Thank you for coming over to SuillyEats! ================================ \n\n";

	return 0;
}
