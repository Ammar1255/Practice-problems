#include <stdio.h>
int main(){
	double income,totalincome,taxamount,netincome,tax;
	printf("Enter the total income:");
	scanf("%d", &totalincome);
	
	if (income=250,000){
		tax=0.0;
	}else if (income>=250001 && income<=500000){
		tax= (income-250000)*0.05;
	}else if (income>=500001 && income>=1000000){
		tax= ((250000*0.05)+(income-500000)*0.20);
	}else if (income>1000000 ){
		tax=((250000*0.05)+(500000*0.20)+(income-100000)*0.30);
	}
	netincome=income-tax;
	printf("Total income %.2lf\n", income);
	printf("Tax amount: %.2lf\n",tax);
	printf("Net income: %.2lf\n",netincome);
	

	return 0;
}