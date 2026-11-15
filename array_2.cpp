#include <iostream>
using namespace std;
int main(){
    const int size=6;
    int large_index,small_index;
    int num[size]={50,5,100,-5,6,-24};
    int smallest = INT32_MAX,largest = INT32_MIN;
    for(int i = 0 ; i < size ; i ++){
        if(num[i]<smallest){
            smallest = num[i];
            small_index=i;
        }
    }
    for(int i = 0 ; i < size ; i ++){
        if(num[i]>largest){
            largest = num[i];
            large_index=i;
        }
    }
    cout<<"The Smallest Value of the Array is "<<smallest<<" with Index Number :- "<<small_index<<endl;
    cout<<"The Largest Value of the Array is "<<largest<<" with Index Number :- "<<large_index<<endl;
    return 0;
}