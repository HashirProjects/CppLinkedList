// CppLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
// the premise of this linked list implementation is to store the values in an array as entry/ array constructor to be able to quickly transform all elements of the list
#include <iostream>


class Array 
{
    private:

        struct ArrayEntry
        {
            double entry;
            ArrayEntry* pLastEntry = NULL;
        };

    public:
        double constructor = 1;
        ArrayEntry* lastPtr = NULL;

        Array(double aEntry)
        {
            lastPtr = (ArrayEntry*)malloc(sizeof(ArrayEntry));
            (*lastPtr).entry = aEntry / constructor;
            (*lastPtr).pLastEntry = lastPtr;
        }


        double findEntry (int index)
        {
            ArrayEntry* Ptr = lastPtr;
            for (int i = 0; i < index; i++)
            {
                Ptr = (*Ptr).pLastEntry;
            }
            return (*Ptr).entry * constructor;
        }
        void AddArrayEntry(double aEntry)
        {

            ArrayEntry* Ptr = (ArrayEntry*)malloc(sizeof(ArrayEntry));
            (*Ptr).entry = aEntry / constructor;
            (*Ptr).pLastEntry = lastPtr;
            lastPtr = Ptr;

        }

};

int main()
{
    Array array(5);

    std::cout << array.lastPtr << std::endl;

    array.AddArrayEntry(10);

    std::cout << array.lastPtr << std::endl;

    std::cout << array.findEntry(1);

}

