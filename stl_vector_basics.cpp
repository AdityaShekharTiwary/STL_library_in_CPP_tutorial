/* TOPIC: std::vector

SYNTAX:
std::vector<type>name;

NOTES:
1. std::vector is a sequence container and also knownas Dynamic Array or Array List.
2. Its size can grow and shrink dynamically and no need to provide size at compile time.

ELEMENT ACCESS:
at(), [ ] , front() , back() , data()

MODIFIERS:
insert(), emplace(),push_back(),emplace_back(),pop_back(),resize(),swap(),erase(),clear()
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//Declaration
	std::vector<int>arr1;
	std::vector<int>arr2(5,20);
	std:vector<int>arr3 = {1,2,3,4,5};  	// Initializer list , you might face problem with an old IDE like Dev C++ (C++ 98).
	std:vector<int>arr4 {1,2,3,4,5};    	// Uniform intialization
	
	// Accessing Element 
	arr2[3] =10;
	arr2.at(3) = 10;
	
	
	
	
	return 0;
}
