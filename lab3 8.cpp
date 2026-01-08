#include <stdio.h>

int main() {
	int h,m,s,n;
	scanf("%d:%d:%d",&h,&m,&s);
	printf("hour:%d\nminute:%d\nsecond:%d\nNext minutes (0-120): ",h,m,s);
	scanf("%d",&n);
	m = m+n;
	if (s>=60) {
		m = m+1;
		s = s-60;
	}
	if (m>=60 && m<120) {
		h = h+1;
		m = m-60;
	}
	else if (m>=120 && m<180) {
		h = h+2;
		m = m-120;
	}
	else {
		printf("Error\n");
	}
	if (h>=24) {
		h = 0;
	}
	printf("hour:%d\nminute:%d\nsecond:%d",h,m,s);
}
