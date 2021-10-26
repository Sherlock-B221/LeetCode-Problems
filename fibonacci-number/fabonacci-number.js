const fib = N => {
    const memo = {};
    for (let i = 0; i <= N; i++) {
        if (i < 2)   memo[i] = i;
        else memo[i] = memo[i-2] + memo[i-1];
    }
    return memo[N];
}
