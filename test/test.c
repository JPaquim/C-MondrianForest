#include "test.h"

#include <stdio.h>

int tests_run = 0;

char *test_all(void) {
    mu_run_test(test_tree);
    return NULL;
}

int main(void) {
    char *result = test_all();
    if (result != NULL)
        printf("%s\n", result);
    else
        printf("All Tests Passed\n");
    printf("Tests run: %d\n", tests_run);
    return result != NULL;
}
