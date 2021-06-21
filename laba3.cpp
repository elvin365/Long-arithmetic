#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<stdlib.h> 
const int N = 1000;

int complong(int *a, int *b) {
	int i = 0;
	if (a[0] < b[0]) return -1;
	if (a[0] > b[0]) return 1;
	for (i = a[0]; i > 0; i--) {
		if (a[i] < b[i]) return -1;
		if (a[i] > b[i]) return 1;
	}
	return 0;
}

void readlong(int *a) {
	int i = 0, k = 0;
	char s[N + 1];

	gets_s(s, N + 1);
	a[0] = strlen(s);
	for (i = 0; i <a[0]; i++) {
		a[a[0] - i] = s[i] - '0';
	}

}

void writelong(int *a) {
	int i = 0;
	for (i = a[0]; i >= 1; i--)
		printf("%d", a[i]);

}

void main(void) {
	int a[N + 5] = { 0 };
	int b[N + 5] = { 0 };
	int y[N + 5] = { 0 };
	int q[N] = { 0 };
	int m = 0;
	int c = 0;
	int i = 0;
	char p = 0, g = 0, w = 0;
	int j = 0;
	int k = 0;
	int cr = 0;
	int u = 0;
	int l = 0;
	int t = 0;
	int v[N] = { 0 };
	int a2[N] = { 0 };
	int v2[N] = { 0 };
	int asd = 0;
	printf("Enter the opearation");
	scanf_s("%c", &p);
	scanf_s("%*c", &p);
	fflush(stdin);
	switch (p) {
	case'!':
	{
		printf("Enter the number to factorize ");
		scanf_s("%d", &l);
		int d = 1000000;
		int A[N] = { 1 };
		int len = 1, r, s;
		for (k = 2; k <= l; k++) {
			i = 0;
			r = 0;
			while (i < len
				|| r > 0) {
				s = A[i] * k + r;
				A[i] = s % d;
				r = s / d;
				i++;
			}
			len = i;
		}
		for (i = len - 1; i >= 0; i--)
			if (i == len - 1) printf("%d", A[i]);
			else printf("%.6d", A[i]);
			break;

	}

	case'-': {

		printf("Enter the sign of the first number: ");
		scanf_s("%c", &g);
		scanf_s("%*c", &g);
		printf("Enter the first number ");
		readlong(a);
		printf("Enter the sign of the second number");
		scanf_s("%c", &w);
		scanf_s("%*c", &w);
		printf("\nEnter the second number ");
		readlong(b);
		if (g == '-' && w == '+')
		{
			if (a[0] > b[0]) {
				m = a[0];
			}
			else { m = b[0]; }
			c = 0;
			for (i = 1; i <= m; i++) {
				c = c + a[i] + b[i];
				a[i] = c % 10;
				c = c / 10;
			}
			if (c > 0) {
				m = m + 1;
				a[m] = c;
			}
			a[0] = m;
			printf("%c", g);
			writelong(a); break;
		}

		if (g == '+' && w == '-')
		{
			if (a[0] > b[0]) {
				m = a[0];
			}
			else { m = b[0]; }
			c = 0;
			for (i = 1; i <= m; i++) {
				c = c + a[i] + b[i];
				a[i] = c % 10;
				c = c / 10;
			}
			if (c > 0) {
				m = m + 1;
				a[m] = c;
			}
			a[0] = m;
			writelong(a); break;
		}



		if (complong(a, b) < 0) {
			printf("-");
			c = 0;
			for (i = 1; i <= b[0]; i++) {
				c = c + b[i] - a[i] + 10;
				b[i] = c % 10;
				if (c < 10) { c = -1; }
				else { c = 0; }
			}
			while ((b[b[0]] == 0 && b[0] > 1)) b[0] = b[0] - 1;
			writelong(b);
			break;
		}
		else {
			c = 0;
			for (i = 1; i <= a[0]; i++) {
				c = c + a[i] - b[i] + 10;
				a[i] = c % 10;
				if (c < 10) { c = -1; }
				else { c = 0; }
			}
			while ((a[a[0]] == 0 && a[0] > 1)) a[0] = a[0] - 1;
			writelong(a);
		}
		break;
	}



	case'+': {
		printf("Enter the sign of the first number");
		scanf_s("%c", &g);
		scanf_s("%*c", &g);
		printf("Enter the first number ");
		readlong(a);
		printf("Enter the sign of the second number");
		scanf_s("%c", &w);
		scanf_s("%*c", &w);
		printf("\nEnter the second number ");
		readlong(b);
		if ((g == '-' && w == '+') || g == '+' && w == '-')
		{
			if (complong(a, b) < 0)
			{
				c = 0;
				for (i = 1; i <= b[0]; i++) {
					c = c + b[i] - a[i] + 10;
					b[i] = c % 10;
					if (c < 10) { c = -1; }
					else { c = 0; }
				}
				while ((b[b[0]] == 0 && b[0] > 1)) b[0] = b[0] - 1;
				printf("%c", w);
				writelong(b); break;
			}

			if (complong(a, b) > 0)
			{
				c = 0;
				for (i = 1; i <= a[0]; i++) {
					c = c + a[i] - b[i] + 10;
					a[i] = c % 10;
					if (c < 10) { c = -1; }
					else { c = 0; }
				}
				while ((a[a[0]] == 0 && a[0] > 1)) a[0] = a[0] - 1;
				printf("%c", g);
				writelong(a); break;
			}
			if (complong(a, b) < 0)
			{
				c = 0;
				for (i = 1; i <= b[0]; i++) {
					c = c + b[i] - a[i] + 10;
					b[i] = c % 10;
					if (c < 10) { c = -1; }
					else { c = 0; }
				}
				while ((b[b[0]] == 0 && b[0] > 1)) b[0] = b[0] - 1;
				printf("%c", w);
				writelong(b); break;
			}
			if (complong(a, b) == 0) {
				if (g == '-' || w == '-') {
					printf("0");
				}
			}

		}



		if (a[0] > b[0]) {
			m = a[0];
		}
		else { m = b[0]; }
		c = 0;
		for (i = 1; i <= m; i++) {
			c = c + a[i] + b[i];
			a[i] = c % 10;
			c = c / 10;
		}
		if (c > 0) {
			m = m + 1;
			a[m] = c;
		}
		a[0] = m;
		if (w == '+' && g == '+') {
			writelong(a);
		}
		if (w == '-' && g == '-') {
			writelong(a);
		}
		break;
	}

	case'*': {

		printf("Enter the sign of the first number:");
		scanf_s("%c", &g);
		scanf_s("%*c", &g);
		printf("Enter the first number ");
		readlong(a);
		printf("Enter the sign of the second number:");
		scanf_s("%c", &w);
		scanf_s("%*c", &w);
		printf("\nEnter the second number ");
		readlong(b);
		if ((a[0] == 1 && a[N + 4] == 0) || (b[0] == 1 && b[N + 4] == 0)) {
			printf("0"); break;
		}
		cr = 0;
		for (i = 1; i <= a[0]; i++) {
			for (j = 1; j <= b[0]; j++) {
				cr = a[i] * b[j];
				k = i + j - 1;
				while (cr > 0) {
					cr = cr + y[k];
					y[k] = cr % 10;
					cr = cr / 10;
					if (k > y[0]) y[0] = k;
					k = k + 1;
				}
			}
		}

		if ((g == '-' && w == '+') || (g == '+' && w == '-')) {
			printf("-");
			writelong(y);
		}
		else { writelong(y); }



		break;
	}


	case'^': {
		int n = 0;
		int cv[N + 5];
		int cv2[N + 5];
		printf("Enter the sign of the first number:");
		scanf_s("%c", &g);
		scanf_s("%*c", &g);
		printf("Enter the first number ");
		readlong(a);
		printf("\nEnter the stepen ");
		scanf_s("%d", &n);
		if (n == 0) {
			printf("1"); break;
		}
		for (i = 0; i < N + 5; i++) {
			cv[i] = a[i];
			cv2[i] = a[i];
			y[i] = a[i];
		}


		for (u = 0; u < n - 1; u++) {
			for (t = 0; t < N + 5; t++) {
				cv2[t] = y[t];
				y[t] = 0;
			}
			cr = 0;
			for (i = 1; i <= cv[0]; i++) {
				for (j = 1; j <= cv2[0]; j++) {
					cr = cv[i] * cv2[j];
					k = i + j - 1;
					while (cr > 0) {
						cr = cr + y[k];
						y[k] = cr % 10;
						cr = cr / 10;
						if (k > y[0]) y[0] = k;
						k = k + 1;


					}

				}
			}

		}
		if (n % 2 == 0) {
			writelong(y);
		}
		else { printf("-"); writelong(y); }
		break;
	}


	case 'S': {


		printf("Enter the begging number");
		readlong(a);
		printf("Enter the second");
		readlong(v);
		for (i = 0; i < N; i++) {
			a2[i] = a[i];
		}
		for (i = 0; i < N; i++) {
			v2[i] = v[i];
		}

		c = 0;
		for (i = 1; i <= a2[0]; i++) {
			c = c + v2[i] - a2[i] + 10;
			v2[i] = c % 10;
			if (c < 10) { c = -1; }
			else { c = 0; }
		}
		while ((v2[v2[0]] == 0 && v2[0] > 1)) v2[0] = v2[0] - 1;
		int q[N] = { 0 };
		q[1] = 1;
		if (v2[0] > q[0]) {
			m = v2[0];
		}
		else { m = q[0]; }
		c = 0;
		for (i = 1; i <= m; i++) {
			c = c + v2[i] + q[i];
			v2[i] = c % 10;
			c = c / 10;
		}
		if (c > 0) {
			m = m + 1;
			v2[m] = c;
		}
		v2[0] = m;


		if (a[0] > v[0]) {
			m = a[0];
		}
		else { m = v[0]; }
		c = 0;
		for (i = 1; i <= m; i++) {
			c = c + a[i] + v[i];
			a[i] = c % 10;
			c = c / 10;
		}
		if (c > 0) {
			m = m + 1;
			a[m] = c;
		}
		a[0] = m;


		cr = 0;
		for (i = 1; i <= a[0]; i++) {
			for (j = 1; j <= v2[0]; j++) {
				cr = a[i] * v2[j];
				k = i + j - 1;
				while (cr > 0) {
					cr = cr + y[k];
					y[k] = cr % 10;
					cr = cr / 10;
					if (k > y[0]) y[0] = k;
					k = k + 1;
				}
			}
		}
		for (i = y[0]; i > 0; i--) {
			asd = asd * 10 + y[i];
			if (k == 0 && asd < 2 && i > 1) continue;
			k = 1;
			printf("%d", asd / 2);
			asd = asd % 2;
		}
		break;
	}


	default: printf("Incorrect operation"); break;



	}
	_getch();

}