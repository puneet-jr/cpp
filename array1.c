// #include<stdio.h>

// struct date {
//     int day;
//     int month;
//     int year;
// };

// struct date getNextDate(struct date d) {
//     if (d.day < 28) {
//         d.day++;
//     } else if (d.day == 28) {
//         if (d.month == 2) {
//             d.day = 1;
//             d.month++;
//         } else {
//             d.day++;
//         }
//     } else if (d.day == 29) {
//         if (d.month == 2) {
//             d.day = 1;
//             d.month++;
//         } else {
//             d.day++;
//         }
//     } else if (d.day == 30) {
//         if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11) {
//             d.day = 1;
//             d.month++;
//         } else {
//             d.day++;
//         }
//     } else if (d.day == 31) {
//         if (d.month == 12) {
//             d.day = 1;
//             d.month = 1;
//             d.year++;
//         } else {
//             d.day = 1;
//             d.month++;
//         }
//     }
//     return d;
// }

// int main() {
//     struct date d;
//     scanf("%d %d %d", &d.day, &d.month, &d.year);
//     d = getNextDate(d);
//     printf("%d %d %d\n", d.day, d.month, d.year);
//     return 0;
// }