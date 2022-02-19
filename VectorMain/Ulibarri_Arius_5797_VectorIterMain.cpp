#include <iostream>
#include <algorithm>
#include "Ulibarri_Arius_5797_Vector.h"
#include "Random.h"     // utility by KV
using namespace std;

int main()
{
	Vector<int> myvec;
	random_vector(25, 1, 100, myvec, 0);

	Vector<int>::iterator itr; // Initialize an iterator

	// Prints myvec with an iterator
	cout << "Vector myvec printed with iterators:" << endl;
	for (itr = myvec.begin(); itr != myvec.end(); itr++)
		cout << *itr << " ";
	cout << endl << endl;

	// Sorts the vector
	sort(myvec.begin(), myvec.end());

	cout << "Vector myvec now sorted:" << endl;
	for (itr = myvec.begin(); itr != myvec.end(); itr++)
		cout << *itr << " ";
	cout << endl << endl;

	/* Asks user for a value to find and tries to find it 
	in the vector. If it's not found, it tells the user 
	on the console. (fixed)*/
	int tofind;
	cout << "Find which value in myvec? ";
	cin >> tofind;
	cout << endl << endl;

	if (tofind == *find(myvec.begin(), myvec.end(), tofind))
		cout << "Found value " << tofind << " :-)";
	else
		cout << "Value " << tofind << " not found :-(";
	cout << endl << endl;
	
	// Finds the max and min values in the vector
	Vector<int>::iterator max;
	Vector<int>::iterator min;

	max = max_element(myvec.begin(), myvec.end());
	min = min_element(myvec.begin(), myvec.end());

	cout << "The maximal and minimal values are: "
		<< *max << " and " << *min << endl << endl;

	// fills vector with 7's
	fill(myvec.begin(), myvec.end(), 7);

	cout << "Vector myvec covered in 7's ..." << endl;
	for (itr = myvec.begin(); itr != myvec.end(); itr++)
		cout << *itr << " ";
	cout << endl << endl;

	return 0;
}