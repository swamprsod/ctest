// t,s,a;main(){for(;t<300;t++){a=t%60;s=a>30?59-a:a;printf("\033c%*s%s\n",s,"",a>30?"<><":"><>");usleep(100000);}} 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


#define b 60

int a=0;
int m=((b/2)-2);
void clear(){
system("clear");
}

void fih(){
a=0;
m=((b/2)-2);
while(a!=b){
	if(a<=(b/2)){
		for(int i=0; i<a;){
			printf(" ");
			i++;
		}
		clear();
		printf("><>\n");
		a++;
		usleep(100000);
	}
	else{
		for(int j=0; j<m;){
			printf(" ");
			j++;
		}
		clear();
		m--;
		printf("<><\n");
		a++;
		usleep(100000);	
	}
}
}
int
main(){


for(int i=0;i<5;){
fih();
i++;
}
}
