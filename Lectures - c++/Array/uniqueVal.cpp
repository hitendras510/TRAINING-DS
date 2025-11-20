#include<iostream>
using namespace std;

void printUnique(int arr[], int size){
    cout << "Unique values are: ";

    for(int i = 0; i < size; i++){
        int count = 0;

        // Count occurrences of arr[i]
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        // If appears only once, print it
        if(count == 1){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int size = 8;

    printUnique(arr, size);

    return 0;
}
