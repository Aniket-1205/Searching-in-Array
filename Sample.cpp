#include<iostream>
using namespace std;
void findElement(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element found at "<<i+1<<" position";
            return;
        }
    }
    cout<<"Elements not found";
}

int main(){
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int elem;
    cout<<"Enter the elements you want to search"<<endl;
    cin>>elem;
    findElement(arr,len,elem);
    return 0;
}