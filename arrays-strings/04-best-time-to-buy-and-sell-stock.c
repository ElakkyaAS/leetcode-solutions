#include<stdio.h>
#include<stdlib.h>
int maxProfit(int *prices, int priceSize);
int main(){
    int priceSize;
    printf("Enter the number of prices: ");
    scanf("%d", &priceSize);
    int *prices = (int*)malloc(priceSize*sizeof(int));
    printf("Enter the stock prices for %d days :\n", priceSize);
    for(int i=0; i<priceSize; i++){
        scanf("%d", &prices[i]);
    }
    printf("The stock prices are :\n");
    for(int i=0; i<priceSize; i++){
        printf(" %d", prices[i]);
    }
    int max_profit=maxProfit(prices, priceSize);
    printf("\nMaximum profit : %d\n", max_profit);

    return 0;
}
int maxProfit(int *prices, int priceSize){
     int Lprice=prices[0];
    int Mprofit = 0;
    for(int i=1; i<priceSize; i++){
        int profit = prices[i]-Lprice;
        if(profit>Mprofit){
            Mprofit = profit;
        }
        if(prices[i]<Lprice){
            Lprice=prices[i];
        }
    }
    return Mprofit;
   
    
}