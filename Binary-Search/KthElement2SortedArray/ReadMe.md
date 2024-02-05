<h2><a href="https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1">Kth Element of 2 Sorted Array</a></h2> 
<img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr>
<p>Given two sorted arrays<code>arr1</code>  and <code>arr2</code> of size N and M respectively and an element K. 
The task is to find the element that would be at the kth position of the final sorted array.
 </p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong>
arr1[] = {2, 3, 6, 7, 9}
arr2[] = {1, 4, 8, 10}
k = 5
<strong>Output:</strong>
6
<strong>Explanation:</strong>
The final sorted array would be -
1, 2, 3, 4, 6, 7, 8, 9, 10
The 5th element of this array is 6.
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= N, M <= 10<sup>6</sup>
0 <= arr1i, arr2i < INT_MAX
1 <= K <= N+M</code></li>
	<li><code>Expected Time Complexity: O(Log(N) + Log(M))
Expected Auxiliary Space: O(Log (N))</code></li>
</ul>
