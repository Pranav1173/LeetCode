/* Given an array of N integers where each value represents the number of chocolates in a packet. 
Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum. */

#include <bits/stdc++.h>
using namespace std;

int findmindiff (int arr[], int m, int n){
	
	// arr - contains the chocolates packets ; m - number of students among the packets to be distributed
	// n - total number of the chocolate packets
	
	//Checking if number of students or chocolates is zero
	if( m == 0 || n == 0 ){
		return 0;
	}
	
	//Sorting array before implementing the logic
	sort(arr, arr + n);
	
	int min_diff = INT_MAX;
	
	//Actual Logic

	for(int i = 0; i + m - 1 < n; i++){
		if((arr[i + m - 1] - arr[i]) < min_diff){
			min_diff = (arr[i + m - 1] - arr[i]);
		}
	}
	
	return min_diff;
}

int main()
{
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 5; 
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "<< findmindiff(arr, m, n);
    return 0;
}