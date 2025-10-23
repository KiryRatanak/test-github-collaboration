#include <iostream>

using namespace std;

int main(){

    system("cls");
    
    int value [5] = {10, 20, 30}; 

    cout << "The Value of array is: "; 
    for (int i = 0; i < 5; i++) {
        cout << value[i] << " ";
    }
    
    return 0;
}
