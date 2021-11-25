# Arrays.
 **#include &lt;array &gt;**<br>
in stl  array declaration can be done as :   <b>array&lt; data type ,size&gt; array_name;</b> <br>

## functions in array.
using of functions is :: <b>array_name.function</b><br>
<b>at()</b>
<br>  
 ``` c++:
{
  #include <iostream>
#include <array>

using namespace std;

int main ()
{
    array<int,10> array1 = {1,2,3,4,5,6,7,8,9};
   
    cout << array1.at(2)     // prints 3
    cout << array1.at(4)     // prints 5
  
}
 ``` 

* <b>front() </b>  : return first element in array
* <b>back()</b>  : return last eliment of array
* <b>fill(val)</b> : fills the all elements with given value.
* <b>swap()</b>  : swaps two arrays.
* <b>size()</b>  : returns number of elements in array.
* <b>begin()</b>  : returns iterator to first element.
* <b>end()</b>  : returns iterator to last element.
* <b>empty()</b>  : checks weather the array is empty or not.

 ```c++
#include <array>

int main()
{
    array<int,8> a = {1,2,3,4,5,6,7,8};
    array<int,8> b = {8,7,6,5,4,3,2,1};
    
    a.swap(b)  // swaps array a and b
    
    cout << "a is : ";
    for(int i=0; i < 8; i++) {
    cout << a[i] <<" ";
    }
    cout << endl;
    cout << "b is : ";
    for(int i=0; i < 8; i++) {
    cout << a[i] <<" ";
    }
    /* ouput will be 
    a is : 8 7 6 5 4 3 2 1
    b is : 1 2 3 4 5 6 7 8 */
}
 ``` 
 



 
