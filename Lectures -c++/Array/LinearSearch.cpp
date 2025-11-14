  #include<iostream>
  using namespace std;
  
  int linearSearch(int arr[], int sz, int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
  }
  int main()
  {
    int arr[]={10,20,30,40};
    int sz=4;
    int target=50;

    cout<<linearSearch(arr,sz,target)<<endl;
    return 0;
  }