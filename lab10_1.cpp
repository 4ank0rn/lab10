#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	int i = 1;
    double loan, rate, pay, New, Prev, inte, Tot;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
    cin >> pay;
    
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	Prev = loan;
	New = loan;
	for(i = 1; New != 0; i++){
		inte = Prev*(rate/100);
		Tot = inte+Prev;
		if(Tot < pay){
			pay = Tot;
		}
		New = Tot - pay;

		cout << setw(13) << left << i; 
		cout << setw(13) << left << Prev;
		cout << setw(13) << left << inte;
		cout << setw(13) << left << Tot;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << New;
		cout << "\n";	
		Prev = New;
	}
	
	
	return 0;
}