#include <iostream>

using namespace std;

// To return char for a value. For example '2'
// is returned for 2. 'A' is returned for 10. 'B'
// for 11
char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
  
// Utility function to reverse a string
void strev(char *str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
  
// Function to convert a given decimal number
// to a base 'base' and
char* fromDeci(char res[], int base, int inputNum)
{
    int index = 0;  // Initialize index of result
  
    // Convert input number is given base by repeatedly
    // dividing it by base and taking remainder
    while (inputNum > 0)
    {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';
  
    // Reverse the result
    strev(res);
  
    return res;
}

void printBar()
{
	for (int i=0;i<=9;i++)
	cout<<"*";
	
	cout<<endl;
	for (int i=0;i<=9;i++)
{	
	if (i>2 && i<=7)
	cout<<"*";
	else
	cout<<"-";
}
cout<<endl;
}

void nahanaChecker(){
	bool isTodayFriday;
	isTodayFriday= true;
	if(isTodayFriday)
	cout<<"Bhai Nahana Parey gaa";
	else
	cout<<"Khaire hi hia Cheetey";
	
	if(isTodayFriday)
	cout<<"Bhai Nahana Parey gaa";
	else
	cout<<"Khaire hi hia Cheetey";
}

int main ()
{
    int inputNum = 282, base = 16;
    char res[100];
    cout << "Equivalent of " << inputNum << "in base "<< base << "is " <<
                                            fromDeci(res, base, inputNum);
 
	 printBar();
	for (int i=0;i<5;i++)
		cout<<"I love Pakistan."<<endl;
	
	cout<<endl;	
	
	 printBar();
	
	// have Styling today
	nahanaChecker();
}
