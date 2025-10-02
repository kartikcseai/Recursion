#include<iostream>
using namespace std;
int print_numbers(int n){
    if(n==0) return 0;
    print_numbers(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print_numbers(n);
    return 0;
}