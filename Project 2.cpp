/*Mohammad Abdelrahman
CIS 278
Project 2
A program to chcek an password in a special format 
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int getLength(int);
int sumDigits(int);
void getInt(int&,int&);
int singleDigit(int);
bool valid(int);

int main(){
	int pword, size = 8;
	cout << "Enter a password to be checked!" << endl;
	cin >> pword;
	if (pword % 2 == 0 && valid(pword)){
		cout << "Valid password" << endl;
		return 0;
	}
	else
		cout << "Invalid password" << endl;
		do{
		getInt(pword, size);
		} while (!(pword % 2 == 0 && valid(pword)));
	cout << "A valid password= " << pword << endl;

	return 0;
}

int getLength(int val){

	if (val < 10)
		return 1;
	return getLength (val / 10) + 1;
}
int sumDigits(int value){
	int sum = 0;

	if (value < 10)
		return sum += value;
	else
		return sum += sumDigits(value / 10) + value % 10;
}
void getInt(int& number, int& size){
		number = 1 + (rand() % 500000);
		size = getLength(number);
}
int singleDigit(int value){
	int sum = sumDigits(value);
	while (sum >= 10)
		sum = sumDigits(sum);
	return sum;
}
bool valid(int pword){
	if (singleDigit(pword) == pword % 10)
		return true;
	else
		return false;
}