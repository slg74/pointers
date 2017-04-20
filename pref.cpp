#include <iostream>
#include <string>

// pointers vs. references.

void printDouble(const double& rd);
void printDouble2(const double *pd);
void fail(const double *fail);

int main() {
	int i = 10;
	int *j = &i;   // j is the address of i. *j points to the value of i, which is 10. 

	std::cout << i << std::endl;
	std::cout << j << std::endl;
	std::cout << *j << std::endl;

	std::string s = "xyzzy";
	std::string& rs = s;    // c++ requires that references be initialized.

	std::cout << s << std::endl;
	std::cout << rs << std::endl;

	double n = 9.99;
	printDouble(n); 

	double p = 7.77;
	double *pp = &p; 
	printDouble2(pp); 

	fail(pp);  // this works, because pp is declared above.

	double *f;

	fail(f);    // this fails, because f is an uninitialized pointer.
	
	return 0;
}

//
// null references are by default illegal, hence it's more efficient to use references
// than to user pointers, because there's no need to test the validity of a reference
// before using it.
//
void printDouble(const double& rd) {
	std::cout << rd << std::endl;
}
	
// pointers have to be tested against null... 
void printDouble2(const double *pd) {
	if (pd) {
		std::cout << *pd << std::endl;
	}
}

void fail(const double *fail) {
	std::cout << *fail << std::endl;
}


