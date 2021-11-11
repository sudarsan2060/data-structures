# STL C++
it has 4 components
<ul>
  <li>Algorithms</li>
  <li>Containers</li>
  <li>Functions</li>
  <li>Iterators</li>
</ul>

## Algorithm
header file ==> <b><i>#include&lt;algorithm&gt;</i></b>
  
  <h3><b>sorting</b></h3>
  <ul><li>
  <b>sort(start,end);</b></li> for sorting in ascending oder
  <li><b>sort(start,end,greater&lt;int&gt;());</b></li> for sorting in descending oder
  </ul>
<h3>searching</h3>
<b>Binaray searching</b><br>
<i> binary_search(start, end, finding element);</i>

# some important things
<ul>
  <li>sort(start,end);</li> : arranges in ascending oder
  <li>reverse(start,end);</li> : reverse the given array or vector
  <li>*max_element(start,end);</li> : returs the maximum value in array
  <li>*min_element(start,end);</li> : returns minimum value in array
  <li>accumulate(start,end,intial sum);</li> : find the sum of the elements
  <li>count(start,end,val);</li> : counts the no of times the x occured 
  <li>find(start,end,val);</li> :find the paticular eliment
  <li>distance(start,end);</li> :finds the distance between the 2 elements  ( size of the 
  <li>arr.erase(position);</li> :delete the element at the paticular position
  <li>unique(start,end);</li>  :delete the consecutive dublicates
  <li>arr.erase(unique(start,end),arr.end);</li>  deletes the all dublicates in sorted array
  </ul>
  
  <h3>Vector</h3>
  header file ==> <b>#include&lt;vector&gt;</b> <br>
  &diams; declaration <strong> vector&lt;int&gt; v;</strong> <br>
  &diams; declaring iterator to vectors &rarr; <b>vector&lt;int&gt; ::iterator it;</b><br>
  &diams; inplace of long declaration we can use <b>auto it </b>;
 <b><ul>
    <li>v.size()</li>
  <li>v.begin()</li>
  <li>v.end()</li>
  <li>v.push_back(val)</li>
  <li>v.pop_back(val)</li>
  <li>v.insert(pos,val)</li>
  <li>v.erase(pos)</li>
  <li>v.swap(v2)</li>
  <li>v.clear()</li>
  <li>v.emplace_back(val)<\li>
  <li>v.front()</li>
  <li>v.back()</li>
  <li>v.at(pos)</li>
  <li>v.max_size()</li>
  <li>v.capacity()</li>
  <li>v.resize()</li>
  <li>v.empty()</li>
  <li>shrink_to_fit()</li.
  <li>v.reverse()</li>
  </ul></b>
    
    
    
  
  
