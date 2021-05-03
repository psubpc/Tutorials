#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;


char path[255] = "clearance.txt"; // clearance filename/filepath
int lineCount = 0;
int x,y;
string tmp_s;

int bgy[1000]; // barangay clearance id
string name[1000];
int age[1000];
string gender[1000];

string brand[3];
string model[3][1];
float price[3][1];
string engine[3][1];
string transmission[3][1];
string displacement[3][1];
string fuel[3][1];
string payM[2]; // payment method
string payO[2]; // payment option

// Clearance File Line Count
void getLinesCount(){
	// initialize the variable 
	// for temporary storage
	// for string in the current line 
	string currentText;
	
	// open clearance file
	fstream file(path);
	
	// line counter
	while (getline (file, currentText)) {
		lineCount++;
	}
	
	// close clearance file
	file.close();
}

// String to Integer Converter
int stoii(string s){
	stringstream toi(s);
	int x = 0;
	toi >> x;
	return x;
}


// Convert Integer to String Converter
string itosi(int i){
	ostringstream s;
	s << i;
	return s.str();
}

// Convert Char to String
string ctosi(char c[]){
	ostringstream s;
	s << c;
	return s.str();
}

// Convert Char to LowerCase
char asciitolower(char in) {
    if (in <= 'Z' && in >= 'A')
        return in - ('Z' - 'z');
    return in;
}

// Convert String to LowerCase
string tolowercase(string s){
	int n = s.length();
 
    // declaring character array
    char char_array[n + 1];
 
    // copying the contents of the
    // string to char array
    strcpy(char_array, s.c_str());
 
    for (int i = 0; i < n; i++)
        char_array[i] = asciitolower(char_array[i]);
	
	return ctosi(char_array);
}

// Parse Clearance file content
void getClearance(){
	string currentText;
	string token;
	
	getLinesCount();
	fstream file(path);
	
	for(x=0;x<lineCount;x++){
		if(getline(file, currentText)){
			istringstream currentToken(currentText);
			string tokens[5];
			for(y=0;y<5;y++){
				if(getline(currentToken,token,' ')){
					tokens[y] = token;
				}
			}
			bgy[x] = stoii(tokens[1]);
			name[x] = tokens[2];
			age[x] = stoii(tokens[3]);
			gender[x] = tokens[4];
		}
	}
	
	file.close();
}

// Get User info using Clearance ID or Name
int bgySearch(){
	int uid;
	bool invalid = true;
	while(invalid){
		cout << "Enter Barangay Clearance ID or Name: ";
		cin >> tmp_s;
		for(x=0;x<lineCount;x++){
			if(tolowercase(tmp_s) == tolowercase(name[x]) || stoii(tmp_s) == bgy[x]){
				uid = x;
				invalid = false;
				break;
			}
		}
		if(invalid) cout << "Invalid ID or Name, try again!\n====================================\n" << endl;
	}
	return uid;
}

// Select Brand Menu
int brandMenu(){
	brand[0] = "Honda";
	brand[1] = "Kawasaki";
	brand[2] = "Suzuki";
	
	int selected;
	
	while(true){
		cout << "\nSelect Brand" <<endl;
		for (x=0;x< 3;x++) cout << x + 1 << ". " << brand[x] <<endl;
		
		cout << "\nEnter Number: ";
		cin >> selected;
		
		if(selected > 0 && selected <= 3){
			return selected - 1;
		} else {
			cout << "Invalid Brand, try again!\n====================================\n" << endl;
		}
	}
}

// Select Model Menu
int modelMenu(int id){
	//model
	model[0][0] = "Honda CB300R";
	model[1][0] = "Kawasaki Z650";
	model[2][0] = "Suzuki Katana";
	
	//price
	price[0][0] = 240825;
	price[1][0] = 46719.60;
	price[2][0] = 46719.60;
	
	//engine
	engine[0][0] = "Single-Cylinder";
	engine[1][0] = "Liquid-cooled";
	engine[2][0] = "Liquid-cooled";
	
	//transmission
	transmission[0][0] = "Manual";
	transmission[1][0] = "Manual";
	transmission[2][0] = "Manual";
	
	//displacement
	displacement[0][0] = "286.01 cc";
	displacement[1][0] = "649 cc";
	displacement[2][0] = "999 cc";
	
	//fuel
	fuel[0][0] = "10L";
	fuel[1][0] = "15L";
	fuel[2][0] = "12L";
	
	while(true){
		cout << "\n" << brand[id] << " SHOP\n"<< endl;
		cout << "#\tModel\t\tPrice\tEngine Type\tTransmission Type\tDisplacement\tFuel Capacity"<<endl;
		for (x=0;x<1;x++) 
			cout << (x+1) << "\t" 
				<< model[id][0] << "\t"
				<< price[id][0] << "\t"
				<< engine[id][0] << "\t"
				<< transmission[id][0] << "\t\t\t"
				<< displacement[id][0] << (id > 0 ? "\t\t": "\t")
				<< fuel[id][0] << "\t"
				<< endl; 
		
		int selected;
		cout << "\nEnter Number: ";
		cin >> selected;
		
		if(selected > 0 && selected <=1){
			return selected - 1;
		} else {
			cout << "Invalid Number, try again!\n=========================\n" << endl;
		}
	}
}


// Select Payment Method Menu
int paymentMethod(){
	payM[0] = "Cash";
	payM[1] = "Credit Card";
	
	while(true){
		cout << "\nSelect Payment Method" << endl;
		for(x=0;x<2;x++)
			cout << (x+1) << ". " << payM[x] << endl;
		
		cout << "\nEnter Number: ";
		int selected;
		
		cin >> selected;
		
		if(selected > 0 && selected <=2){
			return selected - 1;
		} else {
			cout << "Invalid Number, try again!\n=========================\n" << endl;
		}
	}
}

// Select Payment Option Menu
int paymentOption(){
	payO[0] = "Fully Paid";
	payO[1] = "Installment";
	
	while(true){
		cout << "\nSelect Payment Option" << endl;
		for(x=0;x<2;x++)
			cout << (x+1) << ". " << payO[x] << endl;
		
		cout << "\nEnter Number: ";
		int selected;
		
		cin >> selected;
		
		if(selected > 0 && selected <=2){
			return selected - 1;
		} else {
			cout << "Invalid Number, try again!\n=========================\n" << endl;
		}
	}
}


// installment price/monthly payment
double toInstallment(double price){
	double r = 0.02;
	double n = 6;
	double t = 12;
	double formula = (n*price) + (n*price * (r/100));
	double loan_pay = formula/(n*t);
	return loan_pay;
}


int main() {
	// Parse Clearance File
	getClearance();
	
	// Get User Clearance ID or Name
	int u = bgySearch(); 		// user id
	
	// Select Brand Menu
	int b = brandMenu(); 		// brand
	
	// Select Model Menu
	int m = modelMenu(b); 		// model
	
	// Select Payment Method
	int pm = paymentMethod(); 	// payment method
	
	// Select Payment Option 
	int po = paymentOption(); 	// payment option
	
	
	// OUTPUT
	cout << "\n\n==================================================" << endl;
	cout << "RECIEPT" << endl;
	cout << "No. " << bgy[u] << " " << name[u] << "\n" << endl;
	
	cout << "Brand\tModel\t\tPrice\tEngine Type\tTransmission Type\tDisplacement\tFuel Capacity\tPayment"<<endl;
	cout << brand[b] << (b==1?"":"\t")
		<< model[b][m] << "\t"
		<< (po == 1 ? toInstallment(price[b][m]):price[b][m]) << "\t"
		<< engine[b][m] << "\t"
		<< transmission[b][m] << "\t\t\t"
		<< displacement[b][m] << (b > 0 ? "\t\t": "\t")
		<< fuel[b][m] << "\t\t"
		<< payM[pm] << "," << payO[po] 
		<< endl;
	
	return 0;
}

