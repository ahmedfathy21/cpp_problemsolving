#include<iostream>
using namespace std;
int main (){
int count = 0;
for (int x = 50; x <= 300 ;x++){
    int start = 70;
    if (start < x+1)
       start = x + 1;
    for (int y = start; y <= 400;y++){
        if((x + y) % 7 == 0)
        count++;
    }
}
cout << count << endl;
}