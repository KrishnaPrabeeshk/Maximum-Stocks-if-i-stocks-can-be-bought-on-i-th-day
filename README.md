# Maximum-Stocks-if-i-stocks-can-be-bought-on-i-th-day
Problem Statement : In a stock market, there is a product with its infinite stocks. The stock prices are given for N days, where arr[i] denotes the price of the stock on the ith day. There is a rule that a customer can buy at most i stock on the ith day. If the customer has an amount of k amount of money initially, find out the maximum number of stocks a customer can buy. 
Example : Input : price[] = { 10, 7, 19 }, 
              k = 45.
Output : 4
A customer purchases 1 stock on day 1, 
2 stocks on day 2 and 1 stock on day 3 for 
10, 7 * 2 = 14 and 19 respectively. Hence, 
total amount is 10 + 14 + 19 = 43 and number 
of stocks purchased is 4.

Input  : price[] = { 7, 10, 4 }, 
               k = 100.
Output : 6
Algorithm : So, we will sort the pair of two values i.e { stock price, day } according to the stock price, and if stock prices are same, then we sort according to the day. 
Now, we will traverse along the sorted list of pairs, and start buying as follows: 
Let say, we have R rs remaining till now, and the cost of product on this day be C, and we can buy atmost L products on this day then, total purchase on this day (P) = min(L, R/C) 
Now, add this value to the answer. total_purchase = total_purchase + P, where P =min(L, R/C) 
Now, subtract the cost of buying P items from remaining money, R = R – P*C. 
Total number of products that we can buy is equal to total_purchase.
