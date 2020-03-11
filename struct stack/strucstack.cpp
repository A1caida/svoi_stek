//#include "strucstack.h"
//#include <iomanip>
//#include <iostream>
//
//template <typename T>
//strucstack <T>::strucstack(int n)
//{
//	size = n;
//
//}
//
//
//
//template <typename T>
//bool strucstack<T>::pop()
//{
//	if (top == -1)
//		return false; 
//
//	stackPtr[top] = 0; 
//	top--;
//
//	return true; 
//}
//
//template <typename T>
//bool strucstack <T>::push(T value) {
//	if (top == size - 1)
//		return false; 
//
//	top++;
//	stackPtr[top] = value; 
//
//	return true; 
//}
//
//template <typename T>
//void strucstack<T>::print()
//{
//	for (int ix = size - 1; ix >= 0; ix--)
//		cout << "-" << setw(4) << stackPtr[ix] << endl;
//}
//
//template <typename T>
//strucstack <T>::~strucstack()
//{
//	delete[] stackPtr;
//}