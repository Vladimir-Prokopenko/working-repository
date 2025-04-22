   int i = 0;
    int result = (i++ == 0) ? ++i : --i;
    printf("%d, %d\n", result, i);