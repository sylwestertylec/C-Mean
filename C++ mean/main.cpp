//
//  main.cpp
//  C++ mean
//
//  Created by Sylwester Tylec on 05/08/2022.
//



#include <iostream>
#include <chrono>
#include <math.h>
using namespace std;
double MeanA(double data[]);
double MeanG(double data[]);
double MeanH(double data[]);
int main() {
    double data[]={1,2,3,4,5,6,7,8,9,10};
    cout << endl << "MeanA = " << MeanA(data)<<endl;
    cout << endl << "MeanH = " << MeanH(data)<<endl;
    cout << endl << "MeanG = " << MeanG(data)<<endl;
    return 0;
}
double MeanA(double data[]) {
    auto start = chrono::steady_clock::now();
    double sum = 0.0, meanA;
    int i;
    for(i = 0; i < 10; ++i) {
    sum += data[i];
    }
    meanA = sum / 10;
    auto end = chrono::steady_clock::now();
    cout << "Elapsed time in nanoseconds: "
    << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
    << " ns" << endl;
    return meanA;
}
double MeanG(double data[]){
    auto start2 = chrono::steady_clock::now();
    double iloczyn = 1.0, meanG=0;
    int i;
    for(i = 0; i < 10; ++i) {
    iloczyn *= data[i];
    }
    meanG=pow(iloczyn, 1.0/10);
    auto end2 = chrono::steady_clock::now();
    cout << "Elapsed time in nanoseconds: "
    << chrono::duration_cast<chrono::nanoseconds>(end2 - start2).count()
    << " ns" << endl;
    return meanG;
}
double MeanH(double data[]) {
    auto start3 = chrono::steady_clock::now();
    double sum = 0.0, meanH;
    int i;
    for(i = 0; i < 10; ++i) {
    sum += 1/data[i];
    }
    meanH = 10/sum;
    auto end3 = chrono::steady_clock::now();
    cout << "Elapsed time in nanoseconds: "
    << chrono::duration_cast<chrono::nanoseconds>(end3 - start3).count()
    << " ns" << endl;
    return meanH;
}
