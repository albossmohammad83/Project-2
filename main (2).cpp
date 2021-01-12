// program that does what it says on the board

#include <iostream>
#include <cstdlib>
#include <climits>
#include <ctime>
using namespace std;

int numDig(int&);
void getQuant(int& n);

int main ()  {
	 int howmany;   // number of values being generated
	 int rnum; 
	 int largest = INT_MIN;   // largest of all values generated
	 int sum = 0;

	 srand( time(NULL) );


	 getQuant(howmany);

	 for (int i = 1;  i<= howmany; i++){
           rnum = rand() % 100 +1;
		 cout << "value is " << rnum << endl;
           sum = sum + rnum;

		 if (rnum > largest)
                largest = rnum;
	 }

	 cout <<  numDig(sum) << "digits ";
	 cout <<" are in " << sum << endl;


	 cout << "the largest is " << largest << endl;
	 return 0;

}

void getQuant(int& n){
  cout << "enter the number of values you want " << endl;
	 cin >> n;
}