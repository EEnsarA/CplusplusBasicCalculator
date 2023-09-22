#include "menu.h"

void Menu::showMenu() {
	cout << "******** C++ BASIC CALCULATOR ********" << endl;
	cout << "*     1) Addition                    *" << endl;
	cout << "*     2) Subtraction                 *" << endl;
	cout << "*     3) Multiplication              *" << endl;
	cout << "*     4) Dividing                    *" << endl;
	cout << "**************************************" << endl;
	cout << "Enter a number (1-4) , which process do you want ? \n\n";
}
void  Menu :: addition () {
		cout << " ********* Addition *********\n";
		cout << " How many numbers do you want to use your addition process ?\n";	
		cout << " Max 15 number can use for process !\n";
}
void  Menu::subtraction() {
	   cout << " ********* Substraction *********\n";
	   cout << " How many numbers do you want to use your substraction process ?\n";
	   cout << " Max 15 number can use for process !\n";
}
void  Menu::multiplication() {
	cout << " ********* Multiplication *********\n";
	cout << " How many numbers do you want to use your multiplication process ?\n";
	cout << " Max 15 number can use for process !\n";
}
void  Menu::dividing() {
	cout << " ********* Dividing *********\n";
	cout << " Enter two numbers for dividing : \n";
	
}
	
	



