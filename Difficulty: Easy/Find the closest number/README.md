<h2><a href="https://www.geeksforgeeks.org/problems/find-the-closest-number5513/0">Find the closest number</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a <strong>sorted</strong> array <strong>arr[]</strong> of positive integers. The task is to find the closest value in the array to the given number <strong>k</strong>. The array may contain duplicate values.<br></span><span style="font-size: 18px;">Note: If the difference with k is the same for two values in the array return the greater value.<br></span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>  arr[] = [1, 3, 6, 7], k = 4
<strong>Output:</strong> 3
<strong>Explanation: </strong>We have array arr={1, 3, 6, 7} and target is 4. If we look at the absolute difference of target with every element of the array we will get { |1-4|, |3-4|, |6-4|, |7-4| }  = {3, 1, 2, 3}. So, the closest number is <strong>3.</strong>
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 2, 3, 5, 6, 8, 9], k = 4
<strong>Output: </strong>5<br><strong>Explanation: </strong>The absolute difference of 4 is 1 from both 3 and 5. According to the question, we have to return greater value, which is 5.<br></span></pre>
<pre><strong>Input: </strong>arr[] = [6, 8, 8, 8, 9, 11, 13, 13, 15, 18, 19], k = 10
<strong>Output: </strong>11</pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>6</sup><br>1 ≤ k ≤ 10<sup>9</sup><br>1 ≤ arr[i] ≤ 10<sup>9</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Algorithms</code>&nbsp;<code>Arrays</code>&nbsp;<code>Binary Search</code>&nbsp;<code>Data Structures</code>&nbsp;