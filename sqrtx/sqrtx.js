var mySqrt = function(x) {
    let y = Math.sqrt(x);
    return (y % 1 == 0 ? y : Math.floor(y));
};
