#include<stdio.h>
#define si 50
char i[si],p[si],s[si];
int top=-1,ts=-1,h=0;
void push(char x) {
	top++;
	p[top]=x;
}
void push1(char x) {
	ts++;
	s[ts]=x;
}
int pre(char x) {
	switch(x) {
		case '(':
			return 0;
		case '+':
			return 1;
		case '-':
			return 1;
		case '*':
			return 2;
		case '/':
			return 2;
		case '^':
			return 3;
	}
}
void pop() {
	int t=ts;
	if(s[ts]=='(')
	ts--;
	else {
	push(s[t]);
	ts--; }
}
main() {
	int j;
	scanf("%[^\n]",i);
	for(j=0;i[j]!='\0';j++) {
		if(isdigit(i[j])) {
			push(i[j]);
		}
		else if(i[j]=='(') {
			push1(i[j]);  }
		else if(i[j]==')') {
					while(s[ts]!='(')
					pop(); }
		else {
			if(ts==-1)
			push1(i[j]);
			else {
				if(pre(i[j])>pre(s[ts]))
					push1(i[j]);
				else if(pre(i[j])==pre(s[ts])) {
					pop();
					push1(i[j]); }
				else if(pre(s[ts])>pre(i[j])) {
					pop();
					push1(i[j]);
				}

			}
		}
	}
			while(ts!=-1)
			pop();
	for(j=0;p[j]!='\0';j++)
	printf("%c",p[j]);
}