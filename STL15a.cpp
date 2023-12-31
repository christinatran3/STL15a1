//Christina Tran
//CIS 1202 101
//Due: 12/3/23
using namespace std;
# include <iostream>

class invalidCharacterExcpeption //class for handle invalidCharacterExcpeption
{
};

class invalidRangeException //class for invalidRangeException

{
};

class caseConversionException //class for caseConversionException

{
};

char character(char start, int offset) //this is the function for finding the character offsets value
{
int startValue = int(start); //find the value of start

int target = startValue + offset; //adding the target
try{
	//If start is not a letter
if(startValue < 65 || (startValue > 90 && startValue < 97) || startValue > 122 )
{
throw invalidCharacterExcpeption();
}

//if target is not correct throw invalidRangeException
else if(target < 65 || (target > 90 && target < 97) || target > 122 )
{
throw invalidRangeException();
}

//if lower or upper case throw an exception
else if((target >= 65 && target <= 90 && startValue >= 95 && startValue <= 122) || (target >= 95 && target <= 122 && startValue >= 65 && startValue <= 90) )
{
throw caseConversionException();
}

}
catch (invalidCharacterExcpeption exception1) //catching all exceptions
{
	cout << "Invalid Character Exception " << endl;
return ' ';
}

catch(invalidRangeException exception2)
{
cout << "Invalid Range Exception "<<endl;
return ' ';
}

catch(caseConversionException exception3)
{
cout << "Cannot make case changes from upper to lower or otherwise "<<endl;
return ' ';
}

return char(target); //if no exception return to target
}

int main()
{
cout << character('a', 1)<<endl;
cout << character('a', -1)<<endl;
cout << character('Z', -1)<<endl;
cout << character('?', 5)<<endl;
cout << character('A', 32)<<endl;
}
//Part B starts here
//"half" that accept a single argument, and return a value of that same type
template<typename W> W half(W val) {
    return val / 2;
}

int half(int val) {
    if (val % 2 == 0) return val / 2;
    else return (int)(val / 2) + 1;
}
//return half of the value passed in as argument
//Rounding
int main()
{
    double a = 7.1;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    return 0;
}