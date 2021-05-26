#pragma once
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
struct node
{
	int id;
	char symptom[500];
	char diagnosis[500];
	char medicine[500];
	char addmission[30];
	struct node* next;
	bool diagnose;
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
class Exam
{
	void diagnosis()
	{
		int n;
		node* p = NULL, * prev = NULL;
		p = new node;
		prev = head;
		p = head;
		int ch;
		cout << "enter Patient ID" << endl;
		cin >> ch;
		if (check_id(ch)) {
			while (p->id != ch)
			{
				prev = p;
				p = p->next;
			}
			p->diagnose = true;
			cout << "Enter Symptoms" << endl;
			cin >> p->symptom;
			cout << "Enter Diagnosis" << endl;
			cin >> p->diagnosis;
			cout << "Enter Medicines" << endl;
			cin >> p->medicine;
			cout << "Admit Required to Hospital?" << endl;
			cin >> p->addmission;

		}

		else
			cout << "ID is not Registered\n";

	}
};

