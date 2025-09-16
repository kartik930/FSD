# #qs1 (WAF to print length of list )
# cities =["delhi","noida","Ghaziabad"]
#heroes=["thor","ironman","caoptain america"]

# def print_len(list):
#     print(len(list))


# print_len(cities)
# print_len(heroes)

# #qs2(WAF to print elements of a list in single line)
# heroes=["thor","ironman","caoptain america"]
# def print_list(list):
#     for item in list:
#         print(item,end=" ")

# print_list(heroes)   

#qs3(WAF To print factorial of n)
n=5
def cal_fact(n):
    fact = 1
    for i in range(1, n+1):
        fact *= i
    print(fact)

cal_fact(6) 
