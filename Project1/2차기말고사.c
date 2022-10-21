#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<math.h>

#if 0
struct point {
	int x;
	int y;
};
void swapXY(struct point* v) {
	int p = v->x;
	v->x = v->y;
	v->y = p;
}
void main(void) {

	int x, y;
	struct point k;

	scanf("%d %d", &x, &y);
	k.x = x;
	k.y = y;

	swapXY(&k);

	printf("%d %d", k.x, k.y);
	return;

}
#endif

#if 0
int main() {
	char S[100];
	gets(S);

	char K[10];
	gets(K);

	char G[10];
	gets(G);

	char* loc=strtoc(S, K);
	*loc = G;
	//strcpy(loc, G);


	//char* locate = strstr(S, K);
	//strcpy(locate, G);
	//printf("%s", S);
}
#endif

#if 0
int main() {
	int a[12] = { 0, };
	int b;
	scanf("%d", &b);
	int i = 0;
	int c;
	while (b != 0) {
		c = b % 10;
		a[i] = c;
		b = b / 10;
		i++;
	}

	int d = 0;
	for (int j = 0; j<i ; j++) {
		d = d + (a[j] * pow(10, i-j-1));
	}
	
	printf("%d", d);
}
#endif

#if 0
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct point {
	int x;
	int y;
};

void calc_dist(struct point p1, struct point p2) {
	double calc = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
	printf("%.2f", calc);
}

//-------------- 이하 수정 금지

int main(void) {

	struct point p1;
	struct point p2;

	double x1, y1;
	double x2, y2;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

	p1.x = x1;
	p1.y = y1;

	p2.x = x2;
	p2.y = y2;

	calc_dist(p1, p2);

}
#endif

#if 0
int main() {
	char S[100];
	char K[10];
	gets(S);
	gets(K);

	int lens = strlen(S);
	int lenk = strlen(K);

	int c = 0;
	int cnt = 0;
	for (int i = 0; i < lens; i++) {
		c = 0;
		for (int j = 0; j < lenk; j++) {
			
			if (S[i] == K[j])c++;
		}
		if (c == strlen(K))cnt++;
		
	}
	printf("%d", cnt);
}
#endif

#if 0
int main() {
	char S[100];
	char K[10];
	char G[10];

	gets(S);
	gets(K);
	gets(G);

	int len = strlen(K);
	char* A = (char*)malloc(sizeof(char) * len);
	strcpy(A, G);

	char* found = 1;
	while (found != 0) {
		found = strstr(S, K);
		strcpy(found, A);
	}
	
	

	printf("%s", S);
}
#endif

#if 1
int main() {
	char S[100];
	char K[10];
	gets(S);
	gets(K);

	char* find = 0;

	int i = 0;
	while (1) {
		find = strstr(S, K);
		if (find == 0)break;
		i++;
	}
	printf("%d", i);
}
#endif
