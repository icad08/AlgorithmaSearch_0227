#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input(){
    cout << "Enter the number of elements: ";
    cin >> n;
    if ((n > 0) && (n  <= 20)) 
        break;
    else
    cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    
}

int main (){

}