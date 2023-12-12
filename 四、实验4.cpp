#include <iostream>
using namespace std;
int merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    while (j < size2) {
        list3[k++] = list2[j++];
    }
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    return 0;
}
int main()
{
    int a, b;
    int arr1[100], arr2[100], arr3[200];
    cout<<"请输入两个排列好的数组"<<endl;
    cout << "Enter list1:";
    cin >>a;
    for (int i = 0; i <a; i++) {
        cin >> arr1[i];
    }
    cout << "Enter list2: ";
    cin >> b;
    for (int i = 0; i < b; i++) {
        cin >> arr2[i];
    }
    cout << "The merged list is ";
    merge(arr1, a, arr2, b, arr3);
    return 0;
}

