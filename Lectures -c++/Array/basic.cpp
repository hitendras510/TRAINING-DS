#include<iostream>
#include<climits>   // for INT_MAX
using namespace std;

int main() {
    // int size = 5;
    // int nums[size];
    // int smallest = INT_MAX;

    // cout << "Enter 5 numbers: " << endl;

    // for (int i = 0; i < size; i++) {
    //     cin >> nums[i];

    //     if (nums[i] < smallest) {
    //         smallest = nums[i];
    //     }
    // }

    // cout << "The smallest number is: " << smallest << endl;



// int size=5;
// int arr[size];
// int largest=INT_MIN;
// cout<<"Enter 5 numbers: "<<endl;
// for(int i=0;i<size;i++){
//     cin>>arr[i];
//     if(arr[i]>largest){
//         largest=arr[i];
//     }
// }
// cout<<"The largest number is: "<<largest<<endl;



    int size = 5;
    int arr[size];
    
    int largest = INT_MIN;
    int smallest = INT_MAX;

    int indexLargest = 0;
    int indexSmallest = 0;

    cout << "Enter 5 numbers: " << endl;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];

        if (arr[i] > largest) {
            largest = arr[i];
            indexLargest = i;   // store index of largest
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
            indexSmallest = i;  // store index of smallest
        }
    }

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    cout << "Index of largest: " << indexLargest << endl;
    cout << "Index of smallest: " << indexSmallest << endl;

    return 0;
}
