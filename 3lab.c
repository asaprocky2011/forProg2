#include <stdio.h>

int main() {
    // task1();
    // int dayTimeWindow, hourTimeWindow, minTimeWindow, secTimeWindow;
    // printf("Enter the number of days, hours, minutes, seconds of the time window, separated by a space:\n");
    // scanf("%d %d %d %d", &dayTimeWindow, &hourTimeWindow, &minTimeWindow, &secTimeWindow);
    // int timeWindow = secTimeWindow + minTimeWindow * 60 + hourTimeWindow * 3600 + dayTimeWindow * 86400;
    // char line[2048];
    // char *str;
    // FILE *input = fopen("123.txt", "r");
    // str = fgets(line, 2048, input);
    // int element = stringToSecond(str);
    // int firstTimeMaxCount = 0, lastTimeMaxCount = 0, maxCount = 0, countElementInArr= -1, lenArr = 1000;
    // int count = 0, firstTime = element, lastTime = element, indexFirstElemmentInArr = 0;
    // int *arr = (int*) malloc(lenArr * sizeof(int));
    // while (str != NULL)
    // {
    //     if (countElementInArr + 1 >= lenArr - 1)
    //     {
    //         lenArr += lenArr;
    //         arr = realloc(arr, lenArr * sizeof(int));
    //     }
    //     if (element - firstTime <= timeWindow)
    //     {
    //         countElementInArr += 1;
    //         count += 1;
    //         arr[countElementInArr] = element;
    //         lastTime = element;
    //     }
    //     else
    //     {
    //         if (count > maxCount)
    //         {
    //             maxCount = count;
    //             firstTimeMaxCount = firstTime;
    //             lastTimeMaxCount = lastTime;
    //         }
    //         if (count > 1)
    //         {
    //             count -= 1;
    //             indexFirstElemmentInArr += 1;
    //             firstTime = arr[indexFirstElemmentInArr];
    //             while (element - firstTime > timeWindow && count > 1)
    //             {
    //                 count -= 1;
    //                 indexFirstElemmentInArr += 1;
    //                 firstTime = arr[indexFirstElemmentInArr];
    //             }
    //             if (element - firstTime <= timeWindow && count > 0)
    //             {
    //                 count += 1;
    //                 lastTime = element;
    //                 countElementInArr += 1;
    //                 arr[countElementInArr] = element;
    //             }
    //             else if (element - firstTime > timeWindow && count == 1)
    //             {
    //                 indexFirstElemmentInArr += 1;
    //                 firstTime = element;
    //                 lastTime = element;
    //                 countElementInArr += 1;
    //                 arr[countElementInArr] = element;
    //             }
    //         }
    //         else
    //         {
    //             indexFirstElemmentInArr += 1;
    //             firstTime = element;
    //             lastTime = element;
    //             countElementInArr += 1;
    //             arr[countElementInArr] = element;
    //         }

    //     }
    //     str = fgets(line, 2048, input);
    //     if (str != NULL)
    //     {
    //         element = stringToSecond(str);
    //     }
    //     else
    //     {
    //         if (count > maxCount)
    //         {
    //             maxCount = count;
    //             firstTimeMaxCount = firstTime;
    //             lastTimeMaxCount = lastTime;
    //         }
    //         break;
    //     }
    // }
    // printf("%d\n", maxCount);
    // int dayLast, hourLast, minLast, secLast;
    // int dayFirst, hourFirst, minFirst, secFirst;
    // secFirst = firstTimeMaxCount % 60;
    // firstTimeMaxCount /= 60;
    // minFirst = firstTimeMaxCount % 60;
    // firstTimeMaxCount /= 60;
    // hourFirst = firstTimeMaxCount % 60;
    // firstTimeMaxCount /= 24;
    // dayFirst = firstTimeMaxCount % 24;
    // printf("First Time: 1995 %d Jul %d:%d:%d\n", dayFirst, hourFirst, minFirst, secFirst);
    // secLast = lastTimeMaxCount % 60;
    // lastTimeMaxCount /= 60;
    // minLast = lastTimeMaxCount % 60;
    // lastTimeMaxCount /= 60;
    // hourLast = lastTimeMaxCount % 60;
    // lastTimeMaxCount /= 24;
    // dayLast = lastTimeMaxCount % 24;
    // printf("Last Time: 1995 %d Jul %d:%d:%d\n", dayLast, hourLast, minLast, secLast);
    // free(arr);
    return 0;
}