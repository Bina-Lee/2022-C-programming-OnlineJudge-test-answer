//A

#include<stdio.h>
int main() {
    char arr[100];
    gets(arr);
    int cnt = 0;
    for (int i = 0; i < 100; i++)if (arr[i] == '!')cnt++;
    printf("%d", cnt);
}

//B

#include<stdio.h>
int main() {
    int arr[50][50];
    int n = 0;
    scanf("%d", &n);
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0)arr[i][j] = cnt;
            else arr[i][n - j - 1] = cnt;
            cnt++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
//////////////////////////////////
#include<stdio.h>
int main() {
    int arr[50][50];
    int n = 0;
    scanf("%d", &n);
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0)printf("%d ", cnt);
            else printf("%d ", cnt + n - 1 - 2 * j);
            cnt++;
        }
    }
}

//C

#include<stdio.h>
int main() {
    unsigned char arr[100];
    gets(arr);
    int len;
    for (int i = 0; i < 100; i++) {
        if (arr[i] == 0) {
            len = i;
            break;
        }
    }

    for (int i = 0; i < len / 2; i++) {
        unsigned char temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }

    for (int i = 0; i < len; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z')arr[i] = arr[i] + 32;
        else if (arr[i] >= 'a' && arr[i] <= 'z')arr[i] = arr[i] - 32;
        else if (arr[i] == 0)break;
    }

    printf("%s", arr);
}

//D

#include<stdio.h>
int main() {
    char text[50];
    scanf("%s", text);
    for (int i = 0; i < 50; i++) {
        if (text[i] == 'a')if (text[i + 1] == 'n')if (text[i + 2] == 'd') {
            text[i] = '&';
            for (int j = i + 1; j < 50; j++)text[j] = text[j + 2];
        }
        else if (text[i] == 0)break;
    }
    printf("%s", text);
}

//E

#include<stdio.h>
int main() {
    char arr[100];
    scanf("%s", arr);
    int alpha[26] = { 0, };
    for (int i = 0; i < 100; i++) {
        if (arr[i] != 0)alpha[arr[i] - 'a']++;
        else break;
    }
    for (int i = 0; i < 26; i++)printf("%d ", alpha[i]);
}

//F

#include<stdio.h>
int main() {
    unsigned int a;
    int* poa = &a;
    char* pob = poa;
    scanf("%u", &a);
    unsigned int b;
    int* poc = &b;
    char* pod = poc;

    for (int i = 0; i < 4; i++) {
        *(pod + i) = *(pob + 3 - i);
    }
    printf("%u", b);
}