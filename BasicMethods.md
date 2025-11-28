# Algorithm

-**Frequency Count Method**
```html
void Add(A, B, n){
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j ++){
            C[i, j] = A[i, j] + B[i, j];
        }
    }
}
```

<strong>Explain:</strong>
<emphasize>Time Complexity</emphasize>
- Outer loop:
    + (i = 0) - 1 times
    + (i < n) - n+1 times
    + (i++)   - n times
    => outer loop takes n+1 times

- Inner loop:
    + (j = 0) - 1 * n times (because outer loop run n times)
    + (j < n) - (n+1) * n times (same reason)
    + (j++)   - n * n times (same reason)
    => inner loop takes (n+1) * n times

- Addition:
    + C[i, j] = A[i, j] + B[i, j]; takes n * n times

=> Total frequency f(n) = (n+1) + ((n+1) * n) + n * n = 2n<sup>2</sup> + 2n + 1
=> O(n<sup>2</sup>)

<emphasize> Space Complexity</emphasize>
- Variables we have: 
    + A - n<sup>2</sup>
    + B - n<sup>2</sup>
    + C - n<sup>2</sup>
    + n - 1
    + i - 1
    + j - 1
=> Total S(n) = 3n<sup>2</sup> + 3
=> O(n<sup>2</sup>)

-**Example 1:**
```html
for(int i = 1; i < n; i = i+2) {
    do anything;
}
```
<strong>Explain:</strong>
<emphasize>Time Complexity:</emphasize>
- Number of comparisons: (i < n):
    + (n/2) + 1
- Number of iterations:
    + If n = even then (n/2) times
        Ex: n = 10 then 5 times
    + If n = odd then (n-1/2) times
        Ex: n = 11 then 5 times
=> Both give the same: (n/2) times
=> O(n) times

<emphasize>Space Complexity:</emphasize>
- Variables we have:
    + i - 1
    + n - 1
=> Total S(n) = 2
=> O(1)

-**Example 2:**
```html
for(int i = 0; i < n; i++) {
    for (j = 0; j < i; j++) {
        do anything;
    }
} 
```
<strong>Explain:</strong>
<emphasize>Time Complexity:</emphasize>
<table>
<caption>Examine the loop on the code above</caption>
    <thead>
        <tr>
            <th>Loop number</th>
            <th>i</th>
            <th>j</th>
            <th>Number of time we do anything</th>
            <th>Explaination</n>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>1</td>
            <td>0</td>
            <td>0</td>
            <td>0 time</td>
            <td>Because 0 is not less than 0</td>
        </tr>
        <tr>
            <td>2</td>
            <td>1</td>
            <td>0, 1</td>
            <td>1 time for j = 0</td>
            <td>Because 1 is not less than 1</td>
        </tr>
        <tr>
            <td>3</td>
            <td>2</td>
            <td>0, 1, 2</td>
            <td>2 times for j = 0 and 1</td>
            <td>Because 2 is not less than 2</td>
        </tr>
        <tr>
            <td>...</td>
            <td>...</td>
            <td>...</td>
            <td>...</td>
            <td>...</td>
        </tr>
    </tbody>
</table>

=> We'll look into the number of time the line do anything execute, which is always equal to i.
=> When i = n − 1, the inner loop runs n − 1 times for that specific iteration only.
=> The outer loop executes n times, and over all iterations, the inner loop executes: 0+1+2+...+(n-1) = n(n-1)/2
=> Total time it takes is n(n-1)/2 + n = n(n+1)/2
=> O(n<sup>2</sup>)

<emphasize>Space complexity</emphasize> = O(1)

-**Example 2:**
```html
p = 0
for(int i = 1; p <= n; i++) {
    p = p+1;
}
```
<strong>Explain:</strong>
<emphasize>Time Complexity:</emphasize>
 + Loop 1: i = 1, then p = 0+1
 + Loop 2: i = 2, then p = 0+1+2
 + Say the loop k is the last one then i = k
 => p = 0+1+2+...+k = k(k+1)/2 when p > n
 => Say k<sup>2</sup> > n => k > $\sqrt{9}$
 => O ($\sqrt{9}$)

