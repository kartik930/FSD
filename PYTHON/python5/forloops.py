#For loops are used for sequenmtial traverse.and 
# tup =(1,2,3,4,5)
# for num in tup:
#     print(num)
# str ="Kartik "
# for char in str:
#         if(char=='t'):
#             print("t found")
#             break#We will not use erlse in break
#         print(char)

#qs1(Print element of list using for)
# list =[1,4,9,16,25,36,49,64,81,100]
# for num in list:
#     print(num)
        
#qs2(Search a element x in tuple)Linear search

nums = (1,4,9,16,25,36,49,64,81,100,49)
x = 49

idx = 0
for el in nums:
    if(el == x):
        print("number found at idx",idx)
    idx += 1
      