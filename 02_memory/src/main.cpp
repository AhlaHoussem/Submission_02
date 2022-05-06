#include "map.hpp"
#include "food.hpp"
#include <iostream>

int main(int argc, char **argv) {
    // TODO Kreativaufgabe

//    int a[] = {10,20,30,40,50};
////    int *pA = a + 2;
////    *pA = 0;
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
    int i = 42;
    int *ip = &i;
    std::cout << "*&i = " << *&i << std::endl;
    std::cout << "*&ip = " << *&ip << std::endl;
    std::cout << "&*ip = " << &*ip << std::endl;
    std::cout << "**&ip = " << **&ip << std::endl;
    std::cout << "*&*&i = " << *&*&i << std::endl;
    std::cout << "&*&ip = " << &*&ip << std::endl;
    std::cout << "*&*ip = " << *&*ip << std::endl;

}

void swapPointers(int **p1, int **p2) {
    int *tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;

}
