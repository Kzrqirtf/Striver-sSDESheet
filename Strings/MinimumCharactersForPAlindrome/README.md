<h2><a href="https://www.codingninjas.com/studio/problems/893000?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website">Minimum Character For a String to become Palindrome</a></h2>
<img src='https://img.shields.io/badge/Difficulty-Hard-red' alt='Difficulty: Hard' /><hr>
<p>Given a string STR of length N. The task is to return the count of minimum characters to be added at front to make the string a palindrome.

For example, for the given string “deed”, the string is already a palindrome, thus, minimum characters needed are 0.

Similarly, for the given string “aabaaca”, the minimum characters needed are 2 i.e. ‘a’ and ‘c’ which makes the string “acaabaaca” palindrome.</p>


<p><strong class="example">Example 1:</strong></p>

<pre>
Sample input 1 :
2
abcd
dad 
Sample output 1 :
3
0
Explanation of sample input 1 :
For test case 1 : 
Minimum characters to be added at front to make it a palindrome are 3 i.e. “dcb” which makes the string “dcbabcd”.  

For test case 2 :
The string is already a palindrome, we do not need to add any character.     
Sample input 2 :
2
xxaxxa    
abb
Sample output 2 :
1
2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= T <= 10 
1 <= N <= 10 ^ 5 </code></li>
	<li><code>STR contains only lowercase English letters.

Time limit: 1 sec</code></li>
</ul>
