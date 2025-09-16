# #while loop
# count = 1
# while count <=5 :
#     print("Hello")
#     count += 1

# i =1
# while i<=5:
#     print("Kartik")
#

#question 1->
# i = 1
# while i<=100 :
#     print(i)
#     i+=1

#qs 2
# i=100
# while i>=1:
#     print(i)
#     i-=1 

#qs3(Multiplication)
# n = int(input("Enter a number:"))
# i = 1
# while i<=10:
#     print(n*i)
#     i+=1

#qs4 Print the element of list using loops.
# nums =[1,4,9,16,25,36,49,64,81,100]
# i = 0
# while i<len(nums):
#     print(nums[i])#nums[0],nums[1]
#     i+=1

#qs5(Search a element in tupple )
tup = (1,4,9,16,25,36,49,64,81,100)
i = 0
x = 36
while i<len(tup):
    if(tup[i]==x):
     print("Found at",i)