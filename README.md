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

NOTES:
<strong>Time Complexity</strong>
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

<strong> Space Complexity</strong>
- Variables we have: 
    + A - n<sup>2</sup>
    + B - n<sup>2</sup>
    + C - n<sup>2</sup>
    + n - 1
    + i - 1
    + j - 1
=> Total S(n) = 3n<sup>2</sup> + 3
```



    
