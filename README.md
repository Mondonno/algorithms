## Algorithms
Algorithms stuff created on my own, grabbed from some resources and all of them are putted here.

## How?

- **Every algorithm** in sreperated file need to work sreperatly, without using sources from another.
- **Every algorithm** is easy to cut and copy into your own code.
- **Every algorithm** is supposed to be fast, not necessarily readable

**Note**: Usefull for creating memory-efficent algorithms are sizes of each types in C++, there are listed in [sizes file](./SIZES.md)

## Tasks

List of currently implemented:

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

Thanks for help from unknown authors on StackOverflow and [CpAlgorithms](https://cp-algorithms.com/)