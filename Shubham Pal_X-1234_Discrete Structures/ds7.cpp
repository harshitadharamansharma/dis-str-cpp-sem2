#include<iostream>
using namespace std;
int main(){
    int n, search[10],low , high,mid ,temp, key;
    bool found = false;
    cout<<"Enter the number of element: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"search["<<i<<"]: ";
        cin>>search[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(search[j] > search[j+1]){
                temp = search[j];
                search[j] = search[j+1];
                search[j+1] = temp;
            }
        }
    }
    cout<<"the sorted array is: ";
    for(int i = 0; i < n; i++){
        cout<<search[i]<<" ";
    }
    cout<<"\nEnter the number to search: ";
    cin>>key;
    low = 0;
    high = n-1;
    while(low<=high){
        mid  = (low + high)/2;
        if(key == search[mid]){
            cout<<"The key is found at index "<<mid<<endl;
            found = true;
            break;
        }else if(key < search[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    if(!found){
        cout<<"Key not found!";
    }
    return 0;
}
