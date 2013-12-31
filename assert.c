#if ASSERTIONS_ENABLED

    #define debugBreak() asm { int 3 }

    #define ASSERT(expr) \
        if(expr) { } \
        else \
        { \
            reportAssertionFailure(#expr, \
               __FILE__, \
               __LINE__); \
            debugBreak(); \
        }
#else
    #define ASSERT(expr)
#endif

