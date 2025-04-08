#include <stdio.h>
#include <math.h>

int add(int v1,int v2);
int sub(int v1,int v2);
int mul(int v1,int v2);
int div(int v1,int v2);

int main(){
	int opt,v1,v2;
	printf("1:add,2:sub,3:mul,4:div:");
	scanf("%d",&opt);
	printf("Enter the operands:")
	scanf("%d%d",&v1,&v2);
	
	if(opt == 1){
		add(v1,v2);
	}

	else if(opt == 2){
		sub(v1,v2);
	}

	else if(opt == 3){
		mul(v1,v2);
	}

	else if(opt == 4){
		add(v1,v2);
	}
	
	else if(opt == 5){
		exp(v1,v2);
	}


}



int add(int v1,int v2){
	return (v1+v2);
}

int sub(int v1,int v2){
	return (v1-v2);
}

int mul(int v1,int v2){
	return (v1*v2);
}

int div(int v1,int v2){
	return (v1/v2);
}

int exp(int v1,int v2){
	return (pow(v1,v2));
}
