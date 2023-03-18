By looking at the constraints of a problem, we can often "guess" the solution.

Common time complexities

Let n be the main variable in the problem.

If n ≤ 12, the time complexity can be O(n!).
If n ≤ 25, the time complexity can be O(2n).
If n ≤ 100, the time complexity can be O(n4).
If n ≤ 500, the time complexity can be O(n3).
If n ≤ 104, the time complexity can be O(n2).
If n ≤ 106, the time complexity can be O(n log n).
If n ≤ 108, the time complexity can be O(n).
If n > 108, the time complexity can be O(log n) or O(1).
Examples of each common time complexity

O(n!) [Factorial time]: Permutations of 1 ... n
O(2n) [Exponential time]: Exhaust all subsets of an array of size n
O(n3) [Cubic time]: Exhaust all triangles with side length less than n
O(n2) [Quadratic time]: Slow comparison-based sorting (eg. Bubble Sort, Insertion Sort, Selection Sort)
O(n log n) [Linearithmic time]: Fast comparison-based sorting (eg. Merge Sort)
O(n) [Linear time]: Linear Search (Finding maximum/minimum element in a 1D array), Counting Sort
O(log n) [Logarithmic time]: Binary Search, finding GCD (Greatest Common Divisor) using Euclidean Algorithm
O(1) [Constant time]: Calculation (eg. Solving linear equations in one unknown)
Explanations based on Codeforces problems

255D Mr. Bender and Square
Observe that 1 ≤   n, c  ≤ 109. Referring to the information above, the program's time complexity should be either O(log n) or O(1). Since no O(1) solution exists, we conclude that binary search must be used.

580B Kefa and Company
In this problem, 1 ≤  n  ≤ 105, which suggests that the time complexity can be either O(n log n) or O(n). It is quite obvious that sorting is required. Therefore, O(n log n) is the correct solution of this problem.

583B Robot's Task
Notice that n in very small (1 ≤  n  ≤ 1000) in this problem. It means that a O(n2) solution can solve it. We simply need to simulate the robot's moves.

I hope that this can help you figure out the solution of some problems quicker :)

Note: The above method may not always work in all problems. Some may require algorithms that have complex time complexities, while in some problems like 591B Rebranding, the range of n does not match the time complexity of the "optimal" solution. (1 ≤  n, m  ≤ 200 000 suggests that the time complexity is O(n log n) or O(n) but the time complexity of the solution is actually O(1).)