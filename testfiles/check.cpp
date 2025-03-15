#include<bits/stdc++.h>
using namespace std;
int main() {  
    cout<<"Qustion 1 testing : "<<endl;
    while(true){
    cout<<"Enter a Number : "  ;
        string input;
        cin>>input;
        if(input=="exit") return 0;
        int n;
        try {
            n = stoi(input);
        } catch(const invalid_argument& e) {
            cout << "Invalid input. Please enter a valid number or type 'exit' to quit." << endl;
            continue;
        }
        if(n<0) {
            cout<<"Please enter a positive number"<<endl;
            continue;
        }
   cout<<"Sum from 1 to "<<n<<" is :";
    cout<< (((n-1)%4 && (n-2)%4)? "EVEN" : "ODD") <<endl;
    }
    return 0;
}