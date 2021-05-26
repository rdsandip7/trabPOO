// trabPOO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Patient.h"
void dis()
{
	cout << "1 Add New Patient Record " << endl;
	cout << "2 Add Patient prescription " << endl;
	cout << "3 Full History of the Patient" << endl;
	cout << "4 delete Patient Record" << endl;
	cout << "5 update Patient Record" << endl;
}
void menu()
{
	cout << "press 1 to doctor menu" << endl;
	cout << "press 2 to patients menu" << endl;
	cout << "press 3 to pharmacist menu" << endl;
}
int main()
{
	struct node* head = NULL;
	Patient u;
	int i = 0;
	do {
		menu();
		cin >> i;
		if (i == 1)
			u.add();
		else if (i == 2)
			u.diagnosis();
		else if (i == 3)
			u.show();
		else if (i == 4)
			u.deleteList();
		else if (i == 5)
			u.update_data();
	} while (1);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
