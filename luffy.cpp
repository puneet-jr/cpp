// // // #include<iostream>
// // // using namespace std;

// // // int binary(int arr[],int size,int key)
// // // {
// // //     int start=0;
// // //     int end=size-1;
// // //     int ans=-1;
// // //     int mid=(start+end)/2;
// // //     while(start<=end)
// // //     {
// // //         if(arr[mid]==key)
// // //         {
// // //            ans=mid;
// // //           end=mid-1;
// // //         }
// // //         else if(arr[mid]<key)
// // //         {
// // //             start=mid+1;
// // //         }
// // //         else if(arr[mid]>key)
// // //         {
// // //             end=mid-1;
// // //         }
// // //         mid=(start+end)/2;
// // //     }
// // //     return ans;
// // // }
// // // int main()
// // // {
// // // int even[6];

// // //     for(int i=0;i<6;i++)
// // //     {
// // //         cout<<"Enter the element: ";
// // //         cin>>even[i];
// // //     }
 
// // //     int key;
// // //     cout<<"Enter the key to search: ";
// // //     cin>>key;
// // //     cout<<binary(even,6,key)<<endl;
 
// // //     return 0;
// // // }#include<iostream>
// // // #include<iostream>
// // // using namespace std;

// // // int binarySearch(int arr[], int l, int r, int x) {
// // //     while (l <= r) {
// // //         int mid = l + (r - l) / 2;

// // //         // Check if x is present at mid
// // //         if (arr[mid] == x)
// // //             return mid;

// // //         // If x is greater, ignore left half
// // //         if (arr[mid] < x)
// // //             l = mid + 1;

// // //         // If x is smaller, ignore right half
// // //         else
// // //             r = mid - 1;
// // //     }

// // //     // If we reach here, then the element was not present
// // //     return -1;
// // // }

// // // int main() {
// // //     int arr[] = {2, 11, 22, 44, 55, 66, 333};
// // //     int x = 44;
// // //     int n = sizeof(arr) / sizeof(arr[0]);
// // //     int result = binarySearch(arr, 0, n - 1, x);
// // //     (result == -1) ? cout << "Element is not present in array": cout << "Element is present at index " << result;
                   
// // //     return 0;
// // // }


// // // #include<iostream>
// // // using namespace std;


// // // int peak(int arr[],int low, int high,int n)
// // // {
// // //     int mid=low+(high-low)/2;

// // //     if((mid==0|| arr[mid-1]<=arr[mid]) && (mid==n-1||arr[mid+1]<=arr[mid]))
// // //     {
// // //         return mid;
// // //     }
// // //     else if(mid>0 && arr[mid-1]>arr[mid])
// // //     {
// // //         return peak(arr,low,mid-1,n);
// // //     }
// // //     else
// // //     {
// // //         return peak(arr,mid+1,high,n);
// // //     }
// // // }
// // // int main()

// // // {   
// // //     int arr[]={0,6,8,5,7,9};
// // //     int n=6;
// // //     cout<<peak(arr,0,n-1,n)<<endl;

// // //     return 0;
// // // }


// // // #include<iostream>
// // // using namespace std;

// // // void selectionSort(int arr[], int n) {
// // //     int i, j, temp;
// // //     for (i = 0; i < n-1; i++) {
// // //        {
// // //         for (j = i+1; j < n; j++)
// // //         {  if (arr[j] < arr[i])
// // //            {temp = arr[j];
// // //             arr[j] = arr[i];
// // //             arr[i] = temp;
// // //            }
// // //         // Swap the found minimum element with the first element
// // //         }
// // //     }
// // // }
// // //     for (i = 0; i < n; i++)
// // //         cout << arr[i] << " ";
// // //     cout << endl;
// // // }



// // // int main()
// // //  {
// // //     int arr[] = {5,3,6,9};
// // //     int n = sizeof(arr)/sizeof(arr[0]);
// // //     selectionSort(arr, n);
// // //     cout << "Sorted array: \n";
   
// // //     return 0;
// // // }

// // #include<iostream>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin >> n;
// //     int arr[n];
// //     for(int i = 0; i < n; i++) {
// //         cin >> arr[i];
// //     }
// //     // Insertion sort
// //     for(int i = 0; i < n; i++) {
// //         int current = arr[i];
// //         int j = i - 1;
// //         // Shift elements of arr[0..i-1], that are greater than current, to one position ahead of their current position
// //         while(arr[j] > current && j >= 0) {
// //             arr[j + 1] = arr[j];
// //             j--;
// //         }
// //         arr[j + 1] = current;
// //     }
// //     // Print sorted array
// //     for(int i = 0; i < n; i++) {
// //         cout << arr[i] << endl;
// //     }
// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int temp=0;
//     for(int i=0;i<n;i++)
//     {
//         if(temp<arr[i])
//         {
//             temp=arr[i];
//         }
//     }
//     cout<<temp<<endl;



//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int temp=0;
//     for(int i=0;i<n;i++)
//     {
//         temp=0;
//         for(int j=i;j<n;j++)
//         {
//             temp+=arr[j];
//             cout<<temp<<" ";
//         }
//     }

//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
//     double a, b, c;
//     cout << "Enter coefficients a, b and c: ";
//     cin >> a >> b >> c;

//     double discriminant = b * b - 4 * a * c;
//     if (discriminant < 0) {
//         double realPart = -b / (2 * a);
//         double imaginaryPart = sqrt(-discriminant) / (2 * a);
//         cout << "Roots are " << realPart << " + " << imaginaryPart << "i and " 
//              << realPart << " - " << imaginaryPart << "i" << endl;
//     } else {
//         double root1 = (-b + sqrt(discriminant)) / (2 * a);
//         double root2 = (-b - sqrt(discriminant)) / (2 * a);
//         cout << "Roots are " << root1 << " and " << root2 << endl;
//     }

//     return 0;
// }

