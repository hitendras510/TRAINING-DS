/** 
  Start
  ↓
Read array elements
  ↓
Initialize:
smallest = +∞
largest  = -∞
minIndex = 0
maxIndex = 0
  ↓
Loop i = 0 to 4
  ↓
Compare arr[i] with smallest & largest
  ↓
Update smallest or largest
  ↓
After loop:
minIndex = 3
maxIndex = 2
  ↓
Swap arr[minIndex] and arr[maxIndex]
  ↓
End

 */
#include<iostream>
#include<climits>
using namespace std;

void swapMaxMin(int arr[], int sz){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minIndex = 0;
    int maxIndex = 0;

    // Find min, max and their indexes
    for(int i = 0; i < sz; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            minIndex = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
            maxIndex = i;
        }
    }

  int temp = arr[minIndex];        // Save smallest safely
arr[minIndex] = arr[maxIndex]; // Put largest in min's place
arr[maxIndex] = temp;        // Put smallest back in max's place

}

int main(){
    int size = 5;
    int nums[size];

    cout << "Enter 5 numbers: " << endl;
    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }

    swapMaxMin(nums, size);

    // Print updated array
    cout << "Array after swapping min and max: ";
    for(int i = 0; i < size; i++){
        cout << nums[i] << " ";
    }
}
