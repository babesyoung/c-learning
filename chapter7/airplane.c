/*
 * name: airplane.c
 * purpose: 选择合适的航班，并输出起飞时间、到达时间
 * author: babesyoung
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int time1 = 480, time2 = 583, time3 = 679, time4 = 767,
        time5 = 840, time6 = 945, time7 = 1140, time8 = 1305;

    int hour, minute;
    char ch;

    printf("enter a 12-hour time:(xx:xx)\n");
    scanf("%d:%d", &hour, &minute);

    while ((ch = getchar()) == ' ') {
            ;
    }
    switch (toupper(ch)) {
        case 'A':
            hour += 0;
            break;
        case 'P':
            hour += 12;
            break;
    }
    printf("24-hour time is: %d:%d\n", hour, minute);

    int time_now = hour * 60 + minute;

    int m1 = ((time1 >= time_now) ? (time1 - time_now) : (time_now - time1)),
        m2 = ((time2 >= time_now) ? (time2 - time_now) : (time_now - time2)),
        m3 = ((time3 >= time_now) ? (time3 - time_now) : (time_now - time3)),
        m4 = ((time4 >= time_now) ? (time4 - time_now) : (time_now - time4)),
        m5 = ((time5 >= time_now) ? (time5 - time_now) : (time_now - time5)),
        m6 = ((time6 >= time_now) ? (time6 - time_now) : (time_now - time6)),
        m7 = ((time7 >= time_now) ? (time7 - time_now) : (time_now - time7)),
        m8 = ((time8 >= time_now) ? (time8 - time_now) : (time_now - time8));

    int min12 = m1 < m2 ? m1 : m2,
        min34 = m3 < m4 ? m3 : m4,
        min1234 = min12 < min34 ? min12 : min34,

        min56 = m5 < m6 ? m5 : m6,
        min78 = m7 < m8 ? m7 : m8,
        min5678 = min56 < min78 ? min56 : min78,

        min = min1234 < min5678 ? min1234 : min5678;

    if (min == m1) {
        printf("closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    } else if (min == m2) {
        printf("closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    } else if (min == m3) {
        printf("closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    } else if (min == m4) {
        printf("closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    } else if (min == m5) {
        printf("closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    } else if (min == m6) {
        printf("closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    } else if (min == m7) {
        printf("closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    } else if (min == m8) {
        printf("closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}
