#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

const int DES_SIZE = 51, DATE_SIZE = 11;

struct Inventory
{
	char descr[DES_SIZE];		// item description
	int quantity;				// quantity on hand
	int wholesaleC;				// wholesale cost
	int retailC;				// retail cost
	char dateAdded[DATE_SIZE];	// date added to inventory

};

// function prototypes
void userFillInv(Inventory &, fstream &, int &);

int dispMenu();
void newRecs(Inventory &, fstream &, int &);
void dispRec(Inventory &, fstream &, int );
void chngRec(Inventory &, fstream &, int );


//	*=== START MAIN FUNCTION ===*
int main()
{
	int numRecords = 0;			// holds how many records the user made
	int task = 0;			// the task that the user selects from the menu

	// create the file. truncate the contents(delete) if the file already exists
	fstream invFile("Invent.dat", ios::in | ios::out | ios::binary | ios::trunc);

	Inventory product;

	// test for errors in creating or opening the file
	if (!invFile)
	{
		cout << "Error opening the file. Program terminating\n"; 
	}

	// user fills in info on the product. user can create as many records as necessary
	userFillInv(product, invFile, numRecords);
	
	// =================================================

	
	// Menu
	while (task != 4)
	{
		task = dispMenu();

		switch (task)
		{
		case 1:
			newRecs(product,invFile,numRecords);
			break;

		case 2:
			dispRec(product,invFile,numRecords);
			break;

		case 3:
			chngRec(product, invFile, numRecords);
			break;

		case 4: 
			break; // if case 4 then program halts (defined in menu function)

		default:
			cout << "Error! Invalid task\n";
		}

	}

	cout << "Program end\n";	

	// close the file
	invFile.close();


	return 0;

} // *=== END MAIN FUNCTION ===*


// function definitions ==================================================


// ====== FUNCTION DEFINITION ======
// let user fill in info for a product
// user can create as many records as necessary
void userFillInv(Inventory &product, fstream &fileName, int &records)
{
	char anotherR;		// To hold Y or N
	int numRecords = 0; // keeps track of number of records

	do
	{
		cout << "Enter the following data about a product:\n";

		cout << "Item Description: ";
		cin.getline(product.descr, DES_SIZE);

		do {
			cout << "Quantity on hand: ";
			cin >> product.quantity;
			cin.ignore(); // ignore the newline char
		} while (product.quantity < 0);

		do {
			cout << "Wholesale cost: $";
			cin >> product.wholesaleC;
			cin.ignore(); // ignore the newline char
		} while (product.wholesaleC < 0);

		do {
			cout << "Retail cost: $";
			cin >> product.retailC;
			cin.ignore(); // ignore the newline char
		} while (product.retailC < 0);
		
		do{
			cout << "Date added to inventory (MM/DD/YYYY): ";
			cin.getline(product.dateAdded, DATE_SIZE);
		} while (!(ispunct(product.dateAdded[2])) || !(ispunct(product.dateAdded[5])));

		// write the contents of the product structure to the file
		fileName.write(reinterpret_cast<char *>(&product), sizeof(product));

		// determine if user wants to write another record
		cout << "Do you want to write another record? (y for yes)\n";
		cin >> anotherR;
		cin.ignore(); // ignore the newline char

		++numRecords;

	} while (anotherR == 'Y' || anotherR == 'y');

	records += numRecords;

}

// ====== FUNCTION DEFINITION ======
// show the menu
int dispMenu()
{
	int choice;
	cout << "\n\n =================================\n";
	cout << "\tMenu\n";
	cout << "Choose a task:\n";
	cout << "1) add new records to the file\n";
	cout << "2) display any record in the file\n";
	cout << "3) change any record in the file\n";
	cout << "4) Quit\n";
	cout << "\n =================================\n\n";
	cin >> choice;
	cin.ignore(); // ignore the newline char

	return choice;
}

// ====== FUNCTION DEFINITION ======
// user adds new records. keeps track of total number of records
void newRecs(Inventory &product,fstream &fileName, int &records)
{
	fileName.clear(); // clear flags

	int numRecordAdded = 0; // number of new records added
	char anotherR;		// To hold Y or N

	// go to the end of the file to append the new record
	fileName.seekg(0L, ios::end);
	
	cout << "\n\tAdd new records\n";
	do
	{
		cout << "Enter the following data about a product:\n";

		cout << "Item Description: ";
		cin.getline(product.descr, DES_SIZE);

		do {
			cout << "Quantity on hand: ";
			cin >> product.quantity;
			cin.ignore(); // ignore the newline char
		} while (product.quantity < 0);

		do {
			cout << "Wholesale cost: $";
			cin >> product.wholesaleC;
			cin.ignore(); // ignore the newline char
		} while (product.wholesaleC < 0);

		do {
			cout << "Retail cost: $";
			cin >> product.retailC;
			cin.ignore(); // ignore the newline char
		} while (product.retailC < 0);

		do{
			cout << "Date added to inventory (MM/DD/YYYY): ";
			cin.getline(product.dateAdded, DATE_SIZE);
		} while (!(ispunct(product.dateAdded[2])) || !(ispunct(product.dateAdded[5])));

		// write the contents of the product structure to the file
		fileName.write(reinterpret_cast<char *>(&product), sizeof(product));

		// determine if user wants to write another record
		cout << "Do you want to write another record? (y for yes)\n";
		cin >> anotherR;
		cin.ignore(); // ignore the newline char

		++numRecordAdded;

	} while (anotherR == 'Y' || anotherR == 'y');

	 records += numRecordAdded;

}

// ====== FUNCTION DEFINITION ======
// Display any record in the file
void dispRec(Inventory &product, fstream &fileName, int records)
{
	fileName.clear(); // clear flags

	cout << "\n\tDisplay a record\n";
	int recNum;
	
	// seek the file to the beginning
	fileName.seekg(0L, ios::beg);

	cout << "You have " << records << " records" << endl;
	cout << "Which record would you like to display? ";
	cin >> recNum;
	cin.ignore(); // ignore the newline char
	--recNum; // minus 1 to seek properly

	// seek to the record, store(read it), and display it
	fileName.seekg(sizeof(product) * recNum, ios::beg);

	fileName.read(reinterpret_cast<char *>(&product), sizeof(product));

	cout << "Displaying record #" << (recNum + 1) << endl << endl;


	cout << "Item description: " << product.descr << endl;

	cout << "Quantity on hand: " << product.quantity << endl;

	cout << "Wholesale cost: " << product.wholesaleC << endl;

	cout << "Retail cost: " << product.retailC << endl;

	cout << "Date added to inventory (MM/DD/YYYY): " << product.dateAdded << endl;

	// seek the file back to the beginning
	fileName.seekg(0L, ios::beg);

}

// ====== FUNCTION DEFINITION ======
// change a record specified by the user
void chngRec(Inventory &product, fstream &fileName, int records)
{
	fileName.clear(); // clear flags
	int recCh;		// record to change

	cout << "\n\tChange a record\n";

	cout << "You have " << records << " records" << endl;
	cout << "Which record would you like to change? ";
	cin >> recCh;
	cin.ignore(); // ignore the newline char
	--recCh; // minus 1 to seek properly

	// seek to the record
	fileName.seekg(sizeof(product) * recCh, ios::beg);


	// let the user change the record
	cout << "Changing record #" << (recCh + 1) << endl << endl;

	cout << "Enter the following data about a product:\n";

	cout << "Item Description: ";
	cin.getline(product.descr, DES_SIZE);

	do {
		cout << "Quantity on hand: ";
		cin >> product.quantity;
		cin.ignore(); // ignore the newline char
	} while (product.quantity < 0);

	do {
		cout << "Wholesale cost: $";
		cin >> product.wholesaleC;
		cin.ignore(); // ignore the newline char
	} while (product.wholesaleC < 0);

	do {
		cout << "Retail cost: $";
		cin >> product.retailC;
		cin.ignore(); // ignore the newline char
	} while (product.retailC < 0);

	do{
		cout << "Date added to inventory (MM/DD/YYYY): ";
		cin.getline(product.dateAdded, DATE_SIZE);
	} while (!(ispunct(product.dateAdded[2])) || !(ispunct(product.dateAdded[5])));

	// rewrite over record in the file
	fileName.write(reinterpret_cast<char *>(&product), sizeof(product));

	// seek the file back to the beginning
	fileName.seekg(0L, ios::end);
	cout << "The file has been rewritten\n";

}