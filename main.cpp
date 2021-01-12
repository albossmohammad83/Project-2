
#include <iostream>
using namespace std;

int numDigits(int val );  // function declaration (prototype)
                     // this function may be found following the
                     // main or in another file.  It is the linker's job
                     // to find the function body when the project is built

                     // Note: the default argument to this function is 55
                     // It will NOT appear in the function definition

void getVal(int& number);  // function gets user input

int main() {

	  int value = 0;
	  
	  getVal(value);
	  int result = numDigits(value);              // call to this function using argument 
	  cout << value << " has " << result << " digits \n" << endl;

	  result = numDigits();              // call to this function using default argument 
	  cout << 55 << " has " << result << " digits\n " << endl;
}

void getVal(int& number){
      cout << "Enter a value to count " << endl;
	  cin >> number;
}

int numdigits(int val) {

	int sum = 0;
	while (val > 0) {
		sum++;
		val = val /10;
	}

	return sum;

}