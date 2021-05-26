#pragma once
#include<iostream>
#include<ctime>
#include<cstdlib>
#include "Exam.h"
using namespace std;
struct node
{
	int id;
	char date[20];
	char cost[20];
	struct node* next;
	bool diagnose;
	char symptom[500];
	char diagnosis[500];
	char medicine[500];
	char addmission[30];
	
};
struct node* head, * lastptr;
bool check = true;
int arr[20] = { 0 }, i = 0;
bool check_id(int ch)
{
	for (int a = 0; a < i; a++)
	{
		if (ch == arr[a])
		{
			return true;
		}
	}
	return false;
};
class Appointment
{
public:
	void addAppointment()
	{


		node* p;
		p = new node;
		p->diagnose = false;
		cout << "enter Patient ID" << endl;
		cin >> p->id;
		cout << "enter Patient First name" << endl;
		cin >> p->contact;
		fflush(stdin);
		cout << "enter Patient CNIC" << endl;
		cin.getline(p->cnic, 100);
		fflush(stdin);
		cout << "enter Patient Address" << endl;
		cin.getline(p->address, 1000);

		p->next = NULL;
		arr[i] = p->id;

		i++;
		if (check)
		{
			head = p;
			lastptr = p;
			check = false;
		}
		else
		{
			lastptr->next = p;
			lastptr = p;
		}


	}
	void showAppointment()
	{
		int n;
		node* current = NULL, * prev = NULL;
		prev = head;
		current = head;
		int ch;
		cout << "enter Patient ID" << endl;
		cin >> ch;
		if (check_id(ch))
		{
			while (current->id != ch)
			{
				prev = current;
				current = current->next;
			}

			cout << " Patient Appointment Date" << endl;
			cout << current->date << endl;
			cout << "Apoitment Cost" << endl;
			
			cout << "*********************************" << endl;
			if (current->diagnose) {
				cout << "Enter Symptoms" << endl;
				cout << current->symptom << endl;
				cout << "Enter Diagnosis" << endl;
				cout << current->diagnosis << endl;
				cout << "Enter Medicines" << endl;
				cout << current->medicine << endl;
				cout << "Admit Required to Hospital?" << endl;
				cout << current->addmission << endl;
			}
		}
		else
		{
			cout << "ID not present" << endl;
		}
	}
	
	void deleteList()
	{
		int counter = 0;
		node* current = NULL, * prev = NULL;
		//current =new node;
		prev = head;
		current = head;
		int ch;
		cout << "Enter the ID: ";
		cin >> ch;
		if (check_id(ch)) {
			//	temp=head;
			while (current->id != ch)
			{
				prev = current;
				current = current->next;
			}
			prev->next = current->next;
			free(current);

			//  	while(head != NULL)
			//    {
			//        temp = head;
			//        head = head->next;
			//
			//        free(temp);
			//    }
			for (int a = 0; a < i; a++)
			{
				if (arr[a] == ch) {
					for (int j = a; j < i; j++) {
						arr[j] = arr[j + 1];
					}
					i--;
				}
			}
			cout << "SUCCESSFULLY DELETED ALL NODES OF LINKED LIST\n";
		}
		else
			cout << "ID not present" << endl;
	}
	
	void update_data() {
		node* current = NULL, * prev = NULL;
		current = head;
		prev = head;
		int id, ch;
		cout << "enter ID" << endl;
		cin >> id;
		if (check_id(id)) {
			while (current->id != id)
			{
				prev = current;
				current = current->next;
			}
			
			cout << "chose number" << endl;
			cin >> ch;
			if (ch == 1) {
				cout << "enter New date" << endl;
				cin >> current->date;
			}
			else if (ch == 2) {
				cout << "enter new cost" << endl;
				cin >> current->cost;
			}
			
		}
		else
			cout << "ID not present" << endl;
	}

};

