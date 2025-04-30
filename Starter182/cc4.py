def count_friendships(test_cases):
    results = []

    for n, heights in test_cases:
        # Compute left-reachable indices
        Larr = [0] * n
        Rarr = [0] * n

        for i in range(1, n):
            if i == 1 or (heights[i] - heights[i - 1]) != (heights[i - 1] - heights[i - 2]):
                Larr[i] = i - 1
            else:
                Larr[i] = Larr[i - 1]

        # Compute right-reachable indices
        Rarr[-1] = n - 1
        for i in range(n - 2, -1, -1):
            if i == n - 2 or (heights[i + 1] - heights[i]) != (heights[i + 2] - heights[i + 1]):
                Rarr[i] = i + 1
            else:
                Rarr[i] = Rarr[i + 1]

        # Build intervals and sort them
        intervals = sorted(zip(Larr, Rarr))

        # Binary search equivalent (find first interval with L > key)
        def lower_bound(key):
            lo, hi = 0, n
            while lo < hi:
                mid = (lo + hi) // 2
                if intervals[mid][0] > key:
                    hi = mid
                else:
                    lo = mid + 1
            return lo

        # Count non-intersecting pairs
        non_intersect = 0
        for i in range(n):
            idx = lower_bound(intervals[i][1])
            non_intersect += (n - idx)

        # Compute friendship pairs
        total_pairs = n * (n - 1) // 2
        friendships = total_pairs - non_intersect
        results.append(str(friendships))

    return results


# Input Handling
T = int(input())
test_cases = []

for _ in range(T):
    N = int(input())
    H = list(map(int, input().split()))
    test_cases.append((N, H))

# Compute and print results
for res in count_friendships(test_cases):
    print(res)