#list [1,2,etc]
student = ["kartik",95.4,"gzb"]
print(student)
#strings-> immutable(can't change) in python
#list->mutable(change) in python
#list slicing->ending index is not included
#ex-marks [87,64,33,95,76]
#marks[1:4]is [64,33,95]
marks = [85,94,66,76]
print(marks[1:4])


#list method->1(append)
list = [2,1,3]
list.append(4)
print(list)
#2(sort)->automatically arrange in ascendoing order
print(list.sort())
print(list)
#list.sort(reverse=True)For descesnding order
#3 (reverse)
list.reverse()
print(list)
#4 insert->insert at particular index
list.insert(1,7)
print(list)
#5 remove(1)->remove first occurence of element
#6remove(1)->remove first occurence of ekement
#7pop(idx)->remove element at idx