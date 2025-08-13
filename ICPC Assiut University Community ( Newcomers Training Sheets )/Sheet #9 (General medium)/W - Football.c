#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n, t1 = 0, t2 = 0;

    char team1[11] = "", team2[11] = "", goal[11];

    scanf("%d", &n);

    while (n--) {

        scanf(" %s", goal);

        if (team1[0] == '\0'){
            strcpy(team1, goal);
            t1++;
        }
        else if (team2[0] == '\0' && strcmp(team1, goal) != 0) {
            strcpy(team2, goal);
            t2++;
        }
        else if (strcmp(team1, goal) == 0) {
            t1++;
        }
        else {
            t2++;
        }
    }

    if (t1 > t2) {
        printf("%s", team1);
    }
    else {
        printf("%s", team2);
    }

    return 0;
}