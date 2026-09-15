#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cout << "Enter number of String to test : ";
	cin >> n;
	cin.ignore();
	
	for(int i = 1; i <= n; i++){
		string str;
	    cout << "Enter a string: ";
	    getline(cin, str);
	
	    if(str.length() >= 2 && str.substr(0,2) == "//")
	    {
	        cout << "Single Line Comment" << endl;
	    }
	    else if(str.length() >= 4 &&
	            str.substr(0,2) == "/*" &&
	            str.substr(str.length()-2) == "*/")
	    {
	        cout << "Multi Line Comment" << endl;
	    }
	    else
	    {
	        cout << "Not a Comment" << endl;
	    }
	
	}
    return 0;
}
