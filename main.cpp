/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 19, 2016, 1:03 PM
 */

#include <cstdlib>
#include <iostream>


int* fillAry(int);
int** fillAry(int, int);
void prntAry (int [], int, int);
void mrkSrt (int [], int);

using namespace std;



int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int perline = 10;
    const int ROW= 10, COL = 10;
    const int SIZE = ROW*COL;
    int *a1D, **a2D;
    
    a1D=fillAry(SIZE);
    a2D=fillAry(ROW, COL);
    
    cout << "1D array with" << perline << "values per line" << endl;
    prntAry(a1D, SIZE, perline);
    cout << "2D array with [" << ROW << ", "<<COL << "]" << endl;
    prntAry(a2D, ROW, COL);
    cout << "1D array with" << perline << "values per line" << endl;
    
    int sRow = 7, sCol =4;
    cout << "Specific Row and Col output [" << sRow << ", " << sCol << "]" << endl;
    cout << "a1D [" << sRow "]["<< sCol "] "<< a1D[sRow*COL+sCol] << endl;       
    cout << "a2D [" << sRow "]["<< sCol "] "<< a2D[] << endl;             
    
    delete [] a1D;
    for (int i = 0; i < ROW; i++){
        delete [] a2D[i];
    }
    delete [] a2D;
    return 0;
}

void prntAry(int **a, int r, int c)
{
    cout << endl;
    for(int i = 0; i<r; i++){
    for (int j = 0; j < c; j++){
        cout << a[i][j] << " ";\
        cout << endl;
    }
    }
    cout << endl;
}


int** fillAry (int r, int c)
{
    int **a = new int[r];
    for (int i = 0; i < r; i++)
        a[i]=new int[c];
        
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            a[i][j]=rand()%90+10;
    }
    return a;       
}

int* fillAry(int n){
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cout<<a[i][r]<<" ";
    
}