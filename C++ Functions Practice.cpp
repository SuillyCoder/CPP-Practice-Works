#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;


//FUNCTIONS FOR EXERCISE 1

double calculateArea (double a, double b, string shapeType){
	

	if (shapeType == "Rectangle" || shapeType == "rectangle" || shapeType == "RECTANGLE"){
		double recArea = a * b;
		return recArea;
	}
	else if(shapeType == "Triangle" || shapeType == "triangle" || shapeType == "TRIANGLE" ){
		double triArea = (a*b)/2;
		return triArea;
	}
	else if(shapeType == "Ellipse" || shapeType == "ellipse" ||  shapeType == "ELLIPSE"){
		double ellArea = 	M_PI*a*b;
		return ellArea;
	}
}


//FUNCTIONS FOR EXERCISE 2

int square (int x){
	return (x*x);
}

int cube (int y){
	return (y*y*y);
}

int absolute (int z){
	return abs(z);
}


//FUNCTIONS FOR EXERCISE 3

int factorial(int number){
	if (number > 1){
		return number * factorial(number -1);
	}
	else{
		return 1;
	}
}

int main(){
	
	// FUNCTIONS EXERCISE 1 (Parameter Passing)
	
	double firstValue, secondValue;
	string shape;
	
	cout<<"Enter letter A (Base / Width): ";
	cin>>firstValue;
	cout<<"Enter letter B (Height / Length): ";
	cin>>secondValue;
	
	bool validShapes = (shape == "Triangle" || shape == "triangle" || 
	shape == "Ellipse" || shape == "ellipse" ||
	shape == "Rectangle" || shape == "rectangle");
	
	while(true){
		
		cout<< "What kind of shape would you want to calculate the area for?: ";
		cin >> shape;
		
		bool validShapes = (shape == "Triangle" || shape == "triangle" || shape == "TRIANGLE" || 
		shape == "Ellipse" || shape == "ellipse" ||  shape == "ELLIPSE" || 
		shape == "Rectangle" || shape == "rectangle"  || shape == "RECTANGLE");
		
		if (validShapes == 1){
 		break;
 		}
 		else{
 			cout<<"Please input a valid shape \n\n";
		 }
	}
	
	double result = calculateArea(firstValue, secondValue, shape);
 	cout<< "\nThe area of a "<<shape<<" is equivalent to: " << setprecision(4) <<  result <<" units.\n\n";
	
	//FUNCTIONS EXERCISE 2 (Array Passing)
	
	int (*functionList[3])(int){square, cube, absolute};
	int numberInput;
	
	cout<< "Enter a number: ";
	cin>> numberInput;
	for (int i = 0; i < 3; i++){

		switch(i){
			case 0: 
				cout<<"\n"<<"The square of "<<numberInput <<" is: " <<functionList[i](numberInput) <<"\n";
				break;
			case 1: 
				cout<<"The cube of "<<numberInput <<" is: " <<functionList[i](numberInput) <<"\n";
				break;
			case 2: 
				cout<<"The absolute value of "<<numberInput <<" is: " <<functionList[i](numberInput) <<"\n";
				break;
		}
		
	}
	
	//FUNCTIONS EXERCISE 3 (Recursion)
	
	while(true){
		
		int factNum;
		cout<<"\nInput a number: ";
		cin>> factNum;
	
		if (factNum <= 0){
			cout<<"Please input a number greater than 0\n\n";
		}
		else{
			int factResult = factorial(factNum);
			cout<<"The factorial result of "<<factNum<< " is: "<<factResult;
			break;
		}
	}
	
	
	return 0;
	
}


