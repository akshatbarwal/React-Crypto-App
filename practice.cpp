#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define N 5;

// binary search

// int binarySearch(int arr[], int l, int r, int x)
// {
//     while(r>=l)
//     {
//         int mid = l + (r-l)/2;
//         if(arr[mid]==x)
//         {
//             return mid;
//         }
//         if(arr[mid] > x)
//         {
//             return binarySearch(arr, l, mid - 1, x);
//         }

//         else
//         {
//             return binarySearch(arr, mid + 1, r, x);
//         }
//         mid = l + (r-l)/2;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {2,4,6,7,8,10};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int x = 10;
//     int result = binarySearch(arr, 0, size-1, x);
//     cout<<"The element is present at->"<<result<<endl;
//     return 0;
// }

// First and Last Occurence of X (leetcode)
// class Solution {
// public:
//     int firstOccurence(vector<int>arr, int target)
//     {
//         int start = 0;
//         int end = arr.size()-1;
//         int mid = start + (end - start)/2;
//         int ans = -1;

//         while(start<=end)
//         {
//             if(arr[mid] == target)
//             {
//                 ans = mid;
//                 end = mid - 1;
//             }

//             else if(arr[mid]>target)
//             {
//                 end = mid - 1;
//             }

//             else if(arr[mid]<target)
//             {
//                 start = mid + 1;
//             }

//             mid = start + (end - start)/2;
//         }
//         return ans;

//     }

//     int lastOccurence(vector<int>arr, int target)
//     {
//         int start = 0;
//         int end = arr.size()-1;
//         int mid = start + (end - start)/2;
//         int ans = -1;

//         while(start<=end)
//         {
//             if(arr[mid] == target)
//             {
//                 ans = mid;
//                 start = mid + 1;
//             }

//             else if(arr[mid]>target)
//             {
//                 end = mid - 1;
//             }

//             else if(arr[mid]<target)
//             {
//                 start = mid + 1;
//             }

//             mid = start + (end - start)/2;
//         }
//         return ans;

//     }

//     vector<int> searchRange(vector<int>& arr, int target)
//     {
//         int first = firstOccurence(arr, target);
//         int last = lastOccurence(arr, target);
//         vector<int> result(2);
//         result[0] = first;
//         result[1] = last;
//         return result;
//     }
// };

//For total number of occurences of a number, (last occurence index - first occurence index) + 1

// //Peak Index in Mountain Array

// int start = 0;
// int end = arr.size() - 1;
// int mid = start + (end - start)/2;

// if(arr[mid] < arr[mid+1]){
//     start = mid + 1;
// }

// else{
//     end = mid;
// }
// mid = start + (end - start)/2;

// return start;

// //Pivot in an array
// int start =0;
// int end = arr.size() - 1;
// int mid = start + (end-start)/2;
// int leftSum = 0;
// int rightSum = 0;
// for(int i=0; i<mid; i++)
// {
//     leftSum += arr[i];

// }
// for(int i=arr.size()-1; i>mid; i--)
// {
//     rightSum += arr[i];

// }

// if(rightSum > leftSum)
// {
//     while(rightSum > leftSum && mid < arr.size() -1)
//     {
//         rightSum -= arr[i];
//         leftSum += arr[i];
//         mid++;
//     }
// }

// else{
//     while(rightSum < leftSum && mid > 0)
//     {
//         rightSum += arr[i];
//         leftSum -= arr[i];
//         mid--;
//     }
// }

// if(leftSum==rightSum){
//     return mid;
// }
// return -1;

// Search in rotated and sorted array

// int search(vector<int>& nums, int target) {

//           int s = 0;
//           int e = nums.size() - 1;
//           int mid = s + (e-s)/2;

//           while(s<=e)
//           {
//               if(target == nums[mid])
//               {
//                   return mid;
//               }

//               if(nums[mid] > nums[e])
//               {
//                   if(target < nums[mid] && target >=nums[s])
//                   {
//                       e = mid - 1;
//                   }

//                   else{
//                       s = mid+1;
//                   }
//               }

//               else if(nums[mid] < nums[s])
//               {
//                   if(target > nums[mid] && target <= nums[e])
//                   {
//                       s = mid + 1;
//                   }
//                   else
//                   {
//                       e = mid - 1;
//                   }
//               }

//               else
//               {
//                   if(target < nums[mid])
//                       e = mid - 1;
//                   else
//                       s = mid + 1;
//               }

//               mid = s + (e-s)/2;
//           }
//           return -1;
//     }

// square root using binary search

// class Solution {
// public:
//     long long int binarySearch(int n)
//     {
//         int s = 0;
//         int e = n;
//         long long int mid = s + (e-s)/2;

//         int ans =-1;
//         while(s<=e)
//         {
//             long long int sqr = mid*mid;
//             if(sqr==n)
//             {
//                 return mid;
//             }

//             if(sqr<n)
//             {
//                 ans = mid;
//                 s = mid + 1;

//             }

//            else
//            {

//                e = mid -1;
//            }

//             mid = s + (e-s)/2;
//         }
//         return ans;
//     }
//     int mySqrt(int x) {

//         return binarySearch(x);
//     }
// };

//Book Allocation problem
// bool isPossible(vector<int> arr, int n, int m, int mid)
// {
//     int studentCount = 1;
//     int pageSum = 0;

//     for(int i=0; i<n; i++)
//     {
//         if(pageSum + arr[i] <= mid)
//         {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if(studentCount > m || arr[i] > mid)
//             {
//                 return false;
//             }

//             pageSum += arr[i];
//         }
//     }
//     return true;
// }
// int allocateBooks(vector<int> arr, int n, int m)
// {
//     int s = 0;
//     int sum = 0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=arr[i];
//     }
//     int e = sum;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e)
//     {
//         if(isPossible(arr, n, m, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

//Painter's Partition Problem

// bool isPossible(vector<int> arr, int n, int k)
// {
//     int painterCount = 1;
//     int boardSum = 0;

//     for(int i=0; i<n; i++)
//     {
//         if(boardSum + arr[i] <= mid)
//         {
//             boardSum += arr[i];
//         }
//         else
//         {
//             painterCount++;
//             if(painterCount > k || arr[i > mid])
//             {
//                 return false;
//             }
//             boardSum += arr[i];
//         }
//     }
//     return true;
// }

// int painterPartition(vector<int> arr, int n, int k)
// {
//     int s = 0;
//     int sum =0;
//     for(int i=0; i<n; i++)
//     {
//         sum += arr[i]
//     }
//     int e = sum;

//     int mid = s + (e-s)/2;

//     int ans = -1;

//     while(s<=e)
//     {
//         if(isPossible(arr, n, k, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

//Aggressive cow problem

// bool isPossible(vector<int> cows, int k, int mid)
// {
//     int cowCount = 1;
//     int pos = cows[0];

//     for(int i=0; i<cows.size(); i++)
//     {
//         if(cows[i] - pos >= mid)
//         {
//             cowCount++;
//             if(cowCount==k)
//             {
//                 return true;
//             }
//             pos = cows[i];
//         }
//     }
//     return false;

// }

// int aggressiveCows(vector<int> cows, int k)
// {
//     int s= 0;
//     int maxi = -1;
//     for(int i=0; i<cows.size(); i++)
//     {
//         maxi = max(maxi, cows[i]);
//     }
//     int e = maxi;
//     int result = -1;
//     int mid = s (e-s)/2;

//     while(s<=e)
//     {
//         if(isPossible(cows, k, mid))
//         {
//             result = mid;
//             s = mid + 1;
//         }
//         else{
//             e = mid -1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return result;
// }

//Selection Sort

// void selectionSort(vector<int> arr, int n)
// {
//     for(int i=0; i<n-1;i ++)
//     {
//         int minIndex = i;
//         for(int j = i+1; j<n; j++)
//         {
//             if(arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }
//         swap(minIndex, i);
//     }
// }

//Bubble Sort

// void bubbleSort(vector<int> arr, int n)
// {
//     for(int i=1; i<n; i++)
//     {
//         for(int j=0; j<n-i; j++)
//         {
//             swap(arr[j], arr[j+1]);
//         }
//     }
// }
//for best case i.e, array is already sorted
// void bubbleSort(vector<int> arr, int n)
// {
//  bool swapped = false;
//     for(int i=1; i<n; i++)
//     {
//         for(int j=0; j<n-i; j++)
//         {
//             swap(arr[j], arr[j+1]);
//             swapped = true;
//         }
//     }
//     if(swapped=="false")
//     {
//         break;
//     }
// }

//Insertion Sort
// void insertionSort(int n, vector<int> arr)
// {
//     for(int i=1; i<n; i++)
//     {
//         int j = i - 1;
//         int temp = arr[j];
//         for(; j>=0; j--)
//         {
//             if(arr[j] > temp)
//             {
//                 arr[j+1] = temp;
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//     }
// }
// * Adaptable Algorithm * Stable Algorithm

//Reverse an array

// vector <int> reverse(vector<int> v, int index)
// {
//     int s=index+1;
//     int e=v.size() - 1;

//     while(s<=e)
//     {
//         swap(v[s], v[e]);
//         s++;
//         e--;
//     }

//     return v;
// }

// void print(vector<int> v)
// {
//     for(int i =0; i<v.size() ; i++)
//     {
//         cout<< v[i] << " ";
//     }
//     cout<<endl;
// }

// int main()
// {

//     vector<int> v;
//     v.push_back(11);
//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(10);

//     vector<int> result = reverse(v, 0);
//     print(result);

// }

//Merge sorted arrays
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1;
//         int j = n - 1;
//         int k = m + n - 1;

//         while(i >= 0 && j >= 0)
//         {
//             if(nums1[i]>nums2[j])
//             {
//                 nums1[k] = nums1[i];
//                 i--;
//             }else{
//                 nums1[k] = nums2[j];
//                 j--;
//             }
//             k--;
//         }

//         while(i>=0)
//         {
//             nums1[k]=nums1[i];
//             i--;
//             k--;
//         }

//         while(j>=0)
//         {
//             nums1[k]=nums2[j];
//             j--;
//             k--;
//         }

//     }
// };

//Move zeroes

// void moveZeroes(int vector<int> v)
// {
//     int nonZero = 0;

//     for(int i=0; i<v.size(); i++)
//     {
//         if(v[i] != 0)
//         {
//             swap(v[i], v[nonZero]);
//             nonZero++;
//         }
//     }
// }

//Reverse String

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int st = 0;
//         int e = s.size()-1;
//         while(st<e)
//         {
//             swap(s[st++], s[e--]);
//         }

//     }

// };

//Palindrome
// class Solution {
// public:

//     bool checkValid(char ch)
//     {
//         if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }

//     char makeLower(char ch)
//     {
//         if( (ch>='a' && ch<='z')  || (ch>='0' && ch<='9')){
//             return ch;
//         }
//         else{
//             char temp = ch - 'A' + 'a';
//             return temp;
//         }
//     }

//     bool checkPalindrome(string a)
//     {
//         int s = 0;
//         int e = a.length() - 1;

//         while(s<=e)
//         {
//             if(a[s] != a[e])
//             {
//                 return 0;
//             }
//             else{
//                 s++;
//                 e--;
//             }
//         }
//         return 1;

//     }

//     bool isPalindrome(string s) {

//         string temp = " ";

//         for(int i=0; i<s.length(); i++)
//         {
//             if(checkValid(s[i]))
//             {
//                 temp.push_back(s[i]);
//             }
//         }

//         for(int i=0; i<temp.length(); i++)
//         {
//             temp[i] = makeLower(temp[i]);
//         }

//         return checkPalindrome(temp);

//     }
// };

//REVERSE WORD IN STRING

// void reverseWords(vector<char>& s)
// {
//     int l=0;
//     int r=0;

//     while(l<s.size() && s[r] != ' ')
//     {
//         r++;
//     reverse(s.begin() + l, s.begin() + r);
//     l = r + 1;
//     r = l;
//     }
// }

//Max Occurence
// char getMaxOccur(string s)
// {
//     int arr[26] = {0};
//     for(int i=0; i<s.length(); i++)
//     {
//         char ch = s[i];
//         int count = 0;
//         count = ch - 'a';//lower case
//         arr[count]++;
//     }

//     int maxi = -1, ans = 0;//max occurence
//     for(int i=0; i<26; i++)
//     {
//         if(maxi<arr[i])
//         {
//             ans = i;
//             maxi = arr[i];
//         }
//     }

//     return 'a'+ans;
// }
// int main()
// {
//     string s;
//     cin>>s;

//     cout<<getMaxOccur(s)<<endl;
// }

//Permutation in string

// class Solution {

// private:
//     bool checkEqual(int a[26], int b[26])
//     {
//         for(int i=0; i<26; i++)
//         {
//             if(a[i] != b[i])
//             {
//                 return 0;
//             }
//         }
//         return 1;
//     }

// public:
//     bool checkInclusion(string s1, string s2) {

//         int count1[26] = {0};
//         for(int i=0; i<s1.length(); i++)
//         {
//             int index = s1[i] - 'a';
//             count1[index]++;
//         }

//         int i =0;
//         int windowSize = s1.length();
//         int count2[26] = {0};

//         //for first window
//         while(i < windowSize && i<s2.length())
//         {
//             int index = s2[i] - 'a';
//             count2[index]++;
//             i++;
//         }

//         if(checkEqual(count1, count2))
//         {
//             return 1;
//         }

//         while(i<s2.length())
//         {
//             char newChar = s2[i];
//             int index = newChar - 'a';
//             count2[index]++;

//             char oldChar = s2[i-windowSize];
//             index = oldChar - 'a';
//             count2[index]--;
//             i++;

//             if(checkEqual(count1, count2))
//             {
//                 return 1;
//             }
//         }

//         return 0;
//     }
// };

//String compression

// class Solution {
// public:
//     int compress(vector<char>& chars) {

//         int i = 0;
//         int ansIndex = 0;
//         int n = chars.size();

//         while(i<n)
//         {
//             int j=i+1;
//             while(j<n && chars[i] == chars[j])
//             {
//                 j++;
//             }

//             chars[ansIndex++] = chars[i];
//             int count = j - i;

//             if(count>1)
//             {
//                 //converting the count into single digit and storing in ans
//                 string cnt = to_string(count);
//                 for(char ch: cnt)
//                 {
//                     chars[ansIndex++]=ch;
//                 }

//             }
//             i=j;
//         }
//         return ansIndex;

//     }
// };

//2D Arrays
// bool isPresent(int arr[][4], int target, int row, int col)
// {
//     for(int row=0; row<3; row++)
//     {
//         for(int col=0; col<4; col++)
//         {
//             if( arr[row][col] == target)
//             {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

// void printSum(int arr[][4], int row, int col)
// {
//     for(int row=0; row<3; row++)
//     {
//         int sum =0;
//         for(int col=0; col<4; col++)
//         {
//             sum+=arr[row][col];
//         }
//         cout<< sum << " ";
//     }
//     cout<<endl;
// }

// void maxSum(int arr[][4], int row, int col)
// {
//     int maxi = INT_MIN;
//     int rowIndex = -1;
//     for(int row=0; row<3; row++)
//     {
//         int sum =0;
//         for(int col=0; col<4; col++)
//         {
//             sum+=arr[row][col];
//         }
//         if(sum>maxi)
//         {
//             maxi=sum;
//             rowIndex = row;
//         }
//     }

//     cout<<"The maximum sum is: "<< maxi << endl;
//     cout<<"Row index with maximum sum is: "<< rowIndex << endl;

// }

// int main()
// {

//     int arr[3][4];

//     for(int i =0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     for(int i =0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;

//     maxSum(arr, 3, 4);
//     cout<<endl;

//     // cout<<"Row wise sum is: ";
//     // printSum(arr, 3, 4);
//     // cout<<endl;

//     // int target;
//     // cout<<"Enter element to be searched: ";
//     // cin>>target;
//     // cout<<endl;

//     // if(isPresent(arr, target, 3, 4))
//     // {
//     //     cout<<"Element found"<<endl;
//     // }
//     // else{
//     //     cout<<"Element not found"<<endl;
//     // }
// }

//Print like a wave
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     //Write your code here
//     vector<int> result;
//     for(int col=0; col<mCols; col++)
//     {
//         if(col&1)
//         {
//             for(int row = nRows-1; row>=0; row--)
//             {
//                 //cout<<arr[row][col]<<" ";
//                 result.push_back(arr[row][col]);
//             }
//         }

//         else
//         {
//             for(int row = 0; row<nRows; row++)
//             {
//                 //cout<<arr[row][col]<<" ";
//                 result.push_back(arr[row][col]);
//             }
//         }
//     }
//     return result;
// }

//Spiral Matrix

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int startingRow = 0;
//         int endingRow = row - 1;
//         int startingCol = 0;
//         int endingCol = col - 1;

//         int count = 0;
//         int total = row*col;

//         vector<int> ans;

//         while(count<total)
//         {
//             for(int index=startingCol; count<total && index<=endingCol; index++)
//             {
//                 ans.push_back(matrix[startingRow][index]);
//                 count++;
//             }
//             startingRow++;

//             for(int index=startingRow; count<total && index<=endingRow; index++)
//             {
//                 ans.push_back(matrix[index][endingCol]);
//                 count++;
//             }
//             endingCol--;

//             for(int index=endingCol; count<total && index>=startingCol; index--)
//             {
//                 ans.push_back(matrix[endingRow][index]);
//                 count++;
//             }
//             endingRow--;

//             for(int index=endingRow; count<total && index>=startingRow; index--)
//             {
//                 ans.push_back(matrix[index][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         }
//         return ans;

//     }
// };

//Binary search in a 2D Array
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int start = 0;
//         int end = row*col - 1;

//         int mid = start + (end-start)/2;

//         while(start<=end)
//         {
//             int element = matrix[mid/col][mid%col];
//             if(element==target)
//             {
//                 return 1;
//             }
//             if(element<target)
//             {
//                 start = mid + 1;

//             }
//             else{
//                 end=mid-1;
//             }
//             mid = start + (end-start)/2;

//         }
//         return 0;

//     }
// };

////Binary search in a 2D Array (Level 2)
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int rowIndex = 0;
//         int colIndex = col - 1;

//         while(rowIndex < row && colIndex>=0)
//         {
//             int element = matrix[rowIndex][colIndex];
//             if(element == target)
//             {
//                 return 1;
//             }
//             if(element < target)
//             {
//                 rowIndex++;
//             }
//             else{
//                 colIndex--;
//             }
//         }
//         return 0;
//     }
// };

//Rotate Image by 90

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {

//         int n = matrix.size();
//         //transpose of the matrix
//         for(int i=0; i<n; i++)//row
//         {
//             for(int j=0; j<i; j++)//column
//             {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }

//         //reverseing every row in the matrix
//         for(int i=0; i<n; i++)
//         {
//             reverse(matrix[i].begin(), matrix[i].end());
//         }
//     }
// };

//Find the median in a row wise sorted matrix
// class Solution
// {
// public:
//     int countNumberLessThanEqualToMid(vector<int> arr, int x)
//     {
//         int s = 0;
//         int e = arr.size() - 1;
//         while (s <= e)
//         {
//             int m = s + (e - s) / 2;
//             if (arr[m] <= x)
//             {
//                 s = m + 1;
//             }
//             else
//             {
//                 e = m - 1;
//             }
//         }
//         return s;
//     }

//     int median(vector<vector<int> > &matrix, int r, int c)
//     {
//         // code here
//         int start = 1;
//         int end = 1e9;
//         while (start <= end)
//         {
//             int mid = start + (end - start) / 2;
//             int count = 0;
//             for (int i = 0; i < r; i++)
//             {
//                 count += countNumberLessThanEqualToMid(matrix[i], mid);
//             }
//             if (count <= r * c / 2)
//             {
//                 start = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }
//         return start;
//     }
// };

//Return row with max number of 1s
// class Solution{
// public:
// int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
//     // code here
//     int countOne = -1;
//     int rowIndex = 0;
//     int colIndex = m-1;

//     while( rowIndex<n && colIndex>=0)
//     {
//         if(arr[rowIndex][colIndex] == 1)
//         {
//             countOne = rowIndex;
//             colIndex--;
//         }
//         else
//         {
//             rowIndex++;
//         }
//     }
//     return countOne;
// }
// };

//Sorted Matrix

// class Solution {
//   public:
//     vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
//         // code here
//         vector<int> temp;
//         for(int i=0; i<N; i++)
//         {
//             for(int j=0; j<N; j++)
//             {
//                 temp.push_back(Mat[i][j]);
//             }
//         }

//         sort(temp.begin(), temp.end());
//         int k =0;
//         for(int i=0; i<N; i++)
//         {
//             for(int j=0; j<N; j++)
//             {
//                 Mat[i][j] = temp[k];
//                 k++;
//             }
//         }
//         return Mat;

//     }
// };

//Find a specific pair in Matrix
int main()
{
    cout << 3 + 5;
}