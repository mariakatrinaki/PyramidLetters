#include <iostream>
#include <string>
#include <algorithm>

using namespace std;




void printSpace(const int);

int main()
{
    string letters = "12345";
	
	size_t k {letters.size()};
	
	int counter {1};
	
	string substring {};
	
	string lettersPyramid {};
	
	for(int i=0 ; i<letters.size(); i++){
		
		cout<< "  " << counter << "  |  ";
		
		printSpace(k);
		k--;
		
		lettersPyramid += letters[i];
		
		substring = lettersPyramid.substr(0,counter-1);
		
		 reverse(substring.begin(),substring.end());
		
		cout << lettersPyramid + substring;
		
		counter ++ ;
		cout<<"\n";
		cout<<"\n";
		
		}
	
	return 0;
	
}

void printSpace(const int k){
	
	int  space {32};
	
	for(int i=0; i<k ; i++){
		
		cout << static_cast<char>(space);
		
		}
	
	
	
	}
