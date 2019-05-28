#include <iostream>
#include "matrix_3x3.h"
#include "Vector_2.h"
#include "Vector_3.h"
#include "baseConversion.h"
int main(void)
{
	
	int field = 6; // 0000 0110


	baseConversion::setBit(field, 7,true); //1000 0110                                                        
	std::cout << int(field) << std::endl; //-120
	baseConversion::printIntAsBinary(field,true);

	baseConversion::setBit(field,7 ,false); // 0000 0110
	std::cout << int(field) << std::endl; // 6
	baseConversion::printIntAsBinary(field);

	baseConversion::setBit(field,0 ,true); // 0000 0111
	std::cout << int(field) << std::endl; // 7
	baseConversion::printIntAsBinary(field);

	baseConversion::setBit(field,4, true); // 0001 0111
	std::cout << int(field) << std::endl; // 23
	baseConversion::printIntAsBinary(field);

	baseConversion::setBit(field,2, false); // 0001 0011
	std::cout << int(field) << std::endl; // 19
	baseConversion::printIntAsBinary(field);

	baseConversion::setBit(field, 3, true); // 0001 0011
	std::cout << int(field) << std::endl; //19
	baseConversion::printIntAsBinary(field);
	
	const char* binaryMess = "010101011";
	int result = baseConversion::binaryStringToInteger(binaryMess);
	std::cout << result << std::endl; 

	char buffer[33]{ "\0" };
	baseConversion::integerToBinaryString(buffer, -1000200);
	std::cout << buffer << std::endl; 
	baseConversion::printIntAsBinary(-1000200);
//	matrix_3x3 matrix
//	{
//		10.0f, 5.0f, 1.0f,
//		2.0f, 7.0f, 2.0f,
//		6.0f, 8.0f, 3.0f
//	};
//
//	matrix_3x3 metrix2
//	{
//		5.0f,7.0f,1.0f,
//		4.0f,9.0f,2.0f,
//		3.0f,10.0f,3.0f
//	};
//	matrix_3x3 results = matrix * matrix;
//
//	
//	Vector_2 V;
//	V.x = 3.0f;
//	V.y = 2.0f;
//	V[1] = 4;
//
//
//	std::cout << V.data[0] << std::endl;
//	std::cout << V.data[1] << std::endl;
//
//	float* ptr_v = ((float*)V);
//	std::cout << ptr_v << std::endl;
//
//
//
//	Vector_3 first = {1,2,3};
//	Vector_3 second = {2.0f, 4.0f, 6.0f};
//
//
//	Vector_3 test = metrix2 * second;
//
//	std::cout << first.cross(second) << "\n";
	system("pause");
	return 0;
}