#include <iostream>
using namespace std;
int bisearch(int arr[], int n, int key) {
    int a = n / 2;
    if (arr[a] == key)return a;
    while(arr[a] != key) {
        if (arr[a] > key) {
            a = a / 2;
            //当arr[a]>key时，不断对a折半，直到找到key
        }
        if (arr[a] < key) {
            if (arr[a + a / 2] < key) {
                a = ((a + a / 2) + a) / 2;//当arr[a]<key,arr[a+a/2]>key时，如果直接a=a+a/2,则会使得a变化幅度过大
            }                             //变化后的a不在原来的a与a+a/2之间，导致a未执行折半，造成错误
            else a = a + a / 2;
            //当arr[a] < key时，对右边部分折半，直到找到key
        }if (arr[a] == key)break;
    }
        return a; 
}
int main() {
    int  arr[] = { 4,10,17,18,20,21,22,23,25,26,27,30,33,38,40,45,50 }, s;
    s = bisearch(arr, 17, 27);
	cout << "27在数组中的位置为：" << s << endl;
}

