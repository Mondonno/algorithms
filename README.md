## Algorithms
Algorithms stuff created on my own, grabbed from some resources and all of them are putted here.

## Methodology

This repository of ready-to-use algorithms follows a methodology that makes algorithms easy to find, extend and copy to your existing code.
Every algorithm that is here needs to be:

- In separated file need to work sreperatly, without using any sources or algorithms from another one.
- Easy to copy and paste into your own code.
- Is supposed to be fast, not necessarily readable

> **Note**<br>
> Usefull for creating memory-efficent algorithms are sizes of each types in C++, they are listed in [sizes file](./SIZES.md)

## Tasks

List of currently implemented algorithms:

- **Prefix sums** Answers: `O(1)`
    - [x] 2d sums `O(n * m)`
    - [x] Normal sums `O(n)`
    - [x] Sums on overlapping intervals `O(n)`

- **Math**
    - [x] Is a prime number `O(sqrt2(n))`
    - [x] Euklides NWD `O(log2(max(n, k)))`
    - [x] Euklides NWW `O(log2(max(n, k)))`
    - [x] Advenced euklides `O(log2(max(n, k)))`
    - [x] The sieve of Eratosthenes `O(n log2(log2(n)))`
    - [ ] Number of dividers
    - [ ] Remembered factorial
    - [ ] Permutations

- **Trees** `O(log2(n))`
    - [x] Range-Range Tree
    - [x] Point-to-Range Tree
    - [x] Range-to-Point Tree

- **Graphs**
    - [x] Dijkstra algorithm `O(m log2(n))`
    <!-- N is count of rows | M is count of columns (or revertable)  -->
    - [x] BFS for:
        - Graph `O(n+m)`
        - Grid `O(n*m)`
    - [x] DFS for:
        - Graph: `O(n+m)`
        - Grid `O(n*m)`

- **Sparses**
    - [x] Range Minimum Queries `O(n log n)` `O(1)`
    - [x] Range Sum Queries (is simmilar to prefix sums but much slower)

- **Other**
    - [x] Caterpillar algorithm `O(2 * n)`
    - [x] Merge sort `O(n log n)`
    - [x] Binary Search `O(log2(n))`
    - [x] Bubble sort `O(n^2)`

### Credits

Thanks for help from various internet sources including software engineering forums and [CpAlgorithms](https://cp-algorithms.com/)
