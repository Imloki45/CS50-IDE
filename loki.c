#include<stdio.h>
#include<stdlib.h>
struct cl {
	int e;
	struct cl *n;
}*f=NULL,*r=NULL;
void ins() {
	struct cl *ne;
	printf("ENTER ELEMENT\n");
	ne=(struct cl *)malloc(sizeof(struct cl));
	scanf("%d",&ne->e);
	if(f==NULL)
			f=r=ne;
	else{
		ne->n=f;
		r->n=ne;
		r=ne;
	}
}
void del() {
	struct cl *t=f;
	if(f==NULL) {
		printf("NO ELEMENT TO DELETE\n");
		return ;
	}
	else {
		printf("ele is %d\n",f->e);
		f=t->n;
		r->n=f;
		free(t);
	}
}
void dis() {
	struct cl *d=f;
	if(d==NULL) {
		printf("NO ELEMENTS TO DISPLAY\n");
		return ;
	}
	while(d!=r) {
		printf("%d\n",d->e);
		d=d->n;
	}
	printf("%d\n",d->e);
}
main() {
	int ch;
	do {
		printf("\n1.inserting\n2.deleting\n3.display\n");
		scanf("%d",&ch);
		switch(ch) {
			case 1:
				ins();
				break;
			case 2:
				del();
				break;
			case 3:
				dis();
				break;
		}
	}while(ch>=1&&ch<=4);
}