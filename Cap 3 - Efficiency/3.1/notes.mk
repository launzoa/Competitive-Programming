**O(1)** The running time of a constant-time algorithm does not depend on the input 
size. A typical constant-time algorithm is a direct formula that calculates the 
answer. 


**O(log n)** A logarithmic algorithm often halves the input size at each step. The 
running time of such an algorithm is logarithmic, becauselog2 n equals the number 
of times n must be divided by 2 to get 1. Note that the base of the logarithm is not 
shown in the time complexity. 


**O(√n)** A square root algorithm is slower than O(logn) but faster than O(n).A 
special property of square roots is that √n = n/√n,so n elements can be divided 
into O(√n) blocks of O(√n) elements. 


**O(n)** A linear algorithm goes through the input a constant number of times. This 
is often the best possible time complexity, because it is usually necessary to access 
each input element at least once before reporting the answer. 


**O(n*logn)** This time complexity often indicates that the algorithm sorts the input, 
because the time complexity of efficient sorting algorithms is O(n log n). Another 
possibility is that the algorithm uses a data structure where each operation takes 
O(logn) time. 


**O(n^2)** A quadratic algorithm often contains two nested loops. It is possible to go 
through all pairs of the input elements in O(n2) time. 


**O(n^3)** A cubic algorithm often contains three nested loops. It is possible to go 
through all triplets of the input elements in O(n3) time. 


**O(2^n)** This time complexity often indicates that the algorithm iterates through all 
subsets of the input elements. For example, the subsets of {1, 2, 3} are ∅, {1}, {2}, 
{3}, {1,2}, {1,3}, {2,3} and {1,2,3}


**O(n!)** This time complexity often indicates that the algorithm iterates through all 
permutations of the input elements. For example, the permutations of {1, 2, 3} are 
(1, 2,3), (1,3,2), (2,1,3), (2,3,1), (3,1,2) and (3,2,1)