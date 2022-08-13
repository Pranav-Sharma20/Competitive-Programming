// 1. Heap is a complete binary tree satisfying any one of the condition.
// 2. conditions : Max Heap / Min Heap
// 3. Height of the tree will be log n only because 
    // * It won't increase unnecessarily because it is a complete BT.
    // * Height of a Heap is always log n due to it's complete BT property.

// Max Heap : Every node should have value greater than / equal to it's descendents.
// Min Heap : Every node should have value smaller than / equal to it's descendents.

#include<bits/stdc++.h>
using namespace std;

// Insertion in Heap takes - (log n) time
void insert(int A[], int n){
    int temp, i = n;
    temp = A[n];

    // Check if the inserted number i.e. temp > A[i/2] (parent of i) or if i is on root
    // If any one condition met we have to stop there and insert our element
    while(i>1 && temp > A[i/2]){
        A[i] = A[i/2];
        i = i/2;
        // Since it is dividing by 2 every time so T.c. - O(log n) 
    }
    A[i] = temp;
}

// creation of Heap
void Create_Heap(){
    int A[] = {0, 10, 20, 30, 25, 5, 40, 35};
    int n = sizeof(A);
    int i;
    for(i=2; i<n; i++){
        insert(A, i);
    }
    // since insertion of one element was taking (log n) time 
    // insertion of n elements will take (n * log n) time
}

// deletion in a Heap 
// Only root node can be deleted (largest element for Max-Heap and vice versa)
 
