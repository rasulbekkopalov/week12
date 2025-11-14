#include <iostream>
#include <vector>

using namespace std;

//problem 1
// int findmax(int *arr, int n) {
//     int *a=&arr[0];
//     for (int i = 0; i < n; i++) {
//         if (*(arr+i) > *a) {
//             *a = *(arr+i);
//         }
//     }
//     return *a;
// }
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << findmax(arr, n) << endl;
//     return 0;
// }

//problem 2
// int main() {
//     int a,b;
//     cin>>a>>b;
//     int *ptrA=&a, *ptrB=&b;
//     cout << a << " " << ptrA << endl;
//     cout << b << " " << ptrB << endl;
//     return 0;
// }

//problem 3
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int mx=-99999, *mxptr=nullptr;
//     for (int i = 0; i < n; i++) {
//         if (mx < arr[i]) {
//             mx = arr[i];
//             mxptr = &arr[i];
//         }
//     }
//     cout << mxptr << endl;
//     return 0;
// }

//problem 4
// #include <iostream>
// using namespace std;
// #define val 33.3;
// #define number 50;
// int a;
// int& fun() {
//     return a;
// }
// int foo() {
//     return a;
// }
// int main() {
//     int n1=9, n2=11, *ptr_1=nullptr, *ptr_2=nullptr, k=0;
//     double t;
//
//     //*ptr_1=&n1;
//     ptr_1=&n2;
//     //*ptr_2=&n2;
//     ptr_2=&n1;
//     t=val;
//     //k=val;
//     //foo()=number;
//     fun()=number;
//
//     cout << fun() << " " << *ptr_1 << " " << t << " " << *ptr_2 << endl;
//     return 0;
// }

//problem 5
// int main() {
//     int *ptrA=nullptr;
//     int arr[10];
//     srand(time(nullptr));
//     for(int i=0;i<10;i++) {
//         arr[i]=rand()%100;
//     }
//     ptrA=arr;
//     for (int i=0;i<10;i++) {
//         cout << *(ptrA+i) << " " << ptrA+i <<endl;
//     }
//     return 0;
// }

//problem 6
// int main() {
//     int a;
//     cin>>a;
//     int *ptr = &a;
//     cout << *ptr << endl;
//     return 0;
// }

//problem 7
// float calculateAverage(int *arr, int n) {
//     float sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum+=*(arr+i);
//     }
//     return sum/n;
// }
// int main() {
//     int arr[]={88, 76, 90, 85, 92};
//     cout << calculateAverage(arr, 5) << endl;
//     return 0;
// }

//problem 8
// int main() {
//     int treasure[]={10,20,30,40,50};
//     int *ptr=treasure;
//     ptr=ptr+4;
//     cout << *ptr << endl;
//     return 0;
// }

//problem 9
// int main() {
//     int score=75;
//     int *ptr=&score;
//     cout << "Original score: " <<  score << endl;
//     *ptr+=10;
//     cout << "Updated score: " << score << endl;
//     return 0;
// }

//problem 10
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int *ptr1=arr, *ptr2=&arr[n-1];
//     for (int i = 0; i < n/2; i++) {
//         swap(*ptr1, *ptr2);
//         ptr1++;
//         ptr2--;
//     }
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//problem 11
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int *ptr1=nullptr, *ptr2=nullptr, *ptr3=nullptr;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (arr[i] > arr[j]) {
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }
//     ptr1 = &arr[0];
//     ptr2 = &arr[1];
//     ptr3 = &arr[2];
//     cout << *ptr1 << " " << *ptr2 << " " << *ptr3 << endl;
//     return 0;
// }

//problem 12
// auto countdigits(int number) {
//     int arr[10]={0,0,0,0,0,0,0,0,0,0};
//     while (number!=0) {
//         arr[number%10]++;
//         number/=10;
//     }
//     return arr;
// }
// int main() {
//     int n;
//     cin >> n;
//     auto arr=countdigits(n);
//     for (int i=0;i<10;i++) {
//         cout << "counts[" << i << "]=" << arr[i] << endl;
//     }
//     return 0;
// }