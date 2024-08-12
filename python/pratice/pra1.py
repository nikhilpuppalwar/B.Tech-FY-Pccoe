aa=input("enter your name ")
print("your name is {}".format(len(aa)))  #is to find length of an string
print("your name is {}".format(aa.lower())) # is to convert string in lower case
print("your name is {}".format(aa.upper())) # is to convert in upper case
print("your name is {}".format(aa[2:-1])) # the vaule well start from 2 to -1/len(aa)
print("{} ".format(aa)*10)
print(" your full name is {} {}".format(aa,'puppalwar'))
print(f"{'The Right Aligned String!!!' : <100}")  # for alignment <left >right ^center

