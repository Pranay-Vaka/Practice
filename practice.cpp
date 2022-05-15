#include <iostream> // This is a header file that works with input and output objects such as cout 
#include <string>
#include <stdlib.h>
#include <cmath> // This contains a lot of math functions and variables
#include <fstream> // This will allow for creating reading and writing to files 
using namespace std;


void string_function() {
		cout << "My name is Pranay Vaka \n"; // This will put stuff onto the terminal and at the end of the statement you must put a semicolon at the end 
		// The \n means that there is a new line after the statement has been outputed. You can also use << endl
		cout << "What is your name?: ";
		string name;
		cin >> name; // This will take the user input and store it in the variable name
		cout << "Your name is " + name << endl;
}

void variables() {
		// You must name the data type of the variable before giving the variable name
		int num = 69; // This stores and integer which is a whole number
		double Double = 4.20; // This stores a decimal value that has a precision of 15 digits
		float Float = 6.9; // This stores a decimal value that has a precision of 6 to 7 digits
		char Char = 'c'; // This stores a single character and must use a single quote
		string String = "string"; // This stores a string which is a set of characters and must be stored in double quotes
		bool Boolean = true; // This stores boolean
		cout << num << endl; // You can output variables using the cout method
		
		cout << Boolean; // This will output 1 for true and 0 for false 

		int x = 1;
		int y = 2;

		int sum = x + y; // This will get the sum of the two variables
		cout << sum << endl; 

		int a = 1, b = 2; // You can declare more than one variable in one line 

		const string name = "Pranay"; // This is a constant that can't be changed during the run time

		cout << name << endl; 
		
		string firstname = "Anand";
		string lastname = "Vaka";
		string fullname = firstname.append(lastname); // You can use the append function to put two names together 

		cout << firstname << firstname.length() << endl; // You can access the length of the string using length() function
		cout << firstname << firstname.size() << endl; // You can use the size function and that does the same thing
		
		cout << firstname[0] << endl; // You can use the indexes on the string to access the items
		
		
		
}

void conditions() {
		
		if (20 > 18) { // The condition is in parenthesis
				cout << "20 is bigger than 18\n"; // Executed code	
		}
		
		else if (20 < 18) { // The elif statement
				cout << "Maths is broken\n"; 
		}

		else {
				cout << "This is the else statement\n"; // Code in the else statement
		}


		// Instead of using multiple lines for the if elif statement, you can use one line using this

		string result = (20 > 18) ? "20 is bigger than 18" : "Maths is broken";
		
		int day = 4;

		switch (day) { // This switches between cases due to the condition in the parenthesis
				case 1:
						cout << 1;
						break; // If you break then you stop the checkning of the rest of the cases 

				case 2:
						cout << 2;
						break;

				case 3:
						cout << 3;
						break;

				case 4:
						cout << 4; 
						break;

				default: // This is the default case and must be the last case in the switch statement. Does not need the break statement 
						cout << "Default";
		}
	
}

void loops() {
		int i = 0;
		while (i <= 5) { // This while loop will output numbers from 0 to 5
				cout << i << endl; 
				i++;
		}

		int x = 0;
		do { // Do this piece of code
				cout << x << endl;
				x++;
		}
		while (x <= 5); // While x is less that or equal to 5
		
		for (int i = 0; i <= 5; i++) { // For loop that incraments i by 1
				cout << i << endl;
		}
		
		for (int i = 0; i <= 10; i += 2) { // For loop that incraments i by 2
				cout << i << endl;
		}		
}

void arrays() {
		string cars[4] = {"Toyota", "Ford", "Mazda", "Lamborghini"}; // There is a limited amount of memory that you can store a cars with and the data type must be specified
		cout << cars[0] << endl; // Outputs the 0th element of the cars array
		
		for (int i = 0; i <= 10; i ++) { // For loop that loops through the array
				cout << cars[i] << endl; // Outputs the elements
		}

		int nums[] = {1, 2, 3}; // You don't need to specify the size of the array, but you can't add any further number of elements

		int numbers[4] = {1, 2, 3}; // You can leave some of the elements empty

		string food = "Pizza";
		string &meal = food; // Anything with the & before the variable name means that it is a memory address and references to another variable
		// It is a hexadecimal
		// A pointer is a variable that stores the memory address in it value
		// The data type must be the same

		string* ptr = &food; // This is how you get the address into a pointer 
		cout << ptr << endl; // This will output the memory address
		cout << *ptr << endl; // This will output the actual value and is called dereferncing
		
		// You can change the value of the pointer 

		*ptr = "Hamburger";

		// You can dealocate the memory address assigned to the pointer using this
		delete ptr;
}


void param(string fname, string lname = "Vaka") { // You must specify the data type of the parameter 
		cout << fname + " " + lname<< endl; // You can also use a default parameter
}


int add(int x, int y) { // You must specify the data type of the value that is returned 
		return x + y;
}

void references(int &x, int &y) { // Overloading a function is when you make multiple functions with the same name, but different parameters 
		cout << x + y << endl;

}


class Car { // The class called Car
		private: // The access specifier 
				string brand;
				string model;
				int year;
				Car(string x, string y, int z) {
						brand = x;
						model = y;
						year = z;
				}

		public: // This is a public access specifier and so means that anything can access the class
				void waffle() {
						cout << "waffle" << endl;	
				}
				
		private: // The private access specifier means that the members cannot be accessed outside the class 
				void get_brand() { // In order to access private class members, you must make getters and setters
						cout << brand << endl;
				}
				int set_brand(int b) { 
						brand = b;		
				}


		
		protected: // The protected access specifier means that only inherited classes can access the members, but nothing else
				void get_year() {
						cout << year << endl;
				}

};

/* Constructor can be defined outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}
*/

class Toyota: public Car { // This is how you inherit a class
		public:
				string model = "Toyota";
				
				void waffle() { // This is how you override a method 
						cout << "new waffle" << endl;		
				}
};

class ex_class: public Car, public Toyota { // This is how you inherit more than one class for a child class
};

/*
void files() {
		ofstream Myfile("filename.txt"); // This will create and open the filename.txt as Myfile 
		Myfile << "File has been edited in c++" << endl;// This will write into Myfile 
		Myfile.close(); // It is good practice to close the file so that any unnecessary memory space is freed up

		ifstream Myfile("filename.txt"); // This will open the file as Myfile and give you the ability to read from it

		string text; // This creates the variable string which will parse through the text file

		while(getline (Myfile, text)) { // You can use the getline function when using the ifstream which will go through each line of the text file
				cout << text << endl; // Outputs the current line it is on
		}

		Myfile.close();
}
*/
void exceptions() {
		try { // Will try something
				int age = 15;
				if (age >= 18) {
						cout << "Access granted - you are old enough.";
				} 

				else {
						throw (age); // If there is an exception then you will throw an error
				}
		}
		catch (int myNum) { // This will stop any error from popping up on the terminal and will do this instead 
				cout << "Access denied - You must be at least 18 years old.\n";
				cout << "Age is: " << myNum; 
		}
}
void something() 
{
	cout << "help" << endl;
} 

int main() { // Anything in this function must be executed and an integer is returned
	srand(time(NULL));

	float rand_num = (rand() % 10) + 1;
	cout << rand_num << endl;
	return 0;
}
