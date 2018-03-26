#include <stdio.h>
#include <string.h>
int main() {
    int T;
    int sum = 0;
    char a[6];
    int y, m, d;
    int maxyear = 9999, maxmonth = 99, maxday = 99, minyear = 0, minmonth = 0, minday = 0;
    char old[5], young[5];
    scanf("%d", &T);
    while(T--){
        scanf("%s %d/%d/%d", a, &y, &m, &d);
        if ((y < 2014 || (y == 2014 && m < 9) || (y == 2014 && m == 9 && d <= 6)) &&
            (y > 1814 || (y == 1814 && m > 9) || (y == 1814 && m == 9 && d >= 6))) {
            sum++;
            if (y < maxyear || (y == maxyear && m < maxmonth) || (y == maxyear && m == maxmonth && d < maxday)) {
                strcpy(old, a);
                maxyear = y;
                maxmonth = m;
                maxday = d;
            }
            if (y > minyear || (y == minyear && m > minmonth) || (y == minyear && m == minmonth && d > minday)) {
                strcpy(young, a);
                minyear = y;
                minmonth = m;
                minday = d;
            }
        }
    }
    if (sum > 0) {
        printf("%d %s %s", sum, old, young);
    } else {
        printf("%d", sum);
    }
    return 0;
}