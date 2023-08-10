numbers=list(input("please enter the numbers  "))
counter=0
for i in range(len(numbers)):
    if numbers[i]=='4':
        counter=counter+1
    else:
        pass

print(f"number of 4 equal= {counter}")