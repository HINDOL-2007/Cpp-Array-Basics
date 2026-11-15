#include <iostream>
using namespace std;
int search(int arr[],int size,int target){
    for(int i = 0 ; i < size ; i ++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    const int size =7;
    int arr[size]={4,2,7,8,1,2,5};
    int target =8;
    cout<<"Target index :- "<<search(arr,size,target)<<endl;
    return 0;
}