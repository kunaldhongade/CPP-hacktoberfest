#include<iostream>
using namespace std;
class Linklist {
public:
	Linklist* Next;
	int Data;

	Linklist() //Constructor to Initialize null values to the data members
	{
		this->Data = 0;
		this->Next = NULL;
	}
	Linklist(Linklist* n) //Parameterized Constructor to Initilize the data members
	{
		this->Next = n;
		this->Data = n->Data;
	}
};
class Circularly_Linked_List {
private:
	Linklist* Rear;
public:
	Circularly_Linked_List() //Constructor to Initialize null values to the data members
	{
		this->Rear = NULL;
	}
	void Add_Node(int data) //Member Function to Insert new node
	{
		Linklist* n = new Linklist();
		n->Data = data;
		if (Rear == NULL)
		{
			Rear = n;
			Rear->Next = Rear;
			cout << "Node is Added at Front" << endl;
		}
		else
		{
			Linklist* temp = Rear->Next;
			Rear->Next = n;
			n->Next = temp;
			Rear = Rear->Next;
			cout << "Node is Added as Rear" << endl;
		}
	}
	void Display() //This Member Function is used to Display All the Elements in the Circular Queue Linklist
	{
		if (Rear != NULL)
		{
			cout << endl;
			Linklist* temp = Rear->Next;
			cout << endl << "(NODE ADDRESS , DATA VALUE , NEXT NODE ADDRESS)" << endl << endl;
			do
			{
				cout << "(" << temp << "," << temp->Data << "," << temp->Next << ")--->";
				temp = temp->Next;
			} while (temp != Rear->Next);
			cout << endl;
		}
		else
		{
			cout << "Cannot Display Queue is Empty" << endl;
		}

	}
	void Delete() //This Member Function is used to Delete Front Element from the Circular Queue Linklist
	{
		if (Rear != NULL)
		{
			if (Rear->Next != Rear && Rear != NULL)
			{
				Linklist* temp = Rear->Next;
				Rear->Next = temp->Next;
				delete temp;
				temp = NULL;
				cout << "Node is Deleted From Front" << endl;
			}
			else if (Rear->Next == Rear)
			{
				delete Rear;
				Rear = NULL;
				cout << "Last Node is Deleted From Front" << endl;
			}
			else
			{
				cout << "Queue's Linklist is empty cannot Delete" << endl;
			}
		}

		else
		{
			cout << "Queue's Linklist is empty cannot Delete" << endl;
		}
	}
};
int main()
{
	Circularly_Linked_List c;
	cout << "Enter 1 to Add Node" << endl;
	cout << "Enter 2 to Delete Node From Front" << endl;
	cout << "Enter 3 to Display Node" << endl;
	cout << "Enter 0 to Exit" << endl;
	string option;
	int data;
	cout << endl << "Enter Option = ";
	cin >> option;
	while (option != "0")
	{
		if (option == "1")
		{
			cout << "Enter Data to Add Node = ";
			cin >> data;
			c.Add_Node(data);
		}
		else if (option == "2")
		{
			c.Delete();
		}
		else if (option=="3")
		{
			c.Display();
		}
		else
		{
			cout << endl << "Invalid Option" << endl;
		}
		cout << endl << "Enter Option = ";
		cin >> option;
	}
	return 0;
}