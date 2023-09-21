#include <iostream>
#include "menu.h" 
using namespace std;

int main() {
	int number1,sum;
	int x;
	int arr[15] = { 0 };
	int j = sizeof(arr) / sizeof(arr[0]);
	sum = 0;
	Menu mainMenu;
	mainMenu.showMenu();
	cin >> number1;
	if (number1 == 1) {
		mainMenu.addition();
		cin >> j;
		if (j > 15) {
			cout << "Max 15 number can use for process !!!\n ";
			return 0;
		}
		cout << " Now enter the numbers for addition \n";
		for (int i = 0;i < j;i++) {
			cin >> arr[i];
			cout << i+1 << ". number is : " << arr[i] << endl;
			sum += arr[i];
		}
		cout << "result: " << sum << endl;
	}
	else if (number1 == 2) {

		mainMenu.subtraction();
		cin >> j;
		if (j > 15) {
			cout << "Max 15 number can use for process !!!\n ";
			return 0;
		}
		cout << " Now enter the numbers for substraction \n";
		for (int i = 0;i < j;i++) {
			cin >> arr[i];
			cout << i + 1 << ". number is : " << arr[i] << endl;
		}
		sum = arr[0]-arr[1]-arr[2]-arr[3]-arr[4]-arr[5]-arr[6]-arr[7]-arr[9]
			-arr[10]-arr[11]-arr[12]-arr[13]-arr[14];
		
		cout << "result : " << sum << endl;
	}
	else if (number1 == 3) {
		sum = 1;
		mainMenu.multiplication();
		cin >> j;
		if (j > 15) {
			cout << "Max 15 number can use for process !!!\n ";
			return 0;
		}
		cout << " Now enter the numbers for multiplication \n";
		for (int i = 0;i < j;i++) {
			cin >> arr[i];
			cout << i + 1 << ". number is : " << arr[i] << endl;
			sum *= arr[i];
		}
		cout << "result: " << sum << endl;
	}
	else if (number1 == 4) {
		try {
			mainMenu.dividing();
			cin >> arr[0];
			cin >> arr[1];
			if (arr[1] == 0)
				throw 100;

			else {
				cout << "result: " << arr[0] / arr[1] << endl;
			}
		}
		catch (int errorNo) {
			cout << " Divider cannot be 0 ! error no : " << errorNo << endl;
		}

	}
	else 
		cout << " pls enter number (1-4) !\n";
	
	return 0;
}
