#include <iostream> 
using namespace std;

//list of numbers from 1 to 19 :
string one[21] = {"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};

//list of ten's :
string ten[21] = {"","","twenty ","thirty ","fourty ","fifty ","sixty ","seventy ","eighty ","ninety "};


string numtowords(int n , string s){

	string str;
	if(n)
	{
		//for n greater than 19 :
		if(n>19)
		{
			str += ten[n/10] + one[n%10];
		}
		else
		{
			str += one[n];
		}
		
		str+= s;
		
	}
		
		return str;

}


string ConvertedToWords(long n){
	string out;
	
	//For crore's place :
	out += numtowords((n/10000000),"crores ");
	
	//For lakh's place :
	out += numtowords(((n/100000)%100),"lakhs ");
	
	//For Thousand's place :
	out += numtowords(((n/1000)%100),"thousand ");
	
	//For Hundered's place :
	out += numtowords(((n/100)%10),"hundered ");
	
	//For separating Hundered's place and ten's place :
	if((n>100) && (n%100))
	{
		out += "and ";
	}
	
	//For one's and ten's place :
	out += numtowords((n%100),"");
	
	return out;
}


int main(){
	
	//long takes upto 9 digits 
	long n;
	cout << "Enter the Number to be converted : ";
	cin >> n ;
	cout << ConvertedToWords(n) << endl;
	
}
