<h2><a href="https://www.codingninjas.com/studio/problems/median-of-a-row-wise-sorted-matrix_1115473?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION">Median of a matrix</a></h2> 
<img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr>
<p>You are given a row-wise sorted matrix 'mat' of size m x n where 'm' and 'n' are the numbers of rows and columns of the matrix, respectively.



Your task is to find and return the median of the matrix.



Note:
'm' and 'n' will always be odd.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre>Input: 'n' = 5, 'm' = 5
  <code>
'mat' = 
[     [ 1, 5, 7, 9, 11 ],
      [ 2, 3, 4, 8, 9 ],
      [ 4, 11, 14, 19, 20 ],
      [ 6, 10, 22, 99, 100 ],
      [ 7, 15, 17, 24, 28 ]   ]
  </code>

Output: 10

Explanation: If we arrange the elements of the matrix in the sorted order in an array, they will be like this-

1 2 3 4 4 5 6 7 7 8 9 9 10 11 11 14 15 17 19 20 22 24 28 99 100 

So the median is 10, which is at index 12, which is midway as the total elements are 25, so the 12th index is exactly midway. Therefore, the answer will be 10. 
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= m < 100
1 <= n < 100
1 <= mat[i][j] <=10^9

Time Limit: 1 sec  </code></li>
	<li><code> Expected Time Complexity:
Try to solve this in O(32 * m * log(n)).</code></li>
</ul>
