// #include<iostream>
// using namespace std;
// template <typename type>
// type Max(type A,type B){
//     if(A > B)
//      return A;
//     else
//     return B;
        
    
// }
// template<class type1 ,class type2>
// type1 sum(type1 A,type2 B){
//     type1 r = A +B;
//     return r;
// }
// int main (){

// int x = Max(15, 26);
// double y = Max(45.5, 78.5);
// string z = Max("Ahmed", "SAYED");
// cout << x << y << z <<endl;
// cout << Max<double>(45.9, 4515.4) << Max<string>("ALI","ahmed") << endl;
// cout << sum(45,11.5) << endl<<sum(95.4,456) << endl << sum<int ,double>(12.4,13.5)<<endl ;
// cout << sum<string ,string >("Iam" ,"Ahmed");
// // cout << sum("Iam" ,"Ahmed"); // CE char * and it did not has a class  
// }
    #include <iostream>
    #include <algorithm>
#include <string>
    using namespace std;
     
    template<class T>
    void fun(T a) {
    	cout << "[" << a << "]";
    }
     
    template<>
    void fun(string str) {
        cout << "{{" << str << "}}";
        cout<< str.size() << endl;
    }

    int main() {
        fun(10.5);
        fun(string("mostafa"));
        return 0;
    }
