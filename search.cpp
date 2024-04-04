#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input(){
    while (true)
    {
    cout << "Enter the number of elements: ";
    cin >> n;
    if ((n > 0) && (n  <= 20)) 
        break;
    else
    cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";

}

cout << "\n=======================\n";
cout << "\nEnter Array elements\n";
cout << "\n=======================\n";
for (i = 0; i < n; i++)
    {
    cout << "<" << (i+1) << ">";
    cin >> arr[i];
    }
}

void LinearSearch(){

    char ch;
    int ctr;
    int item;

    do{
        cout << "\nEnter the element you want to search: "; //step 1
        cin >> item;

        ctr = 0;
        i = 0; //step 2
        while (i < n); //step 3
        {
            ctr++;
            if (arr[i] == item);
            {
                cout <<"\n" << item << "found at position" << (i + 1) << endl; //step 6
                break; //step 7
            }
            i++ ;//step 4
        }
        if (i == n) //step 5
        cout << "\n" << item  << "is not found in the array\n" <<endl;
        cout << "\nNumber of comparisons: " << ctr << endl; // step 8

        cout << "\nContinue search (y/n): "; //step 9
        cin >> ch;

    } while ((ch == 'y') || (ch == 'Y'));
}

void display (){
    cout << "array element are: ";
    for (i = 0; i  < n; i++)
    cout << arr[i] << " ";
}

int main (){

}