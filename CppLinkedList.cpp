// CppLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
// the premise of this linked list implementation is to store the values in an array as entry/ array constructor to be able to quickly transform all elements of the list
#include <iostream>

class ArrayEntry
{
    public:
        double entry;
        double *pNextEntry = NULL;

        ArrayEntry(double aEntry, double constructor, double *apNextEntry) {
            entry = aEntry / constructor;
            pNextEntry = apNextEntry;
        }

};

class Array 
{
    public:
        double constructor = 1;
        void findEntry (int index)
        {
            //find entry at index by traversing the array using pointers
            //multiply by the constructor and get the entry
        }
        Array() 
        {
            //input entries and create ArrayEntry objects for all of them
        }

};

int main()
{
    int hi = 5;
    int *phi = &hi;
    std::cout << phi;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
