#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<math.h>

#if 0

#include <stdio.h>
#define MAX 100


int main()
{

    char phone[MAX];
    scanf("%s", phone);

    // ================================================
    // 이 부분에 코드를 작성하세요.

    for (int i = 0; i < MAX; i++) {
        if (phone[i] == '-')phone[i] = ' ';
        else if (phone[i] == 0)break;
        else if (~(phone[i] >= '0' && phone[i] <= '9'))phone[i] = '0';
    }


    //=================================================

    printf("%s", phone);

    return 0;
}

#endif

#if 0



#include <stdio.h>

unsigned int makeParity(unsigned int _data) {
    int count = 0;
    for (int i = 30; i >= 0; i--) {
        if (_data >> i & 0x01)count++;
    }
    if (count % 2 == 1)_data + 2147483648;
    return count;
}

int main() {

    unsigned int data;

    scanf("%u", &data);

    printf("%u", makeParity(data));

    return 0;
}

#endif


#if 0

#include <stdio.h>
#define MAX 100

int main() {

    unsigned int arr[MAX][2];
    int n = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // 이 부분에 코드를 작성하세요. ===========================

    for (int i = 0; i < n; i++) {
        int count = 0;
        int check = 0;
        switch (arr[i][0]) {
        case 10:
            for (int j = 0; j < 30; j++) {
                if (arr[i][1] == 0)break;
                if (arr[i][1] % 10 == 0)count++;
                arr[i][1] = arr[i][1] / 10;
            }
            break;
        case 2:
            for (int j = 31; j >= 0; j--) {
                if (arr[i][1] >> j & 0x01)check++;
                if ((!(arr[i][1] >> j & 0x01)) && check)count++;
            }
            break;
        case 16:
            for (int j = 7; j >= 0; j--) {
                if (arr[i][1] >> j & 0x0F)check++;
                if (!(arr[i][1] >> (j * 4) & 0x0F) && check)count++;
            }
            break;
        default:
            break;
        }
        printf("%d ", count);
    }

    // ========================================================

    return 0;
}
#endif

#if 0
#include <stdio.h>

unsigned int makeParity(unsigned int _data) {
    _data = _data % 128;
    int count = 0;
    for (int i = 7; i >= 0; i--) {
        if (_data >> i & 0x01)count++;
    }
    if (count % 2 == 1)_data + (1 << 30);
    return count;
}

int main() {

    unsigned int data;

    scanf("%u", &data);

    printf("%u", makeParity(data));

    return 0;
}
#endif
