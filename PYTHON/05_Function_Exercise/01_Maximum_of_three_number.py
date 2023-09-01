def maximum():
    
    num1 = float(input("Enter The First Number : "))
    num2 = float(input("Enter The Second Number : "))
    num3 = float(input("Enter The Third Number : "))


    if num1 >= num2 and num1 >= num3:
        larg = num1
    elif num2 >= num1 and num2 >= num3:
        larg = num2
    else:
        larg = num3
        
    print("The maximum Number is :",larg)


maximum() #Function Calling
