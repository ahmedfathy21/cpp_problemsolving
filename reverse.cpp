#include <iostream>
using namespace std;
int main (){
int num;
cin >> num;
int reversedNum = 0;
while (num != 0) {
    int digit = num % 10; // 145 % 10 = 5
    reversedNum = reversedNum * 10 + digit; // 0 * 10 + 5 = 5
    num /= 10; // 145 / 10 = 14
}
cout << "Reversed Number: " << reversedNum << endl;

}