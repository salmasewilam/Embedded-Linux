import openpyxl

file=open("/home/salma/Documents/EmbeddedLinux/Embedded-Linux/Python/file1.txt","r")
c=0
 # reading each line   
for line in file:
  
    # reading each word       
    for word in line.split():
  
        # counting the words          
        c=c+1

print (c)