#Types of file 
#1->Text file(txt,docx,.log..etc)
#2->Binary files:.mp4,.mov,.png,.jpeg etc
f = open("demo.txt","r")
data = f.read()
print(data)
print(type(data))
f.close()