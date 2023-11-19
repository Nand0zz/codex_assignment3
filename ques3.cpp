#include<iostream>
using namespace std;

inline int addNumbers(int a, int b) {
    cout<<"Addition of two no. is " <<(a+b)<<endl;
    return (a+b);
}

int multiplyNumbers(int x, int y, int z = 1) {
    cout<< "Multiplication of three no. is "<<((x*y)*1)<<endl;
    return ((x*y)*1);
}

int main() {
    int sum = addNumbers(5, 7);
    int product = multiplyNumbers(3, 4); 

    return 0;
}
