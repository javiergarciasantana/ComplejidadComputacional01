// func_pr.h
#ifndef FUNC_PR_H
#define FUNC_PR_H

class PrimitiveRecursive {
public:
    virtual int baseCase(int n) = 0;     // Pure virtual for base case (identity)
    virtual int recursiveCase(int n) = 0; // Pure virtual for recursive case

    // The main function that evaluates the primitive recursive function
    int evaluate(int n) {
        if (n == 0) {
            return baseCase(n);
        } else {
            return recursiveCase(n);
        }
    }
};

#endif
