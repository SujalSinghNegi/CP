#ifndef MY_STDIO_H
#define MY_STDIO_H

#include <cstdio>

struct AutoRedirect {
    AutoRedirect() {
        freopen("a.txt", "r", stdin);   // Redirect input from input.txt
        freopen("b.txt", "w", stdout); // Redirect output to output.txt
        freopen("error.txt", "w", stderr);  // Redirect errors to error.txt
    }
    ~AutoRedirect() {
        fclose(stdin);
        fclose(stdout);
        fclose(stderr);
    }
};

// Auto-execute before main()
AutoRedirect autoRedirect;

#endif
