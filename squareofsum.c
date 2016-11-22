/*
Student name : Kabir Shrestha
Subjeect : Programming Fundamental
Lab No. : 16
Program : Write a program to find the sum of square of first n natural numbers. 
Date : 2016-11-22
*/
#include<stdio.h>
#include<conio.h>
	int main(){
		int a,i,sum=0;
		
		printf("\nEnter a number : ");
		scanf("%d",&a);
		
		for(i=0;i<=a;i++){
			sum=sum+i*i;
		}
		printf("\nThe sum of square of the number is : %d",sum);
		
		getch();
	}