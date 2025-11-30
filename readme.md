# When to Use a Tree vs Normal Data Structures

## Use a Tree When:
1. You need hierarchy

- Trees are perfect for representing parent → child relationships.
- Examples:
    - File systems
    - Company org chart
    - Comment threads
    - HTML DOM
    - Category/subcategory menus
- Normal linear structures (arrays, lists) can’t model hierarchy cleanly.

2. You need sorted data + fast search (BST / AVL / Red-Black)

- Balanced trees give:
    - Search: O(log n)
    - Insert: O(log n)
    - Delete: O(log n)
    - Inorder traversal: sorted order
- Use a tree when:
    - You need both ordering and fast operations
    - Hash tables cannot preserve order
    - Arrays/vectors are too slow to insert/delete in the middle

3. You need range queries

- Example:
    - “Find all values between L and R”
    - “Count numbers < X”
    - “Find next greater value”
    - “Find smallest value ≥ target”

- Trees (BST, AVL, Red-Black) handle this efficiently.
- Arrays require full scan → O(n).

4. You need to frequently update the structure

    - If you add/remove items a lot:
    - Arrays: slow for insert/delete (O(n))
    - Trees: O(log n) updates
    - Hash tables: fast but no sorted order

5. You need specialized tree structures

- Use Segment Trees when:
    - You need fast range min/max/sum queries
    - You need to update values often
- Use Tries when:
    - Storing strings for autocomplete
    - Prefix searching
    - Dictionary word lookups
- Use Heaps when:
    - Implementing priority queue
    - Repeatedly getting min/max

## Do NOT use trees when simpler structures work

1. Use a normal array/vector when:

    - You need random access (arr[i])
    - You need compact storage
    - You need fast iteration
    - Data rarely changes
    - You don’t need ordering guarantees
- Arrays/vectors are simpler and extremely fast in real systems.

2. Use a hash map / unordered_map when:

    - You only need quick lookup by key
    - Order does not matter
    - Insert/search/delete must be O(1)
- Hash map is usually faster than any tree if sorting isn’t required.

4. Use a linked list when:

- You insert/delete often in the middle
- Order of elements matters
- Random access is NOT needed

5. Use a Queue When:

    1. You need FIFO order (First In, First Out)
        - The first element added must be the first one removed.
        - Examples:
            - Processing customers in line
            - OS scheduling
            - Task scheduling
            - Print jobs
            - Network packets
    2. You need level-order processing
    3. You need controlled order with no backtracking


6. Use a Stack When:

    1. You need LIFO order (Last In, First Out)
        - The last item added should be the first removed.
        Examples:
            - Undo/Redo
            - Backtracking
            - Browser history
            - Function call stack
            - Parentheses matching
            - Syntax parsing
    2. You need Depth-first behavior
    3. You need to reverse something