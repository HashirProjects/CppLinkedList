// CppLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
// the premise of this linked list implementation is to store the values in an array as entry/ array constructor to be able to quickly transform all elements of the list
#include <iostream>


class Array 
{
    private:

        struct ArrayEntry
        {
            double entry;
            double* pLastEntry = NULL;
        };

    public:
        double constructor = 1;
        ArrayEntry* lastPtr = NULL;


        double findEntry (int index)
        {
            //find entry at index by traversing the array using pointers
            //multiply by the constructor and get the entry
        }
        void AddArrayEntry(double aEntry)
        {
           ArrayEntry* Ptr = (ArrayEntry*)malloc(1);
           (*Ptr).entry = aEntry / constructor;
           (*Ptr).pLastEntry = (*lastPtr).pLastEntry;

        }

};

struct integer
{
    int number1;
    int number2;
};

int main()
{
    integer* pArray;
    pArray = (integer*)malloc(1);
    integer* p = NULL;
    (*pArray).number1 = 5;
    (*pArray).number2 = 6;
    std::cout << (*p).number1 << std::endl;
    std::cout << (*p).number2;
}

