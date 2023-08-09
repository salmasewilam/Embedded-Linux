
data={
    "Ahmed":"1394",
    "Ali":"6078",
    "Amr":"9345"
}
username=input("please enter the username  ")
password= input("please enter the password   ")

if username in data:
    
    if password==data[username]:
        print("welcome")
    else:
        print("incorrect entry")

else:
    print("user incorrect")

