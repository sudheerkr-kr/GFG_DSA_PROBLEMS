class Solution {
public:
    int closestNumber(int n, int m) {
        int rem = n % m;

        int a = n - rem;
        int b;

        if (rem == 0)
            return n;

        if (n > 0)
            b = a + abs(m);
        else
            b = a - abs(m);

        int d1 = abs(n - a);
        int d2 = abs(n - b);

        if (d1 < d2)
            return a;
        else if (d2 < d1)
            return b;
        else
            return abs(a) > abs(b) ? a : b;
    }
};