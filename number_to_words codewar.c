//not mine
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char *const names_0_19[] = {[0] = "", [1] = "one", [2] = "two", [3] = "three", [4] = "four", [5] = "five", [6] = "six", [7] = "seven", [8] = "eight", [9] = "nine", [10] = "ten", [11] = "eleven", [12] = "twelve", [13] = "thirteen", [14] = "fourteen", [15] = "fifteen", [16] = "sixteen", [17] = "seventeen", [18] = "eighteen", [19] = "nineteen"};
const char *const names_20_90[] = {[2] = "twenty", [3] = "thirty", [4] = "forty", [5] = "fifty", [6] = "sixty", [7] = "seventy", [8] = "eighty", [9] = "ninety"};

static char *compose (unsigned n, char *num_string)
{
  if (n >= 1000) {
    num_string = compose(n / 1000, num_string);
    return compose(n % 1000, num_string + sprintf(num_string, " %s%s", "thousand", (n % 1000) ? " " : ""));
  } else if (n >= 100) {
    num_string = compose(n / 100, num_string);
    return compose(n % 100, num_string + sprintf(num_string, " %s%s", "hundred", (n % 100) ? " " : ""));
  } else if (n >= 20) {
    return compose(n % 10, num_string + sprintf(num_string, "%s%s", names_20_90[n / 10], (n % 10) ? "-" : ""));
  } else {
    num_string += sprintf(num_string, "%s", names_0_19[n]);
    return num_string;
  }
}

char *number_to_words (unsigned n, char *num_string)
{
  if (n == 0)
    return strcpy(num_string, "zero");
  compose(n, num_string);
  return num_string;
}
