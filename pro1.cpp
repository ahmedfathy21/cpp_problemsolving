#include <iostream>

using namespace std;

int main(){
int num;
cin >> num;
int temp_num = num;
string N;
while (num > 0){
    cin >> N;
    num--;

if (N == "no" || N == " NO" || N == "No" || N == "nO"||
N == "on" || N == " ON" || N == "oN" || N == "On"){
cout << "This string is Valid  :: " <<  N << endl;

}
else {
    cout << "This String is not valid  " << N << endl ;
}
}
}

