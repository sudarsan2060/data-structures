# sorting
 list of sorting methods
 <ul><li>Bubble sorting</li>
  <li>insertion soeting</li>
  <li>selection sorting</li>
  <li>quick sorting</li>
  <li> merg sorting</li></ul>
  
  # Bubble sorting:-
  Bubble Sort is a simple sorting algorithm which repeatedly compares the adjacent elements of the given array & swaps them if they are in wrong order.
  
  
  # Insertion sorting:-
  Insertion Sort is a sorting algorithm where the array is sorted by taking one element at a time. The principle behind insertion sort is to take one element, iterate through the sorted array & find its correct position in the sorted array.
  
  
  # selection sorting:-
  Selection Sort repeatedly searches for the smallest element from the unsorted part of the array and places it at the end of sorted part of the array. Selection sort first finds the smallest element in the unsorted array and swaps it with the first element. Then it finds the second smallest element in the unsorted array and swaps it with the second element, and the algorithm keeps doing this until the entire array is sorted.

 # Quick sorting:-
 QuickSort is a divide & conquer algorithm. QuickSort algorithm partitions the complete array around the pivot element. Pivot element can be picked in mulitple ways:

<ul><li>First element as pivot</li>
  <li>Last element as pivot</li>
  <li>Median element as pivot</li>
  <li>Random element as pivot</li></ul>
In this blog we will be picking the last element as pivot element.
partition() is the key process behind the QuickSort algorithm. In partitioning, the pivot element plays an important role. Pivot is placed at its correct position in the sorted array, all the elements smaller than pivot is placed before it, and all the elements greater than pivot is placed after it. All this operation is completed in linear time.
Then the array is divided in two parts from the pivot element (i.e. elements less than pivot & elements greater than pivot) & both the arrays are recursively sorted using Quicksort algorithm.


# merge sorting
Merge Sort is one of the best examples of Divide & Conquer algorithm. In Merge sort, we divide the array recursively in two halves, until each sub-array contains a single element, and then we merge the sub-array in a way that it results into a sorted array. merge() function merges two sorted sub-arrays into one, wherein it assumes that array[l .. n] and arr[n+1 .. r] are sorted.
 
