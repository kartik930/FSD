#1
sub ={
    "python","java","c++","python","javascript","java",
    "python","java","c++","c"

}
print(sub)#individual subjects
print(len(sub))#NO. of classrooms
#2

marks ={}

x=int(input("Enter phy marks"))
marks.update({"phy":x})

x=int(input("Enter chem marks"))
marks.update({"chem":x})

x=int(input("Enter maths marks"))
marks.update({"maths":x})
print(marks)