#include "loader.h"
#include "functions.h"
#include <stdio.h>

#include <dlfcn.h>

#ifdef __cplusplus
extern "C"
{
#endif

    void printString(const char *const s)
    {
        printf("String from library: %s\n", s);
    }

    void loadRun(const char *const s)
    {
        void *lib;
        void (*fun)(void);

        lib = dlopen(s, RTLD_LAZY);
        if (!lib)
        {
            printf("cannot open library '%s'\n", s);
            return;
        }

        fun = (void (*)(void))dlsym(lib, "run");

        if (fun == NULL)
        {
            printf("cannot load function run\n");
        }
        else
        {
            fun();
        }

        dlclose(lib);
    }

#ifdef __cplusplus
}
#endif