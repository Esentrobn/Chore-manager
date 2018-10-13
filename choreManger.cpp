#include<iostream>
#include<fstream>
#include<string>
#include "LinkedList.h"
using namespace std;

void printList(LinkedList<string> aList);
void insertList(LinkedList<string>& aList);

int main()
{

	LinkedList<string> myTasks;

	insertList(myTasks);
	/* Tasks inserted
	
	Take out the trash
	Clean room
	Go to the gym
	Study
	Go to class

	*/

	cout << "There are " << myTasks.getLength() << " items on the list." << endl;
	printList(myTasks);

	int decisionDel;
	cout << "Which item would you like to delete? Use -999 to stop: ";
	cin >> decisionDel;
	cout << endl;

	while(decisionDel != -999)
	{
		try
		{
			myTasks.remove(decisionDel);
		}

		catch(PrecondViolatedExcep e)
		{
			cout << e.what() << endl;
		}

		printList(myTasks);
		cout << "Which item would you like to delete? Use -999 to stop: ";
		cin >> decisionDel;
		cout << endl;
	}

	printList(myTasks);
	string choice;
	cout << endl << "Add an item to your list? yes or no: ";
	cin >> choice;
	cout << endl;
	
	while(choice == "yes")
	{
		int pos;
		cout << "Position: ";
		cin >> pos;
		cin.ignore();
		
		string item;
		cout << endl << "Item: ";
		getline(cin,item);
		
		try
		{
			myTasks.insert(pos,item);
		}
		
		catch(PrecondViolatedExcep e)
		{
			cout << e.what() << endl;
		}
		
		printList(myTasks);
		
		cout << endl << "Add an item to your list? yes or no: ";
		cin >> choice;
		cout << endl;
	}

	printList(myTasks);

	return 0;
}
	
			
	


	

	

void printList(LinkedList<string> aList)
{
	cout << "************Today's List************" << endl;
	for(int i = 1; i <= aList.getLength(); i++)
	{
		cout << i << "  " << aList.getEntry(i) << endl;;
	}
}

void insertList(LinkedList<string>& aList)
{
	
	int position = 0;
	ifstream inFile;
	inFile.open("chores.txt");

	string nextTask;

	while(getline(inFile,nextTask))
	{
		position++;
		aList.insert(position, nextTask);
		
	}

	inFile.close();
}

	
	
	
