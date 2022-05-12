#include "map.hpp"
#include "food.hpp"
#include <iostream>

int main(int argc, char **argv) {
    // TODO Kreativaufgabe


    void printArray(const int *arr, size_t size);
    void printArrayPointer(const int *arr, size_t size);
    void printArrayointerBegin(const int *begin, const int *end);
    int *readNumbers(const size_t n);
    void mmulC(int m[4][4], int c);
    void mmulC2(int* m, int c);
    void decoder(std::string b);
    decoder("w3r6l7x5v3j5{6n2q9d1u2{7n0n9#3k6d0u6E2");// Code entschlusst

// Task 2.2j


    // Task 2.2i
    int M[4][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };
    int* ptrE = *M;
    std::cout << *(ptrE + 1); // 2
    std::cout << *(ptrE + 4); // 5
    std::cout << *(ptrE + 15); // 16
    std::cout << * (ptrE + 4 * 2 + 3) << std::endl; // 12
    //auf M[n][m] kann man durch ptrE + 4*n + m zugreifen.

    // Task 2.2j
    int I[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                I[i][j] = 1;
            }
            else {
                I[i][j] = 0;
            }
        }
    }

    // Task 2.2k
    std::string hallo1("Hallo Welt");
    std::cout << hallo1.length() << std::endl;

    mmulC(I, 4);
    int* firstElement = *I;
    mmulC2(firstElement, 2);
//    printArrayPointer(firstElement, 16);

//    int a[] = {10,20,30,40,50};
//    int *pA = a + 2;
//    *pA = 0;
//    std::cout << &a[1] << std::endl;
//    std::cout << a + *a  << std::endl;



    // TODO 2.1.a
//    int i = 42;
//    int *ip = &i;
//    int **pp = &ip;
//    int ***ppp = &pp;
//
//    std ::cout << i << std::endl;
//    std ::cout << &i << std::endl;
//    std ::cout << ip << std::endl;
//    std ::cout << *ip << std::endl;
//    std ::cout << &ip << std::endl;
//    std ::cout << &*ip << "\n" << std::endl;
//    std ::cout << *&ip << "\n" << std::endl;

//    std ::cout << pp << std::endl;
//    std ::cout << *pp << std::endl;
//    std ::cout << &pp << "\n"<< std::endl;
//
//    std ::cout << ppp << std::endl;
//    std ::cout << *ppp << std::endl;
//    std ::cout << &ppp << std::endl;

// TODO 2.1.b

//int intVal = 100000000;
//int *pIntVal = &intVal;
//int **pPintVal = &pIntVal;
//char charVal = 'C';
//char *pCharVal = &charVal;
//char **pPCharVal = &pCharVal;
//
//std::cout << sizeof(intVal) << "\n";
//std::cout << sizeof(pIntVal) << "\n";
//std::cout << sizeof(pPintVal) << "\n";
//std::cout << sizeof(charVal) << "\n";
//std::cout << sizeof(pCharVal) << "\n";
//std::cout << sizeof(pPCharVal) << "\n";

// TODO  2.1.h

//char c = 'T', d = 'S';
//char *p1 = &c;
//char *p2 =  &d;
//char *p3;
//
//p3 = &d;
//std::cout << "*p3 = " << *p3 << std::endl;
//
//p3 = p1;
//std::cout << "*p3 = " << *p3
//          << ", p3 = " << (void*) p3 << std::endl;
//
//p1 = &d;
//std::cout << "*p1 = " << *p1
//          << ", p1 = " << (void*) p1 <<  "\n" << c <<std::endl;


    // TODO 2.1.g
// int i = 5, j = 10;
// int *ip = &i;
// int *jp = &j;
// int **ipp = &ip;
// int **jpp = &jp;
//
// std::cout << "ip = " << ip << std::endl;
// std::cout << "jp = " << jp << std::endl;
// std::cout << "ipp = " << ipp << std::endl;
// std::cout << "jpp = " << jpp << std::endl;
//
// void swapPointers (int ** a, int **b);
// swapPointers(ipp, jpp);
//
// std::cout << "new ip = " << ip << std::endl;
// std::cout << "new jp = " << jp << std::endl;

// TODO swap pointer : call by pointer
//    void swapPointers(int **r, int **s);
//
//    int p = 5;
//    int q = 10;
//    int *pp = &p;
//    int *qp = &q;
//
//    std::cout << "pp = " << pp << std::endl; // address of p
//    std::cout << "qp = " << qp << std::endl << std::endl; // address of q
//
//    swapPointers(&pp, &qp); // address of pointer pp and qp
//
//    std::cout << "pp = " << pp << std::endl;
//    std::cout << "qp = " << qp << std::endl << std::endl;
//
//    std::cout << "p = " << p << " q= " << q << std::endl;


// TODO swap pointer : call by refrence

//    void swapPointers(int* &r, int* &s);
//
//    int p = 5;
//    int q = 10;
//    int *pp = &p;
//    int *qp = &q;
//
//    std::cout << "pp = " << pp << std::endl; // address of p
//    std::cout << "qp = " << qp << std::endl << std::endl; // address of q
//
//    swapPointers(pp, qp); // address of pointer pp and qp
//
//    std::cout << "pp = " << pp << std::endl;
//    std::cout << "qp = " << qp << std::endl << std::endl;
//
//    std::cout << "p = " << p << " q= " << q << std::endl;


// TODO 2.1.i

//    int i = 42;
//    int *ip = &i;
//    std::cout << "*&i = " << *&i << std::endl;
//    std::cout << "*&ip = " << *&ip << std::endl;
//    std::cout << "&*ip = " << &*ip << std::endl;
//    std::cout << "**&ip = " << **&ip << std::endl;
//    std::cout << "*&*&i = " << *&*&i << std::endl;
//    std::cout << "&*&ip = " << &*&ip << std::endl;
//    std::cout << "*&*ip = " << *&*ip << std::endl;

// TODO 2.2.a

//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    for (int i = 0; i < 10; ++i) {
//        std::cout << *(arr + i) << std::endl;
//    }

// TODO 2.2.b

//    int arr[] = {1, 2, 3, 4, 5, 6, 7};
//    int *pArr = arr;
//    *pArr = *pArr + 1; // arr[0] = 2 not 1
//    *(pArr + 3) = arr[4] + *pArr; // arr[3]  = 5 + 2 =7
//    *(pArr + 1) = *pArr + 2; // arr[1] = 2 + 2 =4
//    arr[2] = *(pArr + 5); // arr[2] = arr[5] = 6
//    *(pArr + 6) = *(pArr + 4) **(pArr); // arr[6] = arr[4] * 2 = 10
//    *(pArr++) = *pArr + *pArr++; // arr[2] =3 + 3 = 6 *pArr = 6

//TODO 2.2.c



    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int *arrayInHeap = new int[10]{1, 2, 4};

//    printArray(arr, 7);

//    printArrayointer(arr,7);

//    printArrayointerBegin(arr, arr + 7);

//    printArrayointerBegin(arr + 2, arr + 7); // sub array

//    printArrayointerBegin(arrayInHeap + 0, arrayInHeap + 3); // sub array
//    delete[] arrayInHeap;

//    int *a = readNumbers(5);
//    delete[] a;
//    a = nullptr;


}

void swapPointers(int **p1, int **p2) {
    int *tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;

}

// TODO 2.2.c
void printArray(const int *arr, size_t size) {
    std::cout << "printArray : " << std::endl;
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }
}

// TODO 2.2.d
void printArrayointer(const int *arr, size_t size) {
    std::cout << "printArrayPointer : " << std::endl;
    for (const int *p = arr; p != arr + size; ++p) {
        std::cout << *p << std::endl;
    }
}

// TODO 2.2.e
void printArrayointerBegin(const int *begin, const int *end) {
    std::cout << "printArrayPointer Begin : " << std::endl;
    for (const int *p = begin; p != end; ++p) {
        std::cout << *p << std::endl;
    }
}

int *readNumbers(const size_t n) {
    std::cout << "Give the size of the array : " << n << std::endl;

    int *arr = new int[n];

    for (size_t i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    return arr;

}


// Task 2.2j
void mmulC(int m[4][4], int c) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            m[i][j] *= c;
        }
    }
}

void mmulC2(int* m, int c) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            *m *= c;
            m++;
        }
    }
}

void decoder(std::string b) {
    for (size_t i = 0; i < b.length(); i += 2) {
        char c = b[b.length() - 2 - i] - (b[b.length() - 1 - i] - 48);
        std::cout << c;
    }
}