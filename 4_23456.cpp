#include <iostream>
using namespace std;

// Q2
int main() { 
int a = 5, b, c ; 
b = a = 15 ; // a=15 , b=15
c = a < 15 ; // c=0
std:: cout << "a = " << a << ", b = " << b << " , c = "<< c ;
	return 0;
}

// OUTPUT IS 
a = 15, b = 15 , c = 0



//Q3

int main() { 
int x = 3 ; 
float y = 3.0 ; 
if (x == y) 
cout <<"x and y are equal"  ;   //this will be output
else 
cout << "x and y are not equal"  ; 
return 0;
} 

// OUTPUT IS 
x and y are equal


//Q4

int main(){
int test = 0;
cout << "First character " << '1' << endl;
cout << "Second character " << (test ? 3 : '1') << endl; // second character : 49
return 0;
}

// OUTPUT IS 
First character 1
Second character 49



// Q5


int main(){
    int a = 18; int b = 12;  
    bool t = (a > 20 && b < 15)? true : false;
    cout <<"Value of t: " << t ; // answer is 0
    return 0;
}

// OUTPUT IS 
Value of t: 0


//Q6


int main() {
  int number = -4;
  char result;
  result = number > 0 ? 'P' : 'N';  // N will be printed
  cout << result << endl;
  return 0;
}

// OUTPUT is
N










