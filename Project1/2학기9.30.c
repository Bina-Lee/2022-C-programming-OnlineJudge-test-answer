#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<math.h>

#if 0
#include <stdio.h>

int main() {

    int arr[10];

    // 이 부분에 코드를 작성하시오. ===========================



    for (int i = 0; i < 10; i++) {
        if (arr[i] < 0)arr[i] = 0;
    }



    // ==============================================

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
#endif

#if 0
#include <stdio.h>

int eseStrlen(char string[]) {
    // 이 부분에 코드를 작성하시오. ==============

    int case1 = 0;
    int value = 0;



    for (int i = 0; i < 100; i++) {

        if (string[i] == '!') {
            case1 = 2;
            value = i;
            break;
        }

        else if (string[i] == 'e')if (string[i + 1] == 's')if (string[i + 2] == 'e') {
                case1 = 1;
                break;
            }

    }


    switch (case1) {
    case 0:
        for (int i = 0; i < 100; i++) {
            if (string[i] == 0) {
                value = i;
                break;
            }
        }
        break;
    case 1:
        for (int i = 0; i < 100; i++) {
            if (string[i] == 0) {
                value = i;
                break;
            }
        }
        value = 10 * value;
        break;
    case 2:
        for (int i = 0; i < 100; i++) {
            if (string[i] == '!') {
                value = i;
            }
        }
    }

    return value;



    // ==================================
}

int main() {
    char arr[100];
    scanf("%s", arr);

    printf("%d", eseStrlen(arr));

    
}
#endif


#if 0
#include <stdio.h>
#include <stdlib.h>

int diffMaxMin(int arr[], int n) {
    // 이 부분에 코드를 작성하시오. ===========================


    int min = 0, max = 0, minvalue = 100000, maxvalue = -100000;
    for (int i = 0; i < 100; i++) {
        if (arr[i] > maxvalue) {
            maxvalue = arr[i];
            max = i;
        }
    }
    for (int i = 0; i < 100; i++) {
        if (arr[i] < minvalue) {
            minvalue = arr[i];
            min = i;
        }
    }
    int res = max - min;
    if (res < 0)res = -res;
    return res;



    // ========================================================
}


int main() {

    int n;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", diffMaxMin(arr, n));
    return 0;
}
#endif

#if 0
#include <stdio.h>


int eseStrlen(char string[]) {
    // 이 부분에 코드를 작성하시오. ==============

    int value = 0;
    int case1 = 1;
    for (int i = 0; i < 100; i++) {
        if (string[i] == '!') {
            case1 = 3;
            value = i;
            break;
        }
        else if (string[i] == 'e')if (string[i + 1] == 's')if (string[i + 2] == 'e') {
            case1 = 2;
            break;
        }
        else case1 = 1;
    }
    switch (case1) {
    case 1:
        for (int i = 0; i < 100; i++) {
            if (string[i] == 0)value = i;
        }
        break;
    case 2:
        for (int i = 0; i < 100; i++) {
            if (string[i] == 0)value = i;
        }
        value = value * 10;
        break;
    case 3:
        value = value;
    }
    return value;




    // ==================================
}

int main() {
    char arr[100];
    scanf("%s", arr);

    printf("%d", eseStrlen(arr));
}
#endif

#if 0

#include <stdio.h>


int eseStrlen(char string[]) {
    // 이 부분에 코드를 작성하시오. ==============

    int value = 0;
    int case1 = 1;
    for (int i = 0; i < 100; i++) {
        if (string[i] == '!') {
            case1 = 3;
            value = i;
            break;
        }
        else if (string[i] == 'e')if (string[i + 1] == 's')if (string[i + 2] == 'e') {
            case1 = 2;
            break;
        }
        else {
            case1 = 1;
            break;
        }
    }
    switch (case1) {

    case 1:
        for (int i = 0; i < 100; i++) {
            if (string[i] == 0)value = i;
        }
        break;

    case 2:
        for (int i = 0; i < 100; i++) {
            if (string[i] == 0)value = i;
        }
        value = value * 10;
        break;

    case 3:
        value = value;
        break;
    }
    return value;




    // ==================================
}

int main() {
    char arr[100];
    scanf("%s", arr);

    printf("%d", eseStrlen(arr));
}
#endif

#if 1
#include <stdio.h>

int eseStrlen(char string[]) {
    // 이 부분에 코드를 작성하시오. ==============

    int case1 = 0;
    int value = 0;



    for (int i = 0; i < 100; i++) {

        if (string[i] == 33) {
            case1 = 2;
            value = i;
            break;
        }

        else if (string[i] == 'e')if (string[i + 1] == 's')if (string[i + 2] == 'e') {
            case1 = 1;
            break;
        }

    }
    switch (case1) {
    case 0:
        for (int i = 0; i < 100; i++) {
            if (string[i] == 0) {
                value = i;
                break;
            }
        }
        break;


    case 1:
        for (int i = 0; i < 100; i++) {
            if (string[i] == 0) {
                value = i;
                break;
            }
        }
        value = 10 * value;
        break;


    case 2:
        for (int i = 0; i < 100; i++) {
            if (string[i] == '!') {
                value = i;
                break;
            }
        }
        break;
    }

    return value;



    // ==================================
}

int main() {
    char arr[100];
    scanf("%s", arr);

    printf("%d", eseStrlen(arr));
}
#endif

