#ifndef __ENVIRONMENT__
#include "env.h"
#endif

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    enum {CMD, POP_SIZE, TSP, OUT};
    TEnvironment *gEnv;
    char *dstFile;

    if (argc != 4) {
        printf("%s <pop size> <TSP instance in the same dir> <output file>\n", argv[CMD]);
        exit(EXIT_FAILURE);
    }

    dstFile = argv[OUT];
    gEnv = new TEnvironment();

    InitURandom();

    gEnv->fNumOfPop = atoi(argv[POP_SIZE]);
    gEnv->fFileNameTSP = argv[TSP];

    gEnv->fFileNameInitPop = NULL;

    gEnv->Define();
    gEnv->InitPop();

    gEnv->WritePop(1, dstFile);
}
