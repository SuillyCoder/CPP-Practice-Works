#include <iostream>
using namespace std;

int main(){
	
	// PRINTING STATEMENTS 
	cout << "Hello World (in C++)\n";
	cout << "This is a new line of text" << endl;
	cout << "Holy shit, I am doing it!!!\n";
	cout << "Might just stick to using 'slash n' instead. \n\n";
	
	// VARIABLES
	
	int numOne = 5, numTwo = 7, numThree = 3, numFour = 4, numFive = 10;
	int result = (numOne * numFour) - (numTwo + numFive);
	int finalResult = result / numThree;
	
	cout <<"Big Result: " <<finalResult <<"\n\n";
	
	// USER INPUT
	
	int inputOne, inputTwo;
	
	cout << "Enter Number One: ";
	cin >> inputOne;
	cout << "Enter Number Two: ";
	cin >> inputTwo;
	
	float sum = (inputOne + inputTwo);
	float diff = (inputOne - inputTwo);
	float prod = (inputOne * inputTwo);
	float quo = (inputOne / inputTwo);
	
	cout <<"The two numbers are: "<< inputOne << " and "<< inputTwo <<"\n";
	cout <<"Their sum is: " <<sum <<"\n";
	cout <<"Their difference is: " <<diff <<"\n";
	cout <<"Their product is: " <<prod <<"\n";
	cout <<"Their quotient is: " <<quo <<"\n\n";
	
	string text;
	cout << "What do you wanna say???: ";
	cin >> text;
	cout << "You said: " <<text <<"\n\n";
	
	// CONDITIONAL STATEMENTS
	
	bool codingIsFun = true;
	bool calculusIsFun = false;
	
	cout <<"Coding Fun Verity: "<< codingIsFun <<"\n";
	cout <<"Calculus Fun Verity: "<< calculusIsFun <<"\n";
	
	int compNumOne = 3, compNumTwo = 8;
	bool greaterThan = (compNumOne > compNumTwo);
	
	cout << "Is " <<compNumOne << " greater than " <<compNumTwo <<"?; Answer: "<< greaterThan  <<"\n";
	
	if (greaterThan == 1){
		cout<< "The first number is greater than the second number" <<"\n\n";
	}
	else{
		cout<< "The first number is lesser than the second number"  <<"\n\n";
	}
	
	
	int numPutOne, numPutTwo;
		
	cout << "Enter Number One: ";
	cin >> numPutOne;
	cout << "Enter Number Two: ";
	cin >> numPutTwo;
	
	if (numPutOne > numPutTwo){
		cout<< "First number is greater than second" <<"\n\n";
	}
	else if (numPutOne < numPutTwo){
		cout<< "First number is less than second" <<"\n\n";
	}
	else{
		cout<< "First and second number are equal" <<"\n\n";
	}
	
	
	int day;
	cout<< "Enter a day of the week: ";
	cin>>day;
	
	switch (day){
		case 1:
			cout<< "Today is Monday" <<"\n\n";
			break;
		case 2:
			cout<< "Today is Tuesday" <<"\n\n";
			break;
		case 3:
			cout<< "Today is Wednesday" <<"\n\n";
			break;
		case 4:
			cout<< "Today is Thursday" <<"\n\n";
			break;
		case 5:
			cout<< "Today is Friday" <<"\n\n";
			break;
		case 6:
			cout<< "Today is Saturday" <<"\n\n";
			break;
		case 7:
			cout<< "Today is Sunday" <<"\n\n";
			break;
	}
	
	// LOOPS 
	
	int x, y;
	for (x = 0; x < 3; x++){
		cout<<"This is line number " << x+1  <<".\n"; 
		for (y = 0; y < 5; y++){
			cout<<"     This is sub-line number " << y+1  <<".\n"; 
		}
		cout<< "\n";
	}
	cout<< "\n";
	
	int numberIn;
	
	while (numberIn != 0){
		cout <<"Enter a number: ";
		cin>>numberIn;
	}
	cout<< "\n\n";

	//ARRAYS
	
	string gameList[5]{"God of War: Ragnarok", "Mortal Kombat 11", "Genshin Impact", "Lies of P", "Hearthstone"};
	cout <<"Game List: \n";
	int g;
	for (g = 0; g<5; g++){
		cout<< "Game Number " << g+1 << "."<< gameList[g] << "\n";
	}
	cout<< "\n";
	
	int numberRoster[5];
	int numberRosterInput;
	for (int a = 0; a < 5; a++){
		cout<< "Enter a number: ";
		cin >> numberRosterInput;
		numberRoster[a] = numberRosterInput;
	}
	cout<< "Complete number list: ";
	for (int b = 0; b < 5; b++){
		cout<< numberRoster[b] << " ";
	}
	cout<< "\n\n";
	
	//STRUCTURES
	
	struct{
		int age;
		string name;
	} identity;
	
	identity.age = 19;
	identity.name = "Enzo Basuil";
	
	cout<< "My name is: " << identity.name <<"\n";
	cout<< "I am "<< identity.age<<" years old";
	
	struct game{
		string gamename;
		int releaseyear;
		string genre;
		int priceInPesos;
	};
	
	game GodOfWar = {"God of War", 2022, "Open World RPG", 2990};
	game MK11 = {"Mortal Kombat 11", 2019, "Fighting", 2300};
	game Genshin = {"Genshin Impact", 2020, "Open World RPG", 0};
	game LiesOfP = {"Lies of P", 2023, "Souls-like", 2500};
	game Hearthstone = {"Hearthstone", 2014, "Card Strategy Game", 0};
	
	cout<<"Game Information: \n\n";
	
	cout<<GodOfWar.gamename <<", released in "<<GodOfWar.releaseyear<<". It's genre is: "<<GodOfWar.genre <<" and it costs "<<GodOfWar.priceInPesos << " pesos.\n";
	cout<<MK11.gamename <<", released in "<<MK11.releaseyear<<". It's genre is: "<<MK11.genre <<" and it costs "<<MK11.priceInPesos << " pesos.\n"; 
	cout<<Genshin.gamename <<", released in "<<Genshin.releaseyear<<". It's genre is: "<<Genshin.genre <<" and it costs "<<Genshin.priceInPesos << " pesos.\n"; 
	cout<<LiesOfP.gamename <<", released in "<<LiesOfP.releaseyear<<". It's genre is: "<<LiesOfP.genre <<" and it costs "<<LiesOfP.priceInPesos << " pesos.\n"; 
	cout<<Hearthstone.gamename <<", released in "<<Hearthstone.releaseyear<<". It's genre is: "<<Hearthstone.genre <<" and it costs "<<Hearthstone.priceInPesos << " pesos.\n\n";  
	
	//DREADED POINTERS 

	int regularNum = 57;
	int* numAddress = &regularNum;
	
	*numAddress = 61;
	
	cout << "Your number is: " <<*numAddress << "\n";
	cout << "Its address is: " <<numAddress;
	
		//EXERCISE 1: RESTAURANT BILLING SYSTEM
	
	cout<<"Welcome to SuillyEats! Here is the menu: \n\n";
	
	cout << "1. Spam Hijiki Fried Rice.....PHP 495.00\n";
	cout << "2. Buttermilk Waffle.....PHP 395.00\n";
	cout << "3. Homemade Spam and Egg.....PHP 425.00\n";
	cout << "4. Fish and Chips.....PHP 695.00\n";
	cout << "5. Pressed Cuban.....PHP 410.00\n";
	cout << "6. Winner Winner Chicken Dinner.....PHP 495.00\n";
	cout << "7. ABC Skillet Breakfast.....PHP 550.00\n";
	cout << "8. Breakfast Quesadilla.....PHP 395.00\n";
	cout << "9. Smoked Sausages.....PHP 595.00\n";
	cout << "10. Caramel Macchiato.....PHP 295.00\n";
	cout << "11. Four Seasons.....PHP 125.00\n\n";
	
	cout << "Place your order here (press [0] to stop ordering): \n\n";
	
	float totalPrice = 0;
	int orderInput;
	
	while (orderInput != 0){
		cout<< "Order Item: ";
		cin >> orderInput;
		switch (orderInput){
			case 1:
				totalPrice = totalPrice + 495;
				cout<< "Excellent Choice! Anything else?" <<"\n\n";
				break;
			case 2:
				totalPrice = totalPrice + 395;
				cout<< "Excellent Choice! Anything else?" <<"\n\n";
				break;
			case 3:
				totalPrice = totalPrice + 425;
				cout<< "Excellent Choice! Anything else?" <<"\n\n";
				break;
			case 4:
				totalPrice = totalPrice + 695;
				cout<< "Excellent Choice! Anything else?" <<"\n\n";
				break;
			case 5:
				totalPrice = totalPrice + 410;
				cout<< "Excellent Choice! Anything else?" <<"\n\n";
				break;
			case 6:
				totalPrice = totalPrice + 495;
				cout<< "Excellent Choice! Anything else?" <<"\n\n";
				break;
			case 7:
				totalPrice = totalPrice + 550;
				cout<< "Excellent Choice! Anything else?" <<"\n\n";
				break;
			case 8:
				totalPrice = totalPrice + 395;
				cout<< "Excellent Choice! Anything else?" <<"\n\n";
				break;
			case 9:
				totalPrice = totalPrice + 595;
				cout<< "Excellent Choice! Anything else?" <<"\n\n";
				break;
			case 10:
				totalPrice = totalPrice + 295;
				cout<< "Excellent Choice! Anything else?" <<"\n\n";
				break;
			case 11:
				totalPrice = totalPrice + 125;
				cout<< "Excellent Choice! Anything else?" <<"\n\n";
				break;
			case 0:
				cout<< "Thank you for ordering! Please wait a second." <<"\n\n";
				break;
			default:
				cout<< "That's not on the menu. Maybe try something else???" <<"\n\n";
				break;
		}
	}
	
	int taxedCost = totalPrice * .12;
	int finalCost = totalPrice + taxedCost;
	
	cout<<"Thank you for ordering! Your total meal cost is: " <<totalPrice;
	cout<<"Your added tax value is: " <<taxedCost;
	cout<<"Your final total meal cost is: "<<finalCost;
	

	return 0;
}
