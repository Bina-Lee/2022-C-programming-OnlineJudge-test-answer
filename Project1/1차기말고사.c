int main() {
	char S[10];
	gets(S);
	char a;
	int c = 0;
	scanf("%c", &a);
	for (int i = 0; i < 10; i++) {
		if (S[i] == a)c++;
	}
	printf("%d", c);
}

int main() {
	char S[20];
	gets(S);
	for (int i = 0; i < 20; i++) {
		if (isupper(S[i])) {
			S[i] = tolower(S[i]);
		}
		else {
			S[i] = toupper(S[i]);
		}
	}
	printf("%s", S);
}

int main() {
	char S[100];
	gets(S);
	int c = 0;
	for (int i = 0; i < 100; i++) {
		if (S[i] == '\0') break;
		if (S[i] == ' ') {
			c++;
		}
	}
	printf("%d", c + 1);
}

int main() {
	char S[100];
	gest(S);
	int l = strlen(S);
	int c = 1;
	for (int i = 0; i < l; i++) {
		if (S[i] != S[l - i - 1]) {
			c = 0;
		}
	}
	printf("%d", c);
}



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int c = 0;
	for (int i = 0; i < 100; i++) {
		if (n == 0)break;
		n = n / 10;
		c++;
	}
	printf("%d", c);
}

int main() {
	int s[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &s[i][j]);
		}
	}
	int c[4] = { 0,0,0,0 };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			c[i] = (c[i] < s[i][j]) ? s[j][i] : c[i];
		}
	}
	printf("%d", c[0] + c[1] + c[2] + c[3]);
}*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int k;
	scanf("%d", &k);
	int r = 0;
	int s = 0;
	for (int i = 1; i < 1000; i++) {
		s = s + i;
		if (s > k) {
			r = i;
		}
	}
	printf("%d", r);
}



int main() {
	int s[4][4];//반 점수
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &s[i][j]);
		}
	}
	int c[4] = { 0,0,0,0 };//점수 저장
	int a[4] = { 0,0,0,0 };//반 저장
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			a[i] = (c[i] < s[j][i]) ? j : a[i];
			c[i] = (c[i] < s[j][i]) ? s[j][i] : c[i];
		}
	}
	printf("%d", a[0] + a[1] + a[2] + a[3]);
}

struct cg {
	char c;
	int g;
};
int main() {
	struct cg a[4][4];
	
}