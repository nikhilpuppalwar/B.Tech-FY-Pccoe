age=input('your age is ')
age=int(age)
if age>18:
    print("you are eligible for voting")
    print("you are adult")
elif age>12:
    print("you are not eligible for voting ")
    print("you are young")
else:
    print("you are child")