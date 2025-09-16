#nested dictionary
student ={
    "name ":"Kartik",
    "subject":{
        "maths": 95,
         "phy": 90

    }
}

print(student["subject"]["phy"])
print(student.keys())#To find keys name.
print(student.values())#To find values of keys
print(student.items())#It returns all the pairs
print(student.get("name"))#It give no error
student.update({"city":"mzp"})
print(student)