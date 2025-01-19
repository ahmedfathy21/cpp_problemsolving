#include<iostream>
using namespace std;
int main (){
   int N,M;
   cin >> N >> M;
   int tempM = M;
   while(N > 0){
   
   while (M > 0){
       cout << N << " * " << M << " = " << N*M << endl;
       M--;
   }
N--;
M = tempM;
}
}