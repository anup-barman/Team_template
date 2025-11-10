if (o == 1) {
    //90* clock-wise
    now = {{0, 1, 0}, { -1, 0, 0}, {0, 0, 1}};
}
else if (o == 2) {
    //90* anti-clock
    now = {{0, -1, 0}, {1, 0, 0}, {0, 0, 1}};
}
else if (o == 3) {
    ll p;
    cin >> p;
    //mirror with x axis at point p
    now = {{ -1, 0, 2 * p}, {0, 1, 0}, {0, 0, 1}};
}
else {
    ll p;
    cin >> p;
    //mirror with y axis at point p
    now = {{1, 0, 0}, {0, -1, 2 * p}, {0, 0, 1}};
}
op[i + 1] = matMul(now, op[i]); // this
// op[i + 1] = matMul(op[i], now); //not this
    