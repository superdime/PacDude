#ifndef PAIR_H
#define PAIR_H

// Simple Class to handle Pairs of data (specifically ints)
template <typename T>
struct Pair{
    T x;
    T y;
    Pair<T>(T x, T y) : x(x), y(y) {}
};

template <typename T>
bool operator==(Pair<T>& a, Pair<T>& b){
    return (a.x == b.x) && (a.y == b.y);
}

template <typename T>
bool operator!=(Pair<T>& a, Pair<T>&b){
    return !(a == b);
}

#endif