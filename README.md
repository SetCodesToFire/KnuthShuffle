# KnuthShuffle
This is a c+++ implementation of Knuth shuffle algorithm as well as it also contains a basic o(n^2) algorithm that i have come up with.

The Fisher–Yates shuffle is an algorithm for generating a random permutation of a finite sequence—in plain terms, the algorithm shuffles
the sequence. The algorithm effectively puts all the elements into a hat; it continually determines the next element by randomly drawing 
an element from the hat until no elements remain. The algorithm produces an unbiased permutation: every permutation is equally likely. 
The modern version of the algorithm is efficient: it takes time proportional to the number of items being shuffled and shuffles them in 
place.

The Fisher–Yates shuffle is named after Ronald Fisher and Frank Yates, who first described it, and is also known as the Knuth shuffle 
after Donald Knuth.

# Algorithm
KnuthShuffle is an algorithm used to produce shuffled string or array in linear time. So this could be very helpgul to generate permutative result.

```
-- To shuffle an array a of n elements (indices 0..n-1):
for i from n−1 downto 1 do
     j ← random integer such that 0 ≤ j ≤ i
     exchange a[j] and a[i]
```

The c++ representation of this algo as done by me is :

```c++
  int i,mark=0,temp;
  while(mark<lengthArray-1)
  {
    i=rand() % (lengthArray-mark) + mark;
    if(i>29) return 0;
    temp=arr[mark];
    arr[mark]=arr[i];
    arr[i]=temp;
    mark++;
  }
```

Here **i** is the integer that help in keeping track the random positions of the array ,this random position should
always be ahead of the marked position, 
**mark** is the marked position ,all the elements behind the marked position in the array are shuffled.
