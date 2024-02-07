<h2><a href="https://www.codingninjas.com/studio/problems/implement-queue-using-arrays_8390825?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM">Implement Queue using Arrays</a></h2> 
<img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr>

<p>Problem statement
Queue is a linear data structure that follows the idea of First In First Out. That means insertion and retrieval operations happen at opposite ends.



Implement a simple queue using arrays.



You are given 'query' queries which are either of the 2 types:



1 'e': Enqueue (add) element ‘e’ at the end of the queue.

2: Dequeue (retrieve) the element from the front of the queue. If the queue is empty, return -1.
</p>
<pre>
Example:
Input: Queries: 
             [ 1 2,
               1 7,
               2,
               1 13, 
               2, 
               2, 
               2 ]

Output:
         [ 2, 
           7, 
           13,  
           -1 ]

Explanation: After each operation, our queue is equal to the following:
1 2: {2}
1 7: {2, 7}
2: {7} and 2 is printed
1 13: {7, 13}
2: {13} and 7 is printed
2: {} and 13 is printed
2: {} and -1 is printed since the queue is empty.
</pre>


<ul>
	<li><code>Constraints:
1 <= ‘query’ <= 10^5
1 <= ‘e’ <= 10^6</code></li>
	
</ul>

